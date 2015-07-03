#include <stdio.h>
#include <stdlib.h>

unsigned maximum = 0;

int main()
{
	unsigned blocksize[] = {1024*1024, 1024, 1};
	int i, count = 0;
	for (i=0; i<3; i++)
		while (++count)
		{
			void *block = malloc(maximum + blocksize[i] * count);
			if (block) {
				maximum = maximum + blocksize[i] * count;
				free(block);
			} else
				break;
		}

	printf("maximum malloc size = %u bytes\n", maximum);
}
