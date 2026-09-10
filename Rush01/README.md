# Rush01

Weekend team project: solve the 4x4 Skyscrapers puzzle from 16 visibility clues and print the first valid solution.

[← Back to main README](../README.md) · [Rush01_subject.pdf](./Rush01_subject.pdf)

## Description

Rush01 is a weekend team project based on the 4×4 Skyscrapers puzzle.

The program receives sixteen visibility clues and must fill the grid with
building heights from 1 to 4. Each height can appear only once in every row
and column, while the number of visible buildings from each side must match
the corresponding clue.

The solution uses backtracking together with row and column state tracking.

## Implementation

The solution is located in [`ex00`](./ex00/).

## Files

| File | Purpose |
|:---|:---|
| [`main.c`](./ex00/main.c) | Program entry point |
| [`input.c`](./ex00/input.c) | Parses and validates the sixteen input clues |
| [`solve.c`](./ex00/solve.c) | Runs the recursive backtracking search |
| [`state.c`](./ex00/state.c) | Tracks available values for rows and columns |
| [`check.c`](./ex00/check.c) | Checks visibility constraints |
| [`print.c`](./ex00/print.c) | Prints the solved grid |
