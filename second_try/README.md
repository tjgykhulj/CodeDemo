<h2>The Second Demo</h2><br>
gcc -m32 -c -fno-builtin test.c<BR>
ld -m elf_i386 -static -e nomain -o test test.o<BR>
