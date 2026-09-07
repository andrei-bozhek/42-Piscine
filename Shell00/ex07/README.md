# ex07 - diff

[Subject PDF](../Shell00_subject.pdf)

## Task

Create the target file `b` used by the exercise so that its differences from the supplied file `a` can be represented with `diff`.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex07/` |
| File to turn in | `b` |
| Allowed functions | None |

## How it was done

The exercise is built around `diff` and `patch`: `diff a b > sw.diff` records the changes, while the inverse workflow can recreate `b` from `a` and the patch with `patch a sw.diff -o b`. The resulting target text is stored as `b`.
