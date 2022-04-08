#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char ch1[10];

	// file_desc1 = open ("teste.txt", O_RDONLY, 0);
	// read (file_desc1, &ch1[0], 1);
	// printf("We got: %c\n", ch1[0]);


	fd = open ("teste.txt", O_RDONLY);

	read (fd, ch1, 10);

	printf("We got: %s\n", ch1);

	return (0);
}
