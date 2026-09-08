# `strncpy(3)` reference

Local manual:

```sh
man 3 strncpy
```

Online reference: [Linux `strncpy(3)` manual](https://man7.org/linux/man-pages/man3/strncpy.3.html)

Reference checked: 2026-09-07 (Linux man-pages 6.18).

## Prototype

```c
#include <string.h>

char *strncpy(char *restrict dst, const char *restrict src, size_t n);
```

## Behavior

`strncpy` writes exactly `n` destination positions:

- it copies non-null bytes from `src` while they are available;
- if `src` ends before `n`, the remaining positions are padded with `\0`;
- if the first `n` bytes do not contain the end of `src`, the result is not
  automatically null-terminated.

The source and destination objects must not overlap.

## Return value

`strncpy` returns `dst`.

## Important cases

| `src` | `n` | Destination bytes written |
|---|---:|---|
| `"1"` | `5` | `1 00 00 00 00` |
| `"1234"` | `5` | `1 2 3 4 00` |
| `"12345"` | `5` | `1 2 3 4 5` |
| anything | `0` | no bytes written |

## Piscine comparison

The important difference from `strcpy` is the null-padding rule and the fact
that truncation does **not** guarantee a terminating `\0`.
