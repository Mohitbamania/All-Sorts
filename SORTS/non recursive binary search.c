#include<stdio.h>
int main()
{
    int a[20],n,i,j;
    int binrysearch(int a[20],int element,int low,int high);
    int element,low,high,index;
    printf("****************This is the non recursive Binary search program******************");
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

    if(index==-1){
        printf("\nThe element is not present in the array");
     }

     else{
        printf("\n the element is present in the array at index:%d",index);
     }

}
int binarysearch(int a[20],int element,int low,int high){

    int m;
    while(low<high){

        m=(low+high)/2;

        if(element==a[m]){
            return m;
        }
        else if(element<a[m]){
            high=m-1;
        }

        else{
            low=m+1;
        }
    }
    return -1;
}