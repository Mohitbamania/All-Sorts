#include<stdio.h>
int main()
{
int a[50],n,i,j,k,l,temp;
printf("This is the program of bubble sort");
printf("\nHow many element do you want to enter:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}
printf("\nThe array element are:");
for(j=0; j<n; j++)
{
    printf(":%d",a[j]);
}

for(j=0; j<n; j++)
{
    for(k=0; k<n-1; k++)
    {
        if(a[k]>a[k+1])
        {
          temp=a[k];
          a[k]=a[k+1];
          a[k+1]=temp;
        }
    }
}
printf("\nYour array elements are sorted");
for(l=0; l<n; l++)
{
    printf(":%d",a[l]);
}



return 0;


}