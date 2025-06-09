#include <stdio.h>

#define N 3

int main() {
#ifdef DEBUG
    printf("Hello World\n");
#endif

    for (int i = 0; i < N; ++i) {
        printf("i = %d\n", i);
    }

    return 0;
}