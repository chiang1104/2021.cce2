#include <stdio.h>
#include <string.h>
char strA[] = "XYZ";
char strB[] = "ABC";
int main()
{
    int c = strcmp( "X", "A" );
    printf(" B - A �o�� %d\n", c );

    c = strcmp(strA, strB);
    printf("%s %s �o�� %d\n", strA, strB, c );
}
