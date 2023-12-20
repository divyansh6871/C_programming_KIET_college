#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n > 2)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            printf("Enter array element : ");
            scanf("%d", &arr[i]);
        }
        int highest = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (highest < arr[i])
            {
                highest = arr[i];
            }
        }
        printf("Highest element is %d.\n", highest);
        int p = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (p < highest && p < arr[i] && (arr[i] != highest))
            {
                p = arr[i];
            }
        }
        printf("Second highest elemet is : %d.", p);
    }

    return 0;
}
