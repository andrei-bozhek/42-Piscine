# `strncat(3)` reference

Local manual:

```sh
man 3 strncat
```

Online reference: [Linux `strncat(3)` manual](https://man7.org/linux/man-pages/man3/strncat.3.html)

## Prototype

```c
#include <string.h>

char *strncat(char *restrict dst, const char *restrict src, size_t n);
```

## Behavior

`strncat` appends at most `n` non-null bytes from `src` to the end of `dst`,
then appends a terminating `\0`.

The destination must already contain a valid string and its buffer must be
large enough for:

```text
strlen(dst) + strnlen(src, n) + 1
```

## Return value

`strncat` returns `dst`.
