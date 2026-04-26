#include <stdio.h>
int main()
{
    int n, temp, minindex;
    printf(“enter number of elements: “);
    scanf(“%d”, &n);
    int arr[n];
    printf(“enter %d elements:\n”, n);
    for (int i = 0; i < n; i++)
    scanf(“%d”, &arr[i]);
    // selection sort logic
    for (int i = 0; i < n – 1; i++)
    {
        minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            minindex = j;
        }
        // swap
        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
    printf(“sorted array:\n”);
    for (int i = 0; i < n; i++)
    printf(“%d “, arr[i]);
    return 0;
}
