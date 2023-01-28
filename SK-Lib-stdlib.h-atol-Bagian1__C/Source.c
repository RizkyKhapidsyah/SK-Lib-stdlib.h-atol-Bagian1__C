#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char number[] = "12345";
    long int result;

    result = atol(number);

    printf("The string \"%s\" converted to long int is: %ld\n", number, result);

    _getch();
    return 0;
}
