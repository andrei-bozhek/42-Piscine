# `strcmp(3)` reference

Local manual:

```sh
man 3 strcmp
```

Online reference: [Linux `strcmp(3)` manual](https://man7.org/linux/man-pages/man3/strcmp.3.html)

## Prototype

```c
#include <string.h>

int strcmp(const char *s1, const char *s2);
```

## Behavior

`strcmp` compares two null-terminated strings byte by byte until the first
mismatch or until both strings reach `\0`.

For determining the sign of the result, differing bytes are interpreted as
`unsigned char` values. The comparison is not locale-aware.

## Return value

- `< 0` if `s1` is smaller than `s2`;
- `0` if both strings are equal;
- `> 0` if `s1` is greater than `s2`.

Only the **sign** of a nonzero result is specified portably. On glibc and many
other implementations the returned value is the arithmetic difference between
the first differing unsigned bytes.
