#include <stdio.h>

/**
 * main - Entry point
 * 
*/

int main (void)
{
    int sum = 0, i = 0;

   while (i < 1024)
   {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
        i++;
   }
   printf("%i\n", sum);
   return (0);
}
