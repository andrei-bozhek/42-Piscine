# ex04 - midLS

[Subject PDF](../Shell00_subject.pdf)

## Task

Write a command that lists non-hidden entries sorted by modification time, separates entries with a comma and a space, and appends `/` to directory names.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex04/` |
| File to turn in | `midLS` |
| Allowed functions | None |

## How it was done

`ls -mpt` combines `-m` for comma-separated output, `-p` for `/` after directories, and `-t` for sorting by modification time. Plain `ls` excludes dotfiles unless explicitly requested.
