#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int sum = 0;
    printf("Please enter a number: ");
    scanf("%d",&x);
    for (int i = 1; i < x; i++)
    {
        if(x % i == 0)
            sum += i;
    }
    if(sum == x)
        printf("%d is a perfect number",x);
    else
        printf("%d is not a perfect number",x);
    return 0;
}
