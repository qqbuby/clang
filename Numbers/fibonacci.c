#include <stdio.h>
#include <stdlib.h>

static int fibonacci(int);

int main(int argc, char *argv[])
{
    int n;
    int i;

    if(argc != 2) {
        printf("Number required!\n");
    }

    n = atoi(argv[1]);

    for(i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    exit(0);
}

static int fibonacci(int n)
{
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
