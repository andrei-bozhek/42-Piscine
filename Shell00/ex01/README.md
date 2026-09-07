# ex01 - testShell00

[Subject PDF](../Shell00_subject.pdf)

## Task

Create a 40-byte file named `testShell00` with permissions `-r--r-xr-x` and the requested June 1 timestamp, then submit it as a tar archive.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex01/` |
| File to turn in | `testShell00.tar` |
| Allowed functions | None |

## How it was done

A 40-byte file was created, its mode was set with `chmod 455`, its timestamp was adjusted with `touch`, and it was archived with `tar -cf testShell00.tar testShell00`. The archive preserves the file metadata.
