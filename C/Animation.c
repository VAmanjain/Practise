#include <stdio.h>

int binarysearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        printf("Next Step: Searching in the range from index %d to %d\n", l, r);
        printf("           Middle element index: %d\n", m);
        printf("           Element at index %d: %d\n", m, arr[m]);
        printf("           Comparing %d with the middle element %d\n", x, arr[m]);

        if (arr[m] == x)
        {
            printf("           Found %d at index %d\n", x, m);
            return m;
        }

        if (arr[m] < x)
        {
            printf("           %d is greater than the middle element, so searching in the right side\n", x);
            l = m + 1;
        }
        else
        {
            printf("           %d is smaller than the middle element, so searching in the left side\n", x);
            r = m - 1;
        }

        printf("           Available Array: ");
        printf(" ( ");
        for (int i = l; i <= r; i++)
        {
            printf(" [%d] ", arr[i]);

            if (i != r)
                printf(", ");
        }
        printf(" ) ");
        printf("\n\n");
    }

    printf("Element %d not found in the array.\n", x);
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40, 42, 44, 46, 64, 68, 72, 88, 92};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("\nBinary Search Algorithm can be implemented only on sorted sets of elements. So we are using \n");
    printf("Current array: \n");
    for (int i = 0; i <= n-1; i++)
    {
        printf(" [%d] ", arr[i]);
    }
    printf("\nP.S: Try seraching for 3, 10, 42, 64, 72 or 92 to get detailed explaination :)");
    printf("\n\n");

    printf("Enter the element to search:\n");
    scanf("%d", &x);

    int result = binarysearch(arr, 0, n - 1, x);

    if (result != -1)
    {
        printf("\nElement found at index %d.\n\n", result);
    }

    return 0;
}