#include <stdio.h>
#include <stdlib.h>

int main() {
    char *expression = "2 + 3";
    char *result = NULL;
    
    result = bc(expression, 0);
    printf("The result of the expression is %s\n", result);
    
    free(result);
    return 0;
}

