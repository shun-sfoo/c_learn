#include <stdio.h>
#include "assert.h"

void myfunc(void)
{
	printf("%s\n", __func__);
}

int main(void)
{
	myfunc();
	printf("%s\n", __func__);
  assert(2>3);
	return 0;
}
