# Rush02

Weekend team project: parse a configurable dictionary and convert arbitrarily large non-negative integers to words.

**Subject:** [Rush02_subject.pdf](./Rush02_subject.pdf)

## Description

Rush02 is a weekend team project that converts a number written with decimal
digits into its textual representation.

The program loads a dictionary that maps numeric values to words. It must
parse the dictionary, validate the input number and combine dictionary entries
to produce the complete textual representation.

A custom dictionary can be supplied as an optional command-line argument.

## Implementation

The solution is located in [`ex00`](./ex00/).

## Files

| File | Purpose |
|:---|:---|
| [`Makefile`](./ex00/Makefile) | Builds the `rush-02` executable |
| [`main.c`](./ex00/main.c) | Program entry point and argument handling |
| [`a.h`](./ex00/a.h) | Shared declarations and structures |
| [`read_file.c`](./ex00/read_file.c) | Reads dictionary data |
| [`count_lines.c`](./ex00/count_lines.c) | Counts dictionary entries |
| [`ft_parse.c`](./ex00/ft_parse.c) | Parses dictionary content |
| [`nbr_en.c`](./ex00/nbr_en.c) | Converts numeric values into words |
| [`process_all.c`](./ex00/process_all.c) | Coordinates complete number conversion |
| [`small_func.c`](./ex00/small_func.c) | Helper functions |
| [`numbers.dict`](./ex00/numbers.dict) | Default number dictionary |
