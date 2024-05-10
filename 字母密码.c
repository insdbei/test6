#include <stdio.h>
#include <string.h>
void fun(char a[])
{
	int i;
    for (i = 0; i < strlen(a); i++)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = (a[i] - 'a' + 4) % 26 + 'a';
        else if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = (a[i] - 'A' + 4) % 26 + 'A';
}
 
int main()
{
    char a[101];
    gets(a);
    fun(a);
    puts(a);
    return 0;
}
