# ex01 - print_groups

[← Back to Shell01](../README.md) · [Subject PDF](../Shell01_subject.pdf)

## Task

Display all groups of the user named by `FT_USER`, separated by commas with no spaces.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex01/` |
| File to turn in | `print_groups.sh` |
| Allowed functions | None |

## How it was done

`id -Gn "$FT_USER"` returns the user’s group names separated by spaces. `tr ' ' ','` changes those separators to commas without altering the group names.
