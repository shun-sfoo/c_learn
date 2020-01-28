#include <stdio.h>

typedef struct {
	unsigned int one:1;
	unsigned int two:3;
	unsigned int three:10;
	unsigned int four:5;
	unsigned int :2;
	unsigned int five:8;
	unsigned int six:8;
} demo_type;

int main(void)
{
	demo_type s = { 1, 5, 513, 17, 129, 0x81 };
	printf("sizeof demo_type = %u\n", sizeof(demo_type));
	printf("values: s=%u,%u,%u,%u,%u,%u\n",
	       s.one, s.two, s.three, s.four, s.five, s.six);

	return 0;
}
