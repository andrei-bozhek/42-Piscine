# `strncmp(3)` reference

Local manual:

```sh
man 3 strncmp
```

Online reference: [Linux `strcmp(3)` / `strncmp(3)` manual](https://man7.org/linux/man-pages/man3/strcmp.3.html)

## Prototype

```c
#include <string.h>

int strncmp(const char *s1, const char *s2, size_t n);
```

## Behavior

`strncmp` works like `strcmp`, but compares at most the first `n` bytes.
Comparison also stops when the terminating `\0` of both strings has been
resolved.

Differing bytes are interpreted as `unsigned char` for the sign of the result.

## Return value

- `< 0`, `0`, or `> 0` according to the comparison;
- if `n == 0`, the result is always `0` and no string byte is compared.

As with `strcmp`, only the sign of a nonzero return value is portable.
