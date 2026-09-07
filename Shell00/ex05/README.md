# ex05 - GiT commit

[Subject PDF](../Shell00_subject.pdf)

## Task

Write a shell script that prints the hashes of the five most recent commits in the current Git repository.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex05/` |
| File to turn in | `git_commit.sh` |
| Allowed functions | None |

## How it was done

`git log -n 5` limits the history to five commits and `--pretty="%H"` prints only the full commit hash, one per line.
