#include <stdio.h>


int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}


int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int choice, n, key, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\nMenu:\n");
        printf("1. Perform Linear Search\n");
        printf("2. Perform Binary Search\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to search: ");
            scanf("%d", &key);
            result = linearSearch(arr, n, key);
            if (result != -1)
                printf("Element found at index: %d\n", result);
            else
                printf("Element not found\n");
            break;
        case 2:
            printf("Enter the element to search: ");
            scanf("%d", &key);
            result = binarySearch(arr, 0, n - 1, key);
            if (result != -1)
                printf("Element found at index: %d\n", result);
            else
                printf("Element not found\n");
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
