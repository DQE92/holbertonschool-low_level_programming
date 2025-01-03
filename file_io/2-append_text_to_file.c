#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written;
    size_t length = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL) 
    {
        while (text_content[length])
            length++;

        bytes_written = write(fd, text_content, length);
        if (bytes_written == -1 || (size_t)bytes_written != length) {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
