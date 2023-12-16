#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; size > i; i++)
    {
        scanf("%d", &arr[i]);
    }

    return 0;
}