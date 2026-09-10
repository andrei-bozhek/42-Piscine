# Rush00

Weekend team project: draw a rectangle for the assigned Rush04 character pattern while handling edge dimensions safely.

[← Back to main README](../README.md) · [Rush00_subject.pdf](./Rush00_subject.pdf)

## Description

Rush00 is a weekend team project focused on generating rectangular patterns
from a width and height.

The border characters depend on the assigned Rush variant, while the function
must also correctly handle one-row, one-column and minimal-size rectangles.

This implementation uses the **Rush04** pattern.

## Implementation

The solution is located in [`ex00`](./ex00/).

## Files

| File | Purpose |
|:---|:---|
| [`main.c`](./ex00/main.c) | Runs the Rush function with test dimensions |
| [`rush04.c`](./ex00/rush04.c) | Generates the assigned rectangle pattern |
| [`ft_putchar.c`](./ex00/ft_putchar.c) | Writes individual characters to standard output |
