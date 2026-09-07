# ex08 - clean

[Subject PDF](../Shell00_subject.pdf)

## Task

Write one command that finds backup files ending in `~` or files whose names begin and end with `#`, prints them, and deletes them.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex08/` |
| File to turn in | `clean` |
| Allowed functions | None |

## How it was done

A single `find` command combines the filename tests with `-o`, restricts matches to regular files with `-type f`, prints each match with `-print`, and removes it with `-delete`. The explicit `-name "#"` also handles a one-character filename that both begins and ends with `#`.