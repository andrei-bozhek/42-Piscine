# `strdup(3)` reference

Local manual:

```sh
man 3 strdup
```

Online reference: [Linux `strdup(3)` manual](https://man7.org/linux/man-pages/man3/strdup.3.html)

## Prototype

```c
#include <string.h>

char *strdup(const char *s);
```

## Behavior

`strdup` allocates enough memory for a complete copy of `s`, including its
terminating `\0`, copies the string, and returns the newly allocated string.
The allocation is obtained through `malloc`.

The returned string is independent of the original and can be modified without
changing `s`.

## Return value

- on success: pointer to the new duplicate string;
- on allocation failure: `NULL` (`errno` is normally set to `ENOMEM`).

The successful result must eventually be released with `free`.
