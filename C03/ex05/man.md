# `strlcat(3)` reference

Local manuals may expose this as a BSD interface. Useful commands are:

```sh
man 3 strlcat
man 7 string_copying
```

Online references:

- [Linux `string_copying(7)`](https://man7.org/linux/man-pages/man7/string_copying.7.html)
- [FreeBSD `strlcpy(3)` / `strlcat(3)`](https://man.freebsd.org/strlcat)

## Prototype

```c
#include <string.h>

size_t strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
```

## Behavior

If `dst` contains a terminating `\0` within the first `dstsize` bytes,
`strlcat` appends as much of `src` as fits while reserving one byte for the
final `\0`.

The size argument is the **full size of the destination buffer**, not the
number of source bytes to copy.

## Return value

When `dst` is a valid string within the size limit, the return value is:

```text
initial strlen(dst) + strlen(src)
```

This is the length of the string the function tried to create, even if it did
not fit.

If no `\0` is found in the first `dstsize` bytes of `dst`, the destination
length is treated as `dstsize` and the return value is:

```text
dstsize + strlen(src)
```

In that case no normal append can be performed within the supplied buffer.

Truncation is detected when the return value is `>= dstsize`.
