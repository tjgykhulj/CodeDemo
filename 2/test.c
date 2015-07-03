asm(".data	\n\t"
		"msg: .string \"Hello World!\n\"	\n\t"
		"len = .-msg");

void print()
{
	asm("movl $len, %edx	\n\t"
		"movl $msg, %ecx	\n\t"
		"movl $1, %ebx		\n\t"
		"movl $4, %eax		\n\t"
		"int $0x80");
}

void exit()
{
	asm("movl $42, %ebx	\n\t"
		"movl $1, %eax	\n\t"
		"int $0x80		\n\t");
}

int nomain()
{
	print();
	exit();
}
