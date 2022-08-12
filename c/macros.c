#include "stdbool.h"
#include "stdio.h"
#include "stdlib.h"

#define BUFFER_SIZE (1024)
#define SQR(s) ((s) * (s))
#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
#define DEBUG(...) fprintf(stderr, __VA_ARGS__)
#define PRINT_TOKEN(x) printf(#x);     // stringize operator
#define CONC(A,B) A ## B     // concatenation

void print_stream(int* stream)
{
    for(int i = 0; i < BUFFER_SIZE; i++) {
        printf("%d ", stream[i]);
    }
    printf("\n");
}

int main(void)
{
    int* stream;
    bool res;
    char* name = "Roberto";

    printf("2 * 2 = %d\n", SQR(2));
    printf("min(15, 25) = %d\n", MIN(15, 25));
    PRINT_TOKEN(Print message without double quotes\n);
    
    printf("Concat rob + erto = %s\n", CONC(na, me));

    stream = calloc(BUFFER_SIZE, sizeof(int));
    if(stream != NULL) {
        for(int i = 0; i < BUFFER_SIZE; i++) {
            stream[i] = i;
        }
    }
    else {
        DEBUG("error: couldn't allocate memory correctly");
        return -1;
    }

    print_stream(stream);
    free(stream);

    return 0;
}
