*This project has been created as part of the 42 curriculum by nmagro-r.*

# push_swap

Sorting integers with two stacks and a very limited set of moves. The program does not print the sorted numbers: it prints the list of moves that sorts them, and the goal is to make that list as short as possible.

## Description

All the numbers start on stack `a`, and stack `b` starts empty. These are the only moves allowed:

| Move | Effect |
|---|---|
| `sa` `sb` `ss` | Swap the top two elements of `a`, of `b`, or of both |
| `pa` `pb` | Move the top element from one stack to the other |
| `ra` `rb` `rr` | Rotate: the top element goes to the bottom |
| `rra` `rrb` `rrr` | Reverse rotate: the bottom element goes to the top |

### Results

Measured on random inputs. Every output was replayed by a separate script to confirm that the stack ends up sorted.

| Numbers | Runs | Best | Average | Worst | Top score in the project |
|---|---:|---:|---:|---:|---|
| 100 | 200 | 526 | 578 | 620 | Under 700 |
| 500 | 60 | 4912 | 5083 | 5296 | Under 5500 |

Small inputs were tested exhaustively: all the possible orders of 2 to 6 numbers end up sorted. Three numbers take at most 2 moves and five numbers at most 12.

## Instructions

Requires `make` and a C compiler.

```bash
make
./push_swap 3 2 1
```

```
sa
rra
```

To count the moves for 100 random numbers on Linux:

```bash
ARG=$(shuf -i 1-100 -n 100 | tr '\n' ' '); ./push_swap $ARG | wc -l
```

Numbers can be passed as separate arguments or as one quoted string. Anything that is not a number, does not fit in an `int` or appears twice prints `Error` on standard error. If the numbers are already sorted, it prints nothing.

## How it works

1. **Rank the values.** Each number is replaced by its position in sorted order, so the algorithm only ever deals with `0` to `n - 1`, whatever the original values were.
2. **Handle small inputs.** Up to five values have their own short routines.
3. **Push to `b` in chunks.** The program keeps a sliding window of ranks, with a width of `√n × 1.4`, and goes through `a`:
   - if the top value is below the window, it goes to `b` and is rotated to the bottom;
   - if it is inside the window, it goes to the top of `b`;
   - otherwise `a` rotates to look at the next value.

   This leaves `b` roughly ordered, with the largest values near the top and the smallest near the bottom.
4. **Bring everything back.** The largest value left in `b` is located and rotated to the top, in whichever direction is shorter, then pushed to `a`. Repeating this from the largest to the smallest leaves `a` sorted.

Since each value only has to be found within a roughly ordered stack, the total number of moves stays far below that of a simple selection sort.

## Resources

### References

- [Stack on Wikipedia](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))
- [Bucket sort on Wikipedia](https://en.wikipedia.org/wiki/Bucket_sort), the idea behind sorting by chunks

### AI Usage

AI assistants were used for two tasks, always with me reviewing and testing the result:

- **Bug fixing and cleanup:** the routine for five numbers, input validation and the Makefile, and removing compiled files from the repository.
- **Documentation:** this README, checked against the code.

The design decisions were mine, and I can explain every part of the code.
