asm(".data \n\
	msg: .string \"Hello World!\n\"");
void print()
{
	asm("movl $13, %edx \n\
		movl $msg, %ecx \n\
		movl $0, %ebx	\n\
		movl $4, %eax	\n\
		int $0x80");
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
