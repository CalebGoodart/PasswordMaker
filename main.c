#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cases, symbol, nums;
    int length;
    char symb[] = "!@#$%^&*()_+=-";
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[] = "1234567890";

    printf("Password Options: 1 for yes, 0 for no\n"
           "can have upper & lower case\n");
    scanf(" %d", &cases);
    printf("can have symbols\n");
    scanf(" %d", &symbol);
    printf("can have numbers\n");
    scanf(" %d", &nums);
    printf("Enter a length for password between 1 and 20\n");
    scanf(" %d", &length);
    printf("%d, %d, %d, %d\n", cases, symbol, nums, length);

    char selection[77];
    strcat(selection, upper);
    if (cases) {
        strcat(selection, lower);
    }

    if (symbol) {
        strcat(selection, symb);
    }

    if (nums) {
        strcat(selection, numbers);
    }

    char password[length];
    password[length] = '\0';
    int randlen = strlen(selection);
    srand(time(0));

    for (int i = 0; i < length; ++i) {
        char temp = selection[rand() % randlen];
        password[i] = temp;
    }

    printf("%s\n", password);
    return 0;
}