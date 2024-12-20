import java.util.Scanner;
public class QuickSort {
    public static void quicksort(int a [],int lb,int ub){
        int loc;
        if(lb<ub){
            loc = partition(a,lb,ub);
            quicksort(a,lb,loc-1);
            quicksort(a,loc+1,ub);
        }
    }

    public static int partition(int a [],int lb,int ub){
        int start = lb;
        int end = ub;
        int pivot = a[lb];
        int temp;

        while(start<end){
            while(a[start]<pivot){
                start++;
            }
            while(a[end]>pivot){
                end--;
            }
            if(start<end){
                temp = a[start];
                a[start] = a[end];
                a[end] = temp;
            }
        }
        temp = a[end];
        a[end] = a[lb];
        a[lb] = temp;
        return end;
    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a [] = new int[20];


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

        quicksort(a,lb,ub);



        System.out.println("Your array elements after sorting ");
        for(int i = 0; i < ub + 1; i++){
            System.out.println(a[i]);
        }

    }
}
