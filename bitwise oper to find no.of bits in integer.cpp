#include<stdio.h>
int main()

{
		unsigned int countSetBits(unsigned int n)

	
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

int main()
{
	int i = 9;
	printf("%d", countSetBits(i));
	return 0;
}
