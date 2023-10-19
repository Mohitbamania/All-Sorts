#include<stdio.h>
int main(){
    int i,j,k,l,n;
    int min,max;
    int a[20];

    printf("**************This the Max-Min program with out divide & conquer****************");

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


    max=min=a[0];
    for(l=1; l<n; l++){


        if(a[l]>max){
            max=a[l];

        }
        else if(a[l]<min){
            min=a[l];
        }
    }
    printf("\nThe maximum value is:%d",max);
    printf("\nThe minimum value is:%d",min);
    return 0;

        
    


}