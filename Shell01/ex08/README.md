# ex08 - add_chelou

[← Back to Shell01](../README.md) · [Subject PDF](../Shell01_subject.pdf)

## Task

Add `FT_NBR1` written in the five-character base `'\"?!` to `FT_NBR2` written in base `mrdoc`, then print the result using the 13-character base `gtaio luSnemf`.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex08/` |
| File to turn in | `add_chelou.sh` |
| Allowed functions | None |

## How it was done

`tr` maps both custom base-5 alphabets to digits `0`-`4`. `bc` performs the addition with `ibase=5` and `obase=13`. A final `tr` maps the base-13 digits `0123456789ABC` to `gtaio luSnemf`.

## Files

- [`add_chelou.sh`](./add_chelou.sh)
