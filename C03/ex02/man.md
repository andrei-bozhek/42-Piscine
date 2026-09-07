# `strcat(3)` reference

Local manual:

```sh
man 3 strcat
```

Online reference: [Linux `strcpy(3)` / `strcat(3)` manual](https://man7.org/linux/man-pages/man3/strcpy.3.html)

## Prototype

```c
#include <string.h>

char *strcat(char *restrict dst, const char *restrict src);
```

## Behavior

`strcat` finds the terminating `\0` of `dst`, overwrites it with the first
byte of `src`, then copies the rest of `src` including its terminating `\0`.

Before the call, `dst` must already be a valid null-terminated string and its
buffer must have room for:

```text
strlen(dst) + strlen(src) + 1
```

The source and destination must not overlap.

## Return value

`strcat` returns the original `dst` pointer.
