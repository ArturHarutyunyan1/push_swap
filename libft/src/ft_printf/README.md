# ft_printf Readme

## Overview

Welcome to ft_printf, a simplified representation of the original printf function in C. This project focuses on handling void pointers, characters, strings, numbers, lowercase and uppercase hexadecimal values, and unsigned integers.

## Features

- **Format Specifiers:** ft_printf supports various format specifiers to handle different data types, including `%c` for characters, `%s` for strings, `%d` and `%i` for integers, `%p` for void pointers, `%x` for lowercase hexadecimal, `%X` for uppercase hexadecimal, and `%u` for unsigned integers.

- **Basic Formatting:** The implementation provides basic formatting capabilities, allowing you to print data in a specified format without the need for modifiers or precision control.

## Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/arturharutyunyan1/ft_printf.git
   ```

2. Include the `ft_printf.h` header file in your project.

3. Compile your project with `libftprintf.a`:
   ```bash
   gcc -o your_program your_source.c libftprintf.a
   ```

4. Start using ft_printf in your code with the desired format specifiers.

## Example

```c
#include "ft_printf.h"

int main() {
    int number = 42;
    char character = 'A';
    char *string = "Hello, world!";
    
    ft_printf("Number: %d\n", number);
    ft_printf("Character: %c\n", character);
    ft_printf("String: %s\n", string);

    return 0;
}
```

## Contributing

Feel free to contribute by opening issues, suggesting enhancements, or submitting pull requests. We welcome any feedback or improvements to make ft_printf more robust and versatile.