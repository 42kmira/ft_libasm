# ft_libasm

In this project we program some elementary functions
- read
- strcmp
- strcpy
- strdup
- strlen
- write

but in assembly. We use x86 Intel syntax for this project.


The project creates a .a using the nasm assembler in the macho64 file format. Seperately from the library file, the project also includes a ```main.c``` which
is a test suite that compares the behavior of these function with those found in standard implementations of the C library. This includes correct errno handling.
