#include<stdio.h>
int main()
{
    int a[20],n,i,j;
    int binrysearch(int a[20],int element,int low,int high);
    int element,low,high,index;
    printf("****************This is the recursive Binary search program******************");
    printf("\nHow many element do you want to enter:");
    scanf("%d",&n);

    printf("\nEnter the array element:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("\nYour array elements are:");
    for(j=0; j<n; j++){
        printf("%d:",a[j]);
    }

    printf("\nWhich element do you want to search:");
    scanf("%d",&element);

    low=0;
    high=n-1;
   
    index=binarysearch(a,element,low,high);
    printf("\n your element is at location: %d",index);

}
int binarysearch(int a[20],int element,int low,int high){
    int m=(low+high)/2;

    if(element==a[m]){
        return m;
    }
    else if(element<a[m]){
        binarysearch(a,element,low,m-1);
    }

    else{
        binarysearch(a,element,m+1,high);
    }
}