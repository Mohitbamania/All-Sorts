#include<stdio.h>
void quicksort(int a[],int lb,int ub);
int partition(int a[],int lb,int ub);
int main()
{
    int a[20];
    int i,j,k,n;

    printf("*******************This is quick sort program********************");

    printf("\nHow many element do you want to enter:");
    scanf("%d",&n);

    printf("\nEnter the element:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("\nYour array elements are:");
    for(j=0; j<n; j++){
        printf("%d:",a[j]);
    }

    int lb,ub;

    lb=0;
    ub=n-1;

   
    quicksort(a,lb,ub);

    printf("\nYour sorted elements are:");
    for(k=0; k<n; k++){
        printf("%d:",a[k]);
    }
}

void quicksort(int a[],int lb,int ub){
    int loc;
    if(lb<ub){
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}

int partition(int a[],int lb,int ub){
    int temp,start,end,pivot;

    start=lb;
    end=ub;
    pivot=a[lb];
    
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }

        while(a[end]>pivot){
            end--;
        }

        if(start<end){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[end];
    a[end]=a[lb];
    a[lb]=temp;

    return end;
}