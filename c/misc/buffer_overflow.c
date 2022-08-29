#include <stdio.h>

int main()
{
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    long pvowels = vowels;

    // // Print addresses
    // for(int i = 0; i < sizeof(vowels) + 5; i++) {
    //     printf("Address of vowels[%d] = %p\n", i, &vowels[i]);
    //     if(i > 4) {
    //         vowels[i] = 'X';
    //     }
    // }

    // // Print vowels
    // for(int i = 0; i < sizeof(vowels) + 5; i++) {
    //     printf("vowels[%d] = %c\n", i, vowels[i]);
    // }

    // Print vowels
    for(int i = 0; i < sizeof(vowels); i++) {
        printf("Address of vowels[%d] = %p\n", i, &vowels[i]);
        printf("Address of pvowels[%d] = %p\n", i, pvowels + i);
    }

    return 0;
}
