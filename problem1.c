#include <stdio.h>

int main() {
    float input = 0;

    scanf("%f", &input);

    if (input > 5 && input < 15) {
        printf("Case 1\n");
    } else if (input == 20) {
        printf("Case 2\n");
    } else {
        printf("Case 3\n");
    }
// fixy
    return 0;
}