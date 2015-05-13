Link foo.asm and test.c

First you should confirm that you have installed nasm.
If you don't, type (sudo apt-get install nasm)

After you download foo.asm and test.c, you can type these to execute first_try:

nasm -f elf -o foo.o foo.asm
gcc -m32 -o test.o -c test.c
(hint: if your computer or VM is running on 32-bit, you can ignore the -m32, operation -m32 helps you compile test.c on 64-bit)
ld -m elf-i386 -o first_try foo.o test.o
(the same as the previous, -m elf-i386 help me link on i386-machine)
./first_try
(run)
