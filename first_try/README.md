Link foo.asm and test.c<BR>

First you should confirm that you have installed nasm.<BR>
If you don't, type (sudo apt-get install nasm)<BR>

After you download foo.asm and test.c, you can type these to execute first_try:<BR>
nasm -f elf -o foo.o foo.asm<BR>
gcc -m32 -o test.o -c test.c<BR>
(hint: if your computer or VM is running on 32-bit, you can ignore the -m32, operation -m32 helps you compile test.c on 64-bit)<BR>
ld -m elf-i386 -o first_try foo.o test.o<BR>
(the same as the previous, -m elf-i386 help me link on i386-machine)<BR>
./first_try<BR>
(run)
