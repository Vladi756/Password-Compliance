#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char pass[8];
    printf("Please input your password:\n \t\t>>");

    Retry:
    scanf("%s", pass);

    if(isupper(pass[0]) &&
       ispunct(pass[1]) &&
       ispunct(pass[2]) &&
       isdigit(pass[3]) &&
       isdigit(pass[4]) &&
       isdigit(pass[5]) &&
       islower(pass[6]) &&
       islower(pass[7]) &&
       (strlen(pass)) == 8)
        printf("\nYour password complies with the specified rules.");
    else
    {
        printf("\nPassword does not comply with the specified rules.\n");
        printf("\tPlease try again:\n\t\t\t >>");
        goto Retry;
    }
    return 0;
}
