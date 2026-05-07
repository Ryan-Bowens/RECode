# Bash Scripting — Interview Prep

Practice scripts written as part of Lockheed Martin interview preparation, covering core Bash scripting fundamentals.

---

## Contents

| File | Topic | Description |
|------|-------|-------------|
| `lesson1.sh` | Variables & Input | Script variables, `echo` output, and user input with `read -p` |
| `lesson2.sh` | Conditionals | `if/elif/else` with numeric and string comparisons |
| `lesson3.sh` | Loops | `for` loops over arrays, `while` loops with arithmetic |
| `lesson4.sh` | Functions | Defining and calling functions, positional parameters (`$1`, `$2`) |
| `lesson5.sh` | File I/O & Piping | Writing and reading files, chaining commands with `\|`, `grep`, `wc` |
| `challenge.sh` | Combined Challenge | End-to-end script combining file I/O, piping, and error detection |

---

## Concepts Covered

- Variable declaration and the no-spaces-around-`=` rule
- User input with `read` and the `-p` prompt flag
- Conditionals using `[[ ]]` with `-gt`, `-lt`, `-eq` for numbers and `==` for strings
- `for` loops with ranges `{1..n}` and arrays
- `while` loops with arithmetic using `$(( ))`
- Functions with positional parameters `$1`, `$2`, `$3`
- File creation with `>` (overwrite) and `>>` (append)
- Reading files line by line with `while IFS= read -r LINE`
- Piping commands together — `cat | grep | wc -l`
- Capturing command output with `$()`

---

## How to Run

Requires a Bash-compatible terminal. On Windows, use **Git Bash**.

```bash
bash lesson1.sh
```

No compilation needed — Bash scripts run directly.

---

## Author

Ryan Bowens — [github.com/Ryan-Bowens](https://github.com/Ryan-Bowens)
