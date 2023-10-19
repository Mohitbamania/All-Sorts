#include<stdio.h>
int main()
{

  int n,d,i,j,k,l,m,temp;
  int a[20];
  printf("**********************This is Shell sort program**************");
  printf("\nHow many elements do you want to enter:");
  scanf("%d",&n);

  printf("\nEnter the array elements:");
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  printf("\nYour array elements are:");
  for(j=0; j<n; j++){
    printf("%d:",a[j]);
  }


  for(d=n/2; d>=1; d=d/2){
    for(k=d; k<n; k++){
        for(l=k-d; l>=0; l=l-d){
            if(a[l+d]>a[l]){
                break;
            }
            else{
                temp=a[l+d];
                a[l+d]=a[l];
                a[l]=temp;
               }
        }
    }
  }
  printf("\nYour array elements are sorted:");
  for(m=0; m<n; m++){
    printf("%d:",a[m]);
  }



}