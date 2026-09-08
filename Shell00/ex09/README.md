# ex09 - Illusions, not tricks, Michael...

[← Back to Shell00](../README.md) · [Subject PDF](../Shell00_subject.pdf)

## Task

Create a `file(1)` magic definition that recognizes a `42 file` when the string `42` starts at the 42nd byte.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex09/` |
| File to turn in | `ft_magic` |
| Allowed functions | None |

## How it was done

Magic-file offsets are zero-based, so byte 42 is written as offset `41`. The rule `41 string 42 42 file` checks for the literal string `42` there and reports the requested type.
