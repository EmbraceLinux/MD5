#include <stdio.h>
#include <string.h>

#include "md5.c"

int main(int argc, char* argv[])
{
	char buffer[128];
	getStringMD5("hello world", buffer);
	printf("%s\n", buffer);
	getFileMD5("md5.c", buffer);
	printf("%s\n", buffer);
	return 0;
}

