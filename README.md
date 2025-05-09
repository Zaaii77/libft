# Libft

`libft` is a custom implementation of a C standard library. It provides a collection of commonly used functions to simplify development in C. This library is designed to be modular and reusable across various projects.

## Features
- Basic string manipulation functions.
- Memory management utilities.
- Linked list operations.
- Utility functions for character and number handling.

## How to Use
1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd ft_printf/libft
   ```

2. Compile the library:
   ```bash
   make
   ```

3. Include the library in your project:
   - Add `libft.a` to your compilation command.
   - Include the header file:
     ```c
     #include "libft.h"
     ```

## Functions List

### Character Checks
- `ft_isalpha` - Checks if a character is alphabetic.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isascii` - Checks if a character is an ASCII character.
- `ft_isprint` - Checks if a character is printable.

### String Manipulation
- `ft_strlen` - Calculates the length of a string.
- `ft_strchr` - Locates the first occurrence of a character in a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings up to a specified number of characters.
- `ft_strlcpy` - Copies a string to a buffer with size limitation.
- `ft_strlcat` - Concatenates two strings with size limitation.
- `ft_strdup` - Duplicates a string.
- `ft_substr` - Extracts a substring from a string.
- `ft_strjoin` - Joins two strings into a new string.
- `ft_strtrim` - Trims characters from the start and end of a string.
- `ft_split` - Splits a string into an array of substrings.
- `ft_strnstr` - Locates a substring in a string.
- `ft_strmapi` - Applies a function to each character of a string.

### Memory Management
- `ft_memset` - Fills a block of memory with a specific value.
- `ft_bzero` - Sets a block of memory to zero.
- `ft_memcpy` - Copies memory from one location to another.
- `ft_memmove` - Moves memory safely between overlapping regions.
- `ft_memchr` - Searches for a byte in a block of memory.
- `ft_memcmp` - Compares two blocks of memory.
- `ft_calloc` - Allocates memory and initializes it to zero.

### Character and Number Conversion
- `ft_toupper` - Converts a character to uppercase.
- `ft_tolower` - Converts a character to lowercase.
- `ft_atoi` - Converts a string to an integer.
- `ft_atol` - Converts a string to a long integer.
- `ft_itoa` - Converts an integer to a string.

### File Descriptor Operations
- `ft_putchar_fd` - Outputs a character to a file descriptor.
- `ft_putstr_fd` - Outputs a string to a file descriptor.
- `ft_putendl_fd` - Outputs a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Outputs an integer to a file descriptor.

### Linked List Operations
- `ft_lstnew` - Creates a new linked list node.
- `ft_lstadd_front` - Adds a node to the front of a linked list.
- `ft_lstadd_back` - Adds a node to the back of a linked list.
- `ft_lstsize` - Counts the number of nodes in a linked list.
- `ft_lstlast` - Returns the last node of a linked list.
- `ft_lstdelone` - Deletes a single node from a linked list.
- `ft_lstclear` - Deletes all nodes from a linked list.
- `ft_lstiter` - Iterates over a linked list and applies a function to each node.
- `ft_lstmap` - Creates a new linked list by applying a function to each node.

### Utility
- `free_tab` - Frees a 2D array of strings.

## Notes
- It is designed to be lightweight and modular for easy integration into other projects.

## License
This project is licensed under the MIT License.
