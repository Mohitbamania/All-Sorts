#include<stdio.h>
int main(){
    int i,j,k,l,n;
    int min,max;
    int a[20];
    void maxmin(int a[],int i,int j,int max,int min);

    printf("**************This the Max-Min program with divide & conquer****************");

    printf("\nHow many element do you want to enter:");
    scanf("%d",&n);

    printf("\nEnter the array element:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Your array elements are:");
    for(j=0; j<n; j++){
        printf("%d",a[j]);
    }

    int result=maxmin(a,i,j,max,min);
    printf("%d",result);
}
void max_min(int a[],int i,int j,int max,int min){
    int mid;
    int k,l;


    if(k==l){
        max=min=a[k];
    }
    else if(k=l-1){
        if(a[k]<a[l]){
            max=a[l];
            min=a[k];
        }
        else{
            max=a[k];
            min=a[l];
        }
    }
    else{
        mid=(k+l)/2;

        maxmin(a,i,mid,max,min);
        maxmin(a,mid+1,j,max,min);

        if(max1<max2){
            max=max2;
        }
        else{
            max=max1;
        }
        if(min1<min2){
            min=min1;
        }
        else{
            min=min2;
        }
    }

    printf("\nThe maximum value is:%d",max);
    printf("\nThe minimum value is:%d",min);

}