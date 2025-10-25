#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20}; // Example array
    int sum = 0;

    for(int i = 0; i < 4; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}
