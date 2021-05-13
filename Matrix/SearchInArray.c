// print Search element in array
#include <stdio.h>
int main()
{
    int a[100], n, i,search,f=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter Array Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Element to Search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            printf("Element %d is Found at %d",a[i],i+1);
            f=1;
        }
    }
    if(f==0){
        printf("No Element Found");
    }

    return 0;
}