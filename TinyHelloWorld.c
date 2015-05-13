char *str = "Hello World!\n";

void print()
{
	asm("mov $13,%%rdx	\n\t"
		"mov $0,%%rcx	\n\t"
		"mov $0,%%rbx	\n\t"
		"mov $4,%%rax	\n\t"
		"int $0x80		\n\t"
		::"r"(str):"rbx","rcx","rdx");
}

void exit()
{
	asm("mov $42, %rbx	\n\t"
		"mov $1, %rax	\n\t"
		"int $0x80		\n\t");
}

void nomain()
{
	print(str, 13);
	exit();
}
