<h2>Link foo.asm and test.c</h2>
<BR>

First you should confirm that you have installed nasm.<BR>
If you don't, type (sudo apt-get install nasm)<BR><BR>

After you download foo.asm and test.c, <BR>
you can type these to execute first_try:<BR>
<BR>

nasm -f elf -o foo.o foo.asm<BR>
gcc -m32 -o test.o -c test.c<BR>
ld -m elf-i386 -o first_try foo.o test.o<BR>
./first_try<BR>
<BR>

<font size=4 color=blue>
	hint: if your computer or VM is running on 32-bit, you can ignore the -m32 and -m elf-i386, they helps you compile and link 32-bit programs on 64-bit machine.
</font>
