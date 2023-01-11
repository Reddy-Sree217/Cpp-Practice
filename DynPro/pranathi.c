#include <string.h>
#include <stdio.h>

void printchar(int n)
{
    int i, j;
    char ch = 'a';
    char print;
    for (i = 0; i < n; i++)
    {
        print = ch;
        for (j = 0; j <= i; j++)
        {
            printf("%c", print++);
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;
    printchar(n);
    printf("%d", 0 % 7);
    int *a = new int(11);
    cout << a << endl;
}
