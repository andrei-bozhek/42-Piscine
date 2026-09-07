# BSQ

[← Back to main README](../README.md) · [Subject PDF](./BSQ_subject.pdf)

## Description

The goal of BSQ is to find the largest possible square on a map while
avoiding obstacles, then replace the cells of that square with the map's
full character.

The program accepts one or more map files as arguments. If no file is
provided, it reads the map from standard input.

## Validation

| Project | Validation |
|:-------:|:----------:|
| [bsq](./bsq/) | ✅ |

## Files

| File | Purpose |
|---|---|
| [`Makefile`](./bsq/Makefile) | Builds the `bsq` executable |
| [`bsq.h`](./bsq/bsq.h) | Structures and function declarations |
| [`main.c`](./bsq/main.c) | Program entry point and argument handling |
| [`read_all.c`](./bsq/read_all.c) | Reads complete input into memory |
| [`header.c`](./bsq/header.c) | Parses and validates the map header |
| [`parse.c`](./bsq/parse.c) | Parses and validates map rows |
| [`dp.c`](./bsq/dp.c) | Computes the largest square |
| [`solve.c`](./bsq/solve.c) | Coordinates solving and output |
| [`map_utils.c`](./bsq/map_utils.c) | Map allocation and utility functions |

## Usage

```sh
cd bsq
make
./bsq map.txt