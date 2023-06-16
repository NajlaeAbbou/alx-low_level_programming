/**
 * main - xxx
 * @argc: xxx
 * @argv: xxx
 * Return: xxx
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	/* test 97*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	fd_from = open(argv[1], O_RDONLY);
	/* test 98 */
	if ((ssize_t)fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	/* test 99 */
	if ((ssize_t)fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if (fd_from != -1)
			close(fd_from);
		exit(99);
	}
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
	if (lenr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
		
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		test99(lenw, argv[2], fd_from, fd_to);
		if (lenw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
/* check 100 */
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
