#include <stdio.h>
/**
 *main- conversion en ascii, if = ne pas
 *ajouter de virgules après le dernier
 *chiffre. putchar mettre virgule et
 *les espaces
 *Return: always 0 (sucess)
 */
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar(num + '0');

if (num != 9)
{
putchar(',');
putchar(' ');
}

}

putchar('\n');

return (0);
}
