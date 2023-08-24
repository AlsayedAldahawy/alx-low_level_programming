#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: number to be printed.
 */
void print_number(int n)
{
    int i = 1, j = 0, sign = 1, length = 0, digit;

    if (n < 0)
    {
        n *= -1;
        sign = -1;
    }

    while ((n / i) != 0)
    {
        i = i * 10;
        length++;
    }

    while (i != 0)
    {
        
        _putchar
    }
    
    for (j = 0; j < length; j++)
    {
        digit = n / i
        _putchar()
    }
}





#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
		char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
		char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
		char r[100];
		char r2[10];
		char r3[11];
		char *res;

		res = infinite_add(n, m, r, 100);
		if (res == 0)
		{
				printf("Error\n");
		}
		else
		{
				printf("%s + %s = %s\n", n, m, res);
		}
		n = "1234567890";
		m = "1";
		res = infinite_add(n, m, r2, 10);
		if (res == 0)
		{
				printf("Error\n");
		}
		else
		{
				printf("%s + %s = %s\n", n, m, res);
		}
		n = "999999999";
		m = "1";
		res = infinite_add(n, m, r2, 10);
		if (res == 0)
		{
				printf("Error\n");
		}
		else
		{
				printf("%s + %s = %s\n", n, m, res);
		}
		res = infinite_add(n, m, r3, 11);
		if (res == 0)
		{
				printf("Error\n");
		}
		else
		{
				printf("%s + %s = %s\n", n, m, res);
		}
		return (0);
}



int length_1 = 0;
    int length_2 = 0;
    unsigned long int sum = 0;
    int carry = 0;
    int length = 1;

    while (n1[length_1] != '\0')
    {
        length_1++;
    }
    while (n2[length_2] != '\0')
    {
        length_2++;
    }

    if (length_1 >= size_r || length_2 >= size_r)
        return (0);

    if (length_1 > length_2)
        length = length_1;
    else if (length_2 > length_1)
        length = length_2;
    else
        length = length_1;
    
    r[length + 1] = '\0';
    for (length = length + 1; length >= 0; length--)
    {
        if (length_1 >= 0 && length_2 >= 0)
        {
            sum = n1[length_1] + n2[length_2] + carry;
            if (sum > '9')
            {
                sum = sum - 10;
                carry = 1;
            }
            else
            {
                sum = sum;
                carry = 0;
            }
        }
        else if(length_1 >= 0 && length_2 < 0)
        {
            sum = n1[length_1] + carry;
            if (sum > '9')
            {
                sum = sum - 10;
                carry = 1;
            }
            else
            {
                sum = sum;
                carry = 0;
            }
        }
          else if(length_2 >= 0 && length_1 < 0)
        {
            sum = n2[length_2] + carry;
            if (sum > '9')
            {
                sum = sum - 10;
                carry = 1;
            }
             else
            {
                sum = sum;
                carry = 0;
            }
        }
        else if(length_2 < 0 && length_1 < 0)
        {
            sum = carry;
        }
        length_1--;
        length_2--;
        r[length] = sum;
    }
     return (r);
