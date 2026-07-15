# C Practice Programs

A collection of small C programs written while practising core language concepts.

## Topics

- `c_programs/arrays/` — one-dimensional and two-dimensional arrays
- `c_programs/basics/` and `c_programs/operators/` — basic syntax and operators
- `c_programs/bitwise/` — bitwise operations and bit algorithms
- `c_programs/control_flow/` — conditionals, loops, and ternary expressions
- `c_programs/data_structures/linked_list/` — a student linked-list project
- `c_programs/file_handling/` — text-file input/output
- `c_programs/functions/` — functions and storage classes
- `c_programs/language_features/` — structures, unions, typedefs, enums, and macros
- `c_programs/linux_system_programming/` — Linux resource-limit examples
- `c_programs/pointers/` and `c_programs/strings/` — pointer and string exercises
- `Practice/` — additional completed practice programs

## Build and run

Most files are standalone exercises. Compile one file at a time:

```sh
cc -Wall -Wextra -std=c11 c_programs/arrays/one_dimensional/leader.c -o leader
./leader
```

The linked-list project has its own Makefile:

```sh
make -C c_programs/data_structures/linked_list
```

Build outputs and unfinished local drafts are intentionally not tracked.
