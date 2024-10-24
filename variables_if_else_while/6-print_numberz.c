#include <stdio.h>
#include <unistd.h>
/**
 *main- rend et imprime
 *les lettres de A a Z
 *Return: always 0 (sucess)
 */
int main(void)
{
char ab = '1';

for (ab = '1'; ab <= '9'; ab++)
putchar(ab);
putchar('\n');

return (0);
}
