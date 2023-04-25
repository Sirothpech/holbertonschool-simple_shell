# Simple Shell Project

This is a project for Holberton School's System Engineering & DevOps curriculum. The project is a simple shell program that can execute basic commands, implement custom commands, and handle command line arguments.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to (why?)

## Getting Started

To get started, clone the repository to your local machine:

```
$ git clone https://github.com/<USERNAME>/simple_shell.git

```
## List of allowed functions and system calls+

- all functions from strings.h
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- printf (man 3 printf)
- fprintf (man 3 fprintf)
- vfprintf (man 3 vfprintf)
- sprintf (man 3 sprintf)
- putchar (man 3 putchar)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## Compilation

To compile the program, navigate to the root directory of the repository and run the following command:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

This will compile all the source files in the repository and generate an executable file named "hsh".

## Usage

To use the simple shell program, run the following command in the terminal:

```
$ ./hsh
```

This will start the program in interactive mode, where you can enter commands and receive output.
The simple shell program can also be used in non-interactive mode by passing commands as arguments to the executable file. For example:

```
$ echo "Hello, World!" | ./hsh
```

This will pass the "echo" command with the argument "Hello, World!" to the simple shell program, which will execute the command and output the result.

## Built-in Commands

The simple shell program supports the following built-in commands:

- `cd`: Change the current working directory
- `env`: Print the environment variables
- `exit`: Exit the shell program

## Examples

Here are some examples of using the simple shell program:

```
$ ls -l
total 24
-rw-r--r-- 1 user user 1000 Apr 25 11:30 main.c
-rw-r--r-- 1 user user  500 Apr 25 11:31 execute.c
-rw-r--r-- 1 user user  800 Apr 25 11:32 helpers.c
$ cd ..
$ pwd
/home/user
$ env
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
HOME=/home/user
USER=user
$ exit
```

## Authors

- Christophe Ngan
-  Gaetan Lecuyer
-  Chaherdine Abdou