#include <stdio.h>
#include <unistd.h>
/**
 *main- rend et imprime
 *les lettres de A a Z
 *Return: always 0 (sucess)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}
putchar('\n');

return (0);
}
