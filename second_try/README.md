<h2>The Second Demo</h2><br>
The assemble code in asm(...) use AT&T<br>
You can type below instructions to run:<br>
gcc -m32 -c -fno-builtin test.c<BR>
ld -m elf_i386 -static -e nomain -o test test.o<BR>
./test
<BR><BR>
Hint:<BR>
Built-in Function provided by GCC will replace the function in C somtimes(for optimizing, like exit()).<BR>
And -fno-builtin can close that(in order to run test.c seccesfully)<BR>
-e nomain: begin with nomain()<BR>
