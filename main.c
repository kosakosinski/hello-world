#include "hello_config.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hello World!\n");
	printf("Version %d.%d.%d\n", hello_VERSION_MAJOR, hello_VERSION_MINOR, hello_VERSION_PATCH);
	return 0;
}
