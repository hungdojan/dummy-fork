#include <stdio.h>

#define SIZE 100

int get_max(int *array) {
    int max = *array;
    for (int i = 1; i < 10000; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int array[] = {4, 6, 3, 1, 2};
    int max = get_max(array);
    printf("Max: %d\n", max);
    return 0;
}
