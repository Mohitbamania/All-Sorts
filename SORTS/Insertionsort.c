#include<stdio.h>
int main()
{
    int a[20],n,i,j,k,l,m,temp;
    printf("**********This is Insertion sort program**********");

    printf("\nHow many element do you want to enter:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("'\nYour array elements are:");
    for(j=0; j<n; j++)
    {
        printf("%d",a[j]);
    }
   

    for(k=1; k<n; k++)
    {
        temp=a[k];
        l=k-1;
        while(l>=0 && a[l]>temp)
        {
            a[l+1]=a[l];
            l--;
        }

        a[l+1]=temp;
    }

     printf("'\nYour array elements are sorted:");
     for(m=0; m<n; m++)
    {
        printf("%d",a[m]);
    }

    return 0;

}