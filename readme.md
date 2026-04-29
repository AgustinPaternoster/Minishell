# Minishell - A Simple Bash-like Shell

*This project has been created as part of the 42 curriculum by apaterno and jpcarbo.*

## Description
**Minishell** is a 42 school project designed to recreate the core functionalities of a shell (command-line interpreter). The goal was to develop a deep understanding of process creation, signal handling, and file descriptor manipulation in a Unix environment.

The project mimics the behavior of Bash, allowing users to execute commands, manage environment variables, and use complex features like pipes and redirections. It serves as a fundamental exercise in C programming, focusing on system calls and rigorous memory management.

### Key Features
* **Interactive Prompt:** Displays a prompt and maintains a functional command history using the `readline` library.
* **Command Execution:** Searches and executes the correct binary based on the `PATH` variable or absolute/relative paths.
* **Built-in Commands:** Custom implementation of:
    * `echo` (with `-n` option)
    * `cd` (relative or absolute paths)
    * `pwd`, `export`, `unset`, `env`, `exit`.
* **Redirections:**
    * `<` (Input redirection)
    * `>` (Output redirection)
    * `<<` (Heredoc)
    * `>>` (Output redirection in append mode)
* **Pipelines (`|`):** Connects the output of one command to the input of the next.
* **Environment Variables:** Supports `$` expansion and `$?` for the exit status of the last pipeline.
* **Signal Management:** Handles `Ctrl-C`, `Ctrl-D`, and `Ctrl-\` exactly like Bash.

---

## Instructions

### Prerequisites
* A C compiler (`cc` or `gcc`).
* `GNU Readline` library.
* `Make` build tool.

### Compilation
To compile the shell, run the following command in the terminal:
```bash
make
```
will produce the minishell executable. The Makefile includes rules for all, clean, fclean, and re.

### Execution:
Launch the program by running:
```bash
./minishell
```
