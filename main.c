#include "libft.h"
#include <fcntl.h>   // For open()
#include <unistd.h>  // For close()

int		main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);  // Open the file in read-only mode
	if (fd == -1)  // Check if the file opened successfully
	{
		perror("Error opening file");
		return (1);
	}

	line = NULL;
	while ((line = get_next_line(fd)) != NULL)  // Read each line until EOF
	{
		printf("%s\n", line);  // Print the line
		free(line);  // Free the memory allocated for the line
	}
	close(fd);  // Close the file descriptor after usage
	return (0);
}
