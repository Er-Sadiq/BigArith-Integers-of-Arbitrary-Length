#include <stdio.h>
#include "BigArith.h"

int main() {
    // Use the INTAL functions here
    char* intal1 = intal_create("123456789");
    char* intal2 = intal_create("987654321");

    // Example usage
    char* sum = intal_add(intal1, intal2);
    printf("Sum: %s\n", sum);

    // Remember to free the allocated memory
    intal_destroy(intal1);
    intal_destroy(intal2);
    intal_destroy(sum);

    return 0;
}
