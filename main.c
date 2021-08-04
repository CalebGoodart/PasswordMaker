#include <stdio.h>

int main() {
    int cases, symbol, nums, random;
    int length;

    printf("Password Options: 1 for yes, 0 for no\n"
           "must have upper & lower case\n");
    scanf(" %d", &cases);
    printf("must have symbols\n");
    scanf(" %d", &symbol);
    printf("must have numbers\n");
    scanf(" %d", &nums);
    printf("Random Password?\n");
    scanf(" %d", &random);
    printf("Enter a length for password between 0 and 20");
    scanf(" %d", &length);
    printf("%d, %d, %d, %d, %d", cases, symbol, nums, random, length);



    return 0;
}
