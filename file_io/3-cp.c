#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - Copies the content of a file to another file
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: 0 on success, exits with specific codes on errors
 */
int main(int ac, char *av[])
{
    int fd_from, fd_to, rd_stat;
    mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
    char buffer[1024];

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        close(fd_from);
        exit(99);
    }

    while (1)
    {
        rd_stat = read(fd_from, buffer, 1024);
        if (rd_stat == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
            close(fd_from);
            close(fd_to);
            exit(98);
        }
        if (rd_stat == 0)
            break;
        int wr_stat = write(fd_to, buffer, rd_stat);
        if (wr_stat != rd_stat || wr_stat == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}
