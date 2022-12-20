#include <stdio.h>
int main()
{
    int a[100], beg, end, mid, n, i, item;
    printf("Enter the number of elements in the array \n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the item you want to search \n");
    scanf("%d", &item);
    beg = 0;
    end = n - 1;
    for (i = 0; i < n; i++)
    {
        mid = (beg + end) / 2;
        if (a[mid] == item)
        {
            printf("The position of the item is %d\n", mid);
            break;
        }
        else if (a[mid] < item)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}