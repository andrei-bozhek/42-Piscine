# ex05 - Can you create it?

[← Back to Shell01](../README.md) · [Subject PDF](../Shell01_subject.pdf)

## Task

Create a file whose exact name is `"\?$*'MaRViN'*$?\"`, whose contents are exactly `42` with no newline, and whose permissions match the subject.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex05/` |
| File to turn in | `"\?$*'MaRViN'*$?\"` |
| Allowed functions | None |

## How it was done

The filename contains shell metacharacters, so it must be created with careful quoting/escaping rather than allowing `$`, `*`, `?`, quotes, or backslashes to be interpreted by the shell. The file contains exactly two bytes (`42`) and uses mode `0614` (`-rw---xr--`).
