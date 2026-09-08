# ex02 - Oh yeah, mooore...

[← Back to Shell00](../README.md) · [Subject PDF](../Shell00_subject.pdf)

## Task

Reproduce the exact set of files and directories shown by `ls -l`, including permissions, sizes, timestamps, a hard link, and a symbolic link, then archive everything as `exo2.tar`.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex02/` |
| File to turn in | `exo2.tar` |
| Allowed functions | None |

## How it was done

`mkdir` and regular files create `test0`-`test4`; `test5` is a hard link to `test3`, and `test6` is a symbolic link to `test0`. `chmod` sets the requested modes, `touch` sets the timestamps, and `tar -cf` preserves the resulting layout.
