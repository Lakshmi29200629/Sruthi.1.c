#include <stdio.h>

int main() {
    int num = 5, factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("Factorial of %d = %d\n", num, factorial);
    return 0;
}
