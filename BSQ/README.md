# BSQ

[← Back to main README](../README.md) · [Subject PDF](./BSQ_subject.pdf)

## Description

BSQ searches a map for the largest square area that contains no obstacles.

The first line of the map defines the number of rows and the characters used
for empty cells, obstacles and the filled square. The remaining lines contain
the map itself.

When several largest squares have the same size, the topmost one is selected,
and then the leftmost one.

The program can process map files passed as command-line arguments or read a
map from standard input.

## Implementation

The source code is located in [`bsq`](./bsq/).

## Files

| File | Purpose |
|:---|:---|
| [`Makefile`](./bsq/Makefile) | Builds the `bsq` executable |
| [`bsq.h`](./bsq/bsq.h) | Shared structures and function declarations |
| [`main.c`](./bsq/main.c) | Handles files, standard input and program flow |
| [`read_all.c`](./bsq/read_all.c) | Reads the complete input stream |
| [`header.c`](./bsq/header.c) | Parses and validates the map header |
| [`parse.c`](./bsq/parse.c) | Parses and validates map rows |
| [`dp.c`](./bsq/dp.c) | Computes the largest obstacle-free square |
| [`solve.c`](./bsq/solve.c) | Marks the result and produces the final map |
| [`map_utils.c`](./bsq/map_utils.c) | Map allocation and utility functions |

## Usage

```sh
cd bsq
make
./bsq map.txt
```

Multiple maps can be processed in one call:

```sh
./bsq map1.txt map2.txt
```

Without arguments, the program reads from standard input:

```sh
cat map.txt | ./bsq
```