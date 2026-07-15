#include <stdio.h>

void medirLargo(int[]);

int main() {
    int nums[] = {10, 20, 30, 40, 50};

    printf("sizeof(nums): %d\n", sizeof(nums));
    printf("sizeof(nums[0]): %d\n", sizeof(nums[0]));
    int largo = sizeof(nums) / sizeof(nums[0]);
    printf("elementos: %d\n", largo);

    puts("Probando con una funcion...");
    medirLargo(nums);

    return 0;
}

void medirLargo(int arr[]) {
    printf("sizeof(arr): %d\n", sizeof(arr));
    printf("sizeof(arr[0]): %d\n", sizeof(arr[0]));

    int largo = sizeof(arr) / sizeof(arr[0]);
    printf("elementos: %d\n", largo);
}
