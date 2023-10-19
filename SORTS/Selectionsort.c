#include<stdio.h>
int main()
{
int M[30],i,j,k,l,m,n,min,temp;

printf("***********This is the selection sort program***************");
printf("\nHow many element do you want to enter:");
scanf("%d",&n);

printf("\nEnter the array elements:");
for(i=0; i<n; i++)
{
    scanf("%d",&M[i]);
}
 printf("\nYour array elements are:");
 for(j=0; j<n; j++)
{
    printf(":%d",M[j]);
}

 for(k=0; k<n; k++)
 {
    min=k;
    for(l=k+1; l<n; l++)
    {
        if(M[l]<M[min])
        {
            min=l;
        }
    }
    temp=M[k];
    M[k]=M[k+1];
    M[k+1]=temp;    
 }

 printf("\nYour array element are sorted:");
for(m=0; m<n; m++)
{
    printf("%d",M[m]);
}

return 0;

}