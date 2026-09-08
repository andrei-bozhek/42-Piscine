# ex07 - r_dwssap

[← Back to Shell01](../README.md) · [Subject PDF](../Shell01_subject.pdf)

## Task

Process `/etc/passwd` in the required order: remove comments, keep every other line starting with the second, reverse login names, sort in reverse order, select `FT_LINE1..FT_LINE2`, join with `, `, and finish with a period.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex07/` |
| File to turn in | `r_dwssap.sh` |
| Allowed functions | None |

## How it was done

The pipeline follows the subject step by step: `grep` removes comments, `awk` keeps even-numbered lines, `cut` extracts the login field, `rev` reverses each login, `sort -r` orders them, `sed -n` applies the requested line range, `paste` joins the lines, and the final `sed` formats separators and the trailing period.
