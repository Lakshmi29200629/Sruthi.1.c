#include <stdio.h>

int main() {
    int num = 12345, count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    printf("Number of digits = %d\n", count);
    return 0;
}
