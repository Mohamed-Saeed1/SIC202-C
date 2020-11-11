#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int count);

int main()
{
    int arr[20];
    int i, n, j, e, count = 0;
    for(i = 0; i < 20; i++)
    {
        e = 1;
        printf("enter a number: ");
        scanf("%d",&n);
        for(j = 0; j < i; j++)
        {
            if(arr[j] == n)
                e = 0;
        }
        if(e)
        {
            arr[count] = n;
            count++;
        }
    }
    printf("elements in array: ");
    sum(arr, count);
    return 0;
}

int sum(int arr[], int count)
{
    int i, sum = 0;
    for(i = 0; i < count; i++)
    {
        printf("%d ",arr[i]);
        sum += arr[i];
    }
    printf("\nThe sum is %d", sum);
}
