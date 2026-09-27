#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int gap = n / 2;

    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            int temp = array[i];
            int j = i;

            while (j >= gap && array[j - gap] > temp) {
                array[j] = array[j - gap];
                j = j - gap;
            }

            array[j] = temp;
        }

        gap = gap / 2;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\nName: Sonu kumar\n");
    printf("Roll No: 2400320101114\n");

    return 0;
}
