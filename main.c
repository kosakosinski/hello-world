#include "hello_config.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hello World!\n");
	printf("Version %d.%d\n", hello_VERSION_MAJOR, hello_VERSION_MINOR);
	return 0;
}
