# `strlen(3)` reference

Local manual:

```sh
man 3 strlen
```

Online reference: [Linux `strlen(3)` manual](https://man7.org/linux/man-pages/man3/strlen.3.html)

## Prototype

```c
#include <string.h>

size_t strlen(const char *s);
```

## Behavior

`strlen` counts the number of bytes before the first terminating `\0` byte.
The terminating byte itself is not included in the result.

## Return value

The number of bytes in the string before `\0`.
