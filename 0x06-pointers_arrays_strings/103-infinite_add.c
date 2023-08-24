#include "main.h"
#include <stdio.h>

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @size_r: the buffer size.
 * Return: poniter to string.
 */

/**
 * Write a function that adds two numbers.
 * Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r)
 * Where n1 and n2 are the two numbers
 * r is the buffer that the function will use to store the result
 * size_r is the buffer size
 * The function returns a pointer to the result
 * You can assume that you will always get positive numbers, or 0
 * You can assume that there will be only digits in the strings n1 and n2
 * n1 and n2 will never be empty
 * If the result can not be stored in r the function must return 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len_1 = 0, len_2 = 0, carry = 0, sum = 0, m1 = 1, m2 = 1, digit1, digit2, i = 0, start_digit = 0;
    int len_r = size_r;

    while(n1[len_1] != '\0')
    {
        len_1++;
    }
    while(n2[len_2] != '\0')
    {
        len_2++;
    }

    /**
    * printf("len1: %d\nlen2: %d\n", len_1, len_2);
    */
    
    if (len_1 + 1 >= len_r || len_2 + 1 >= len_r)
    {
        return (0);
    }

    r[len_r] = '\0';
    len_r--;
    len_1--;
    len_2--;


    while (len_r >= 0)
    {
        /**
         * printf("len1: %d\nlen2: %d\n", len_1, len_2);
         * printf("len1[ln]: %c\nlen2[ln]: %c\n", n1[len_1] , n2[len_2]);
         */

        digit1 = ((n1[len_1] - '0' )* m1);
        digit2 = ((n2[len_2] - '0' )* m2);

        sum = digit1 + digit2 + carry + '0';

        if (sum > '9')
        {
            sum = sum - 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        /**
         * printf("digit1: %i\ndigit2: %i\nsum: %c\ncarry: %d\n",digit1,digit2, sum, carry);
         */

        r[len_r] = sum;
        len_r--;

        if (len_1 <= 0)
            m1 = 0;
        else
            len_1--;
        if (len_2 <= 0)
            m2 = 0;
        else
            len_2--;
    }
    while (i < size_r)
    {
        if (r[i] != '0')
        {
            start_digit = i;
            break;
        }
        i++;
    }
    
    /**
     * printf("start_digit: %i\ni:%i\n", start_digit, i);
     */

    for (i = 0; i <= size_r; i++)
    {
        r[i] = r[i + start_digit];
    }
    /**
     * printf("r: %s\n", r);
     */



    return (r);
}
