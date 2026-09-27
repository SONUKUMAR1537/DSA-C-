#include <stdio.h>
void insertHeap(int A[], int *N, int key) {
    A[*N + 1] = key;  
    int i = *N + 1;
    while (i > 1 && A[i] < A[i / 2]) {
        int temp = A[i];
        A[i] = A[i / 2];
        A[i / 2] = temp;
        i = i / 2;
    }
    *N = *N + 1;
}
int main() {
    int A[100], N, key;
    printf("Enter number of elements: ");
    scanf("%d", &N);
    printf("Enter heap elements: ");
    for (int i = 1; i <= N; i++)
        scanf("%d", &A[i]);
    printf("Enter key to insert: ");
    scanf("%d", &key);
    insertHeap(A, &N, key);
    printf("\nHeap after insertion: ");
    for (int i = 1; i <= N; i++)
        printf("%d ", A[i]);
    printf("\n\nName: Sonu kumar");
    printf("\nRoll No: 2400320101114\n");
    return 0;
}

