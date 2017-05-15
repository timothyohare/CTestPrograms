
#include <stdio.h>

int main()
{
    if (sizeof(NULL) == sizeof(void *)) {
        printf("sizeof(NULL) == sizeof(void *)\n");
    } else {
        printf("sizeof(NULL) != sizeof(void *)\n");
    }
return(0);
};

