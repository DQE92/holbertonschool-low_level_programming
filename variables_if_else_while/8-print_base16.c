#include <stdio.h>
#include <unistd.h>
/**
 *main- rend et imprime
 *les nombres de 0 a 9
 *et de a a f
 *Return: always 0 (sucess)
 */
int main(void)
{
char ab;
char cd;

for (ab = '0'; ab <= '9'; ab++)
putchar(ab);
for (cd = 'a'; cd <= 'f'; cd++)
putchar(cd);

putchar ('\n');

return (0);
}
