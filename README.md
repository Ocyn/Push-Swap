<br/>
<p>
  <a href="https://github.com/Ocyn/Push-Swap">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/768px-42_Logo.svg.png" alt="Logo" width="80" height="80">
  </a>

  <h1>Push Swap</h1>

  <p>
    42 School Project | Made in 2023 - 2024
    <br/>
    <br/>
  </p>
</p>

![Contributors](https://img.shields.io/github/contributors/Ocyn/Push-Swap?color=dark-green) ![Issues](https://img.shields.io/github/issues/Ocyn/Push-Swap) 

## Table Of Contents

* [About the Project](#about-the-project)
* [Built With](#built-with)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
* [Usage](#usage)
* [Authors](#authors)
* [Acknowledgements](#acknowledgements)

## About The Project

The `push_swap` project involves sorting a set of integers using two stacks and a set of instructions for manipulating them.
The goal is to write a program in C named `push_swap` that calculates and displays the smallest program, composed of Push swap language instructions, to sort the given integers.

The objectives of this project are to develop a sorting algorithm, practice C programming, and gain an understanding of basic algorithms and their complexities.
Sorting algorithms and their complexities are common topics in job interviews, making this project an excellent opportunity to delve into the subject.
## Project Structure

- **Source Files (`src/`):**
  - `push_swap.c`: Main program logic and entry point.
  - Other supporting files for parsing, sorting, and utility functions.

- **Header File (`push_swap.h`):**
  - Declarations of structures and function prototypes.

## Built With

Here are a few examples.

* [C](https://en.wikipedia.org/wiki/C_(programming_language))

## Getting Started

**Compatibility Warning**

This project, Push Swap, has primarily been developed and tested on a Linux Ubuntu system. It is essential to note that the project may encounter compatibility issues when executed on different operating systems. The utilization of Linux-specific features, libraries, or commands could lead to unexpected behavior on non-Linux platforms.

To ensure optimal performance and compatibility, it is recommended to run this project on a Linux environment, preferably Ubuntu. Attempting to execute the project on other operating systems may result in errors or unintended behavior.

Please consider this compatibility notice before proceeding with the compilation and execution of Push Swap.

### Prerequisites

If you don't have Make
* Make

```sh
apt-get install build-essential make
```

### Installation

Clone the repo

```sh
git clone https://github.com/Ocyn/Push-Swap.git
cd Push-Swap/
```

## Compilation and Usage:

1. **Makefile:**
   - The project includes a Makefile with the following rules: `NAME`, `all`, `clean`, `fclean`, and `re`.

2. **Compilation:**
   - Compile the project using the provided Makefile.

  ```bash
  make
  ```

3. **Execution:**
Run the program with a list of integers.
```bash
./push_swap 2 1 3 6 5 8
```

4. **Sorting:**
The program calculates and displays the shortest sequence of instructions to sort the given integers.

4. **Clean:**
Clean up object files and executable.
```bash
make fclean
```

# Program Instructions:
- sa: Swap the first two elements of stack A.
- sb: Swap the first two elements of stack B.
- ss: Perform sa and sb simultaneously.
- pa: Push the first element of stack B onto stack A.
- pb: Push the first element of stack A onto stack B.
- ra: Rotate up all elements of stack A (the first element becomes the last).
- rb: Rotate up all elements of stack B (the first element becomes the last).
- rr: Perform ra and rb simultaneously.
- rra: Rotate down all elements of stack A (the last element becomes the first).
- rrb: Rotate down all elements of stack B (the last element becomes the first).
- rrr: Perform rra and rrb simultaneously.

## Rules and Requirements:
A Makefile must be provided for compilation.
The project must be written in C and adhere to the Norme.
The program must calculate and display the shortest sequence of instructions to sort the given integers.
Error messages should be displayed for invalid input.
Functions should not terminate unexpectedly, and no memory leaks are tolerated.
Detailed instructions and examples are provided in the project description.

Follow the provided instructions in the README file for successful compilation and execution of the program.

## Authors

* **Ocyn** - *A Random Dev* - [Ocyn](https://github.com/Ocyn) - *Made the project*

## Acknowledgements

* [42 School](https://github.com/42School)
