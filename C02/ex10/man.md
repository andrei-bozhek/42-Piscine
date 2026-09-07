# `strlcpy(3)` reference

Local manuals may expose this as a BSD interface. Useful commands are:

```sh
man 3 strlcpy
man 7 string_copying
```

Online references:

- [Linux `string_copying(7)`](https://man7.org/linux/man-pages/man7/string_copying.7.html)
- [FreeBSD `strlcpy(3)` / `strlcat(3)`](https://man.freebsd.org/strlcat)

## Prototype

```c
#include <string.h>

size_t strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
```

## Behavior

`strlcpy` copies at most `dstsize - 1` bytes from `src` and, when
`dstsize > 0`, writes a terminating `\0`.

Unlike `strncpy`, it does not pad the rest of the destination buffer with
null bytes.

## Return value

It returns the complete length of `src`, regardless of whether truncation
occurred.

Therefore truncation can be detected with:

```c
if (strlcpy(dst, src, dstsize) >= dstsize)
	/* truncated */;
```
