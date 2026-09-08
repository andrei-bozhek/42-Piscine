# ex06 - gitignore

[← Back to Shell00](../README.md) · [Subject PDF](../Shell00_subject.pdf)

## Task

Write a shell script that lists files currently ignored by the Git repository.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex06/` |
| File to turn in | `git_ignore.sh` |
| Allowed functions | None |

## How it was done

`git ls-files --others --ignored --exclude-standard` asks Git itself for untracked files matched by the repository’s normal ignore rules, avoiding manual parsing of `.gitignore`.
