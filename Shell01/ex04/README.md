# ex04 - MAC

[Subject PDF](../Shell01_subject.pdf)

## Task

Display the machine’s MAC addresses, one address per line.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex04/` |
| File to turn in | `MAC.sh` |
| Allowed functions | None |

## How it was done

`ifconfig` provides the interface information. Lines containing `ether` are selected with `grep`, then `awk` prints the address field only.
