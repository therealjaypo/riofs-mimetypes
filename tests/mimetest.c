#include <stdio.h>
#include "mimetypes.h"

int main(char *argv, int argc) {
	int num = mimetypes_load();
	printf("Loaded %i types\n",num);

	printf( " thisisa.jpg  => %s\n", mimetypes_find("thisisa.jpg"));
	printf( " thisisa.jpeg => %s\n", mimetypes_find("thisisa.jpeg"));
	printf( " thisisa.css  => %s\n", mimetypes_find("thisisa.css"));
	printf( " thisisa.html => %s\n",mimetypes_find("thisisa.html"));
	return 1;
}
