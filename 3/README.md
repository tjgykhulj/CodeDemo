<h2>The Third Demo : <br>
How to make a tiny program for printing something? <br>
</h2>
gcc -m32 -c -fno-builtin test.c<BR>
ld -m elf_i386 -static -T test.lds -o test test.o<BR>

<br><br>
test.lds为链接脚本，定义需要的段与程序的entry
