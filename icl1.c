#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
	printf("Hello World!!!");
	int fd = open("/tmp/guevaram.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
	assert(fd > -1);
	int rc = write(fd, "Quote: hi world\n", 17);
	assert(rc == 17);
	close(fd);
	
	return 0;
}
