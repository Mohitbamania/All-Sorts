import java.util.Scanner;
public class MergeSort {
    public static void mergesort(int a [],int lb,int ub){
        int mid;
        if(lb<ub){
            mid = (lb+ub)/2;
            mergesort(a,lb,mid);
            mergesort(a,mid+1,ub);
            merge(a,lb,mid,ub);
        }
    }
    public static void merge(int a [],int lb,int mid,int ub){
        int b [] = new int[20];
        int i = lb;
        int j = mid+1;
        int k = lb;

        while(i<=mid && j<=ub){
            if(a[i]<a[j]){
                b[k] = a[i];
                k++;
                i++;
            }
            else{
                b[k] = a[j];
                k++;
                j++;
            }
        }
        if(i>mid){
            while(j<=ub){
                b[k] = a[j];
                k++;
                j++;
            }
        }
        else{
            while(i<=mid){
                b[k] = a[i];
                k++;
                i++;
            }
        }
        for (int x = lb; x <= ub; x++) {
            a[x] = b[x];
        }
    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a [] = new int[20];
        int b [] = new int[20];

        System.out.print("How many element do you want to enter:");
        int n = sc.nextInt();
        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
        }

        System.out.println("Your array elements before sorting ");
        for(int i=0; i<n; i++){
            System.out.println(a[i]);
        }

        int lb = 0;
        int ub = n-1;

        mergesort(a,lb,ub);

        System.out.println("Your array elements after sorting ");
        for(int i=0; i<n; i++){
            System.out.println(a[i]);
        }
    }
}
