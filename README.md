FILE-HANDLING-PROGRAM
C File Handling Program
Overview

This project demonstrates basic file handling operations in C, including creating a file, writing data, appending additional content, and reading the file contents character by character. It is designed for beginners to understand how files are managed using standard C library functions.

Features

Creates a text file using write mode

Writes multiple lines of text to the file

Appends new content without overwriting existing data

Reads and displays file contents on the console

Includes proper error handling for file operations

Technologies Used

Programming Language: C

Compiler: GCC / Any standard C compiler

Library: stdio.h

Program Workflow

Open a file in write mode ("w") to create and write initial content.

Close the file after writing.

Reopen the file in append mode ("a") to add new data at the end.

Close the file after appending.

Open the file in read mode ("r").

Read and display file contents character by character until the end of the file.

How to Compile and Run
gcc file_handling.c -o file_handling
./file_handling

Output

A file named sample.txt is created in the program directory.

The complete contents of the file are displayed on the console after execution.

Learning Outcomes

Understanding file modes (w, a, r)

Using fopen(), fprintf(), fgetc(), and fclose()

Handling file-related errors safely

Implementing sequential file reading in C

Use Case

This program is suitable for:

Academic assignments

Beginners learning C programming

Demonstrating file handling concepts in labs or interviews

Author

Atchaya Sivakumar
