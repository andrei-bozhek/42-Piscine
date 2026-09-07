# ex06 - Skip

[Subject PDF](../Shell01_subject.pdf)

## Task

Run `ls -l` but print only every second output line, starting from the first line.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex06/` |
| File to turn in | `skip.sh` |
| Allowed functions | None |

## How it was done

`awk` numbers the lines from `ls -l`; `NR % 2 == 1` keeps lines 1, 3, 5, and so on. This also keeps the initial `total` line because it is line 1.