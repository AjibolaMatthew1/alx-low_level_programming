#include <stdio.h>
/*
 * main - Entry Point 
 * Return - Always 0
 */
int main() 
{
    char c;
    c = 'a';
    while (c <= 'z')
    {
        if (c != 'q' && c != 'e')
        {
            putchar(c);
            c += 1;
        }
    }
    putchar('\n');
    return (0);
}
