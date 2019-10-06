#include <unistd.h>
#include <stdio.h>
#include <errno.h>

// Example of chdir and getcwd

int main() {

	const char target[] =
		// "/home/" // existing directory
		"/usr/include/stdio.h" // not a directory
		// "/1" // directory does not exist
	;

	int chReturn = chdir(target);
	// returns 0 on successful directory change
	// returns -1 on error

	char dir[1000];
	getcwd(dir, sizeof(dir));

	printf("Chdir returns: %d\n", chReturn);
	printf("errno: %d\n", errno);
	printf("errnos: ENOENT %d, ENOTDIR %d, EACCES %d\n", ENOENT, ENOTDIR, EACCES);
	printf("Currently in: %s\n", dir);

	return 0;
}
