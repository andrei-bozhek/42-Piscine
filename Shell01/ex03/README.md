# ex03 - count_files

[Subject PDF](../Shell01_subject.pdf)

## Task

Count regular files and directories recursively, including the starting directory `.` itself.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex03/` |
| File to turn in | `count_files.sh` |
| Allowed functions | None |

## How it was done

`find .` emits the starting directory and all descendants. The grouped `-type f -o -type d` expression keeps regular files and directories, and `wc -l` counts the resulting lines.
