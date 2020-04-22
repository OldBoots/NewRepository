#include <stdio.h>

int main()
{
	int i, n = 8;
    for (i = 0; i < n; i++) {
        if (i % 2 == 0)
            printf("Fork");
        if (i % 2 != 0)
            printf(" - Fuck.\n");
    }
    return 0;
}

