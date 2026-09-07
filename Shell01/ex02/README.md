# ex02 - find_sh

[Subject PDF](../Shell01_subject.pdf)

## Task

Find every `.sh` file below the current directory and print only its base name without the `.sh` extension.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex02/` |
| File to turn in | `find_sh.sh` |
| Allowed functions | None |

## How it was done

`find` recursively selects regular files ending in `.sh`. For each match, `basename ... .sh` removes the directory path and strips the `.sh` suffix.
