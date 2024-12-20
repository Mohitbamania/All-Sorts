import java.util.Scanner;
public class InsertionSort {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a [] = new int[20];
        int temp;

        System.out.print("How many element do you want to enter:");
        int n = sc.nextInt();
        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
        }

        System.out.println("Your array elements before sorting ");
        for(int i=0; i<n; i++){
            System.out.println(a[i]);
        }
        for(int i=1; i<n; i++){
            temp = a[i];
            int j = i-1;
            while(j>=0 && a[j]>temp){
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = temp;
        }



        System.out.println("Your array elements after sorting ");
        for(int i=0; i<n; i++){
            System.out.println(a[i]);
        }
    }
}
