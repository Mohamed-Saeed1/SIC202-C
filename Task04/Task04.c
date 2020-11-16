#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("Add.txt", "a+");

    int i, n[2];

    if(f == NULL)
    {
        printf("File not found error 404 \n");
        return 1;
    }
    for (i = 0; i < 2; i++)
    {
        fscanf(f, "%d", &n[i]);
    }
    fprintf(f, "\nAnswer = %d",n[0] + n[1]);
    fclose(f);
    return 0;
}
