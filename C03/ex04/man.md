# `strstr(3)` reference

Local manual:

```sh
man 3 strstr
```

Online reference: [Linux `strstr(3)` manual](https://man7.org/linux/man-pages/man3/strstr.3.html)

## Prototype

```c
#include <string.h>

char *strstr(const char *haystack, const char *needle);
```

## Behavior

`strstr` locates the **first** occurrence of the substring `needle` inside
`haystack`. The terminating null bytes are not part of the comparison.

## Return value

- pointer to the first matching position in `haystack`;
- `NULL` if no match exists;
- if `needle` is empty, return `haystack` itself.
