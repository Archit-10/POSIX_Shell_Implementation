# Custom-Shell-With-Command-Management-and-Process-Handling


Overview

This project involves creating a custom interactive shell program using C/C++ that can manage new processes, handle background and foreground processes, support input/output redirections, and implement basic shell commands (cd, echo, pwd, ls). The shell also supports pipelining and can display detailed process information.
Features and Requirements

    Shell Prompt Display:
        The shell prompt displays the username, system name, and current directory.
        Example: username@system_name:current_directory>
        The directory from which the shell is invoked is represented by ~.

    Built-in Commands:
        cd: Changes the current directory.
            Flags supported: ., .., -, ~.
            Example: cd ..
        echo: Prints the input string.
            Handles spaces and tabs.
            Example: echo "Hello World"
        pwd: Prints the current working directory.
            Example: pwd

    ls Command:
        Supports -a and -l flags.
        Handles multiple flags and directory/file names.
        Example: ls -al /path/to/dir

    System Commands (Foreground and Background):
        Executes system commands in the foreground or background.
        Prints the process ID (PID) of background processes.
        Example: gedit &

    pinfo Command:
        Prints process-related information.
        Example: pinfo 7777

    search Command:
        Searches for a file or folder recursively under the current directory.
        Example: search xyz.txt

    Pipeline Support:
        Supports command piping using |.
        Example: cat file.txt | wc

Implementation Details
Shell Prompt

    Dynamically fetches the username and system name.
    Displays the current working directory.
    Handles random spaces and tabs using strtok.

Built-in Commands Implementation

    cd: Changes the current directory and handles special flags.
    echo: Prints the input string, handling spaces and tabs.
    pwd: Prints the current working directory.

ls Command

    ls -a: Lists all files including hidden ones.
    ls -l: Lists files with detailed information.
    Combination of Flags: Handles multiple flags and directory/file names.

System Command Execution

    Uses fork and execvp to execute commands.
    Background processes are handled using &, printing their PIDs.

pinfo Command

    Retrieves and displays process information without using popen.

search Command

    Recursively searches for files or folders in the current directory.

Pipeline Support

    Uses pipe and dup2 to redirect output of one command to the input of another.

Usage
Compiling the Code

sh

$ gcc -o shell shell.c

Running the Shell

sh

$ ./shell

Examples

    Changing Directory:

    sh

<Name@UBUNTU:~> cd /path/to/directory

Echo Command:

sh

<Name@UBUNTU:~> echo "Hello, World!"

Print Working Directory:

sh

<Name@UBUNTU:~> pwd

List Files:

sh

<Name@UBUNTU:~> ls -al /path/to/directory

Run Command in Background:

sh

<Name@UBUNTU:~> gedit &

Process Info:

sh

<Name@UBUNTU:~> pinfo 1234

Search File:

sh

<Name@UBUNTU:~> search filename.txt

Command Pipeline:

sh

    <Name@UBUNTU:~> cat file.txt | wc

Guidelines

    Modular Code: The code is organized into functions for better readability and maintenance.
    Error Handling: Appropriate error handling is implemented for system calls and user inputs.
    Documentation: Inline comments are added for clarity.
