# `strcpy(3)` reference

Local manual:

```sh
man 3 strcpy
```

Online reference: [Linux `strcpy(3)` manual](https://man7.org/linux/man-pages/man3/strcpy.3.html)

## Prototype

```c
#include <string.h>

char *strcpy(char *restrict dst, const char *restrict src);
```

## Behavior

`strcpy` copies the complete null-terminated string from `src` to `dst`,
including the final `\0` byte.

The destination buffer must be large enough for `strlen(src) + 1` bytes.
The source and destination objects must not overlap.

## Return value

`strcpy` returns `dst`.
