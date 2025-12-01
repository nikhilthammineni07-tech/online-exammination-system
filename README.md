# Online Examination System (C)

A simple C program where users can Register, Login, and take a multiple-choice exam.  
The project uses basic C concepts and modular coding.

## Features
- User Registration
- User Login (stored in users.txt)
- 5-question MCQ exam
- Score displayed at the end

## File Structure
main.c
exam.c / exam.h
user.c / user.h
utils.c / utils.h

## How to Compile
gcc main.c exam.c user.c utils.c -o exam

## How to Run
./exam   (or run exam.exe on Windows)

## How It Works
1. Register → username & password saved to users.txt  
2. Login → checks stored file  
3. Exam → 5 MCQs, score out of 5

## Requirements
- GCC compiler
- Works on Windows, Linux, and macOS
