#include <stdio.h>

int main()
{
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *pvowels = vowels;
    char *pvowels_alt = &vowels[0];

    // Print addresses
    for(int i = 0; i < sizeof(vowels); i++) {
        printf("Address of vowels[%d] = %p\n", i, &vowels[i]);
        printf("Address of pvowels[%d] = %p\n", i, pvowels + i);
        printf("Address of pvowels_alt[%d] = %p\n", i, pvowels_alt + i);
    }

    // Print vowels
    for(int i = 0; i < sizeof(vowels); i++) {
        printf("vowels[%d] = %c\n", i, vowels[i]);
        printf("pvowels[%d] = %c\n", i, *(pvowels + i));
        printf("pvowels_alt[%d] = %c\n", i, *(pvowels_alt + i));
    }

    return 0;
}
