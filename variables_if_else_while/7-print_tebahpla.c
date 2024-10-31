#include <stdio.h>
#include <unistd.h>
/**
 *main- rend et imprime
 *les lettres de z a a
 *Return: always 0 (sucess)
 */
int main(void)
{
char za;

for (za = 'z'; za >= 'a'; za--)

putchar(za);

putchar ('\n');

return (0);
}
