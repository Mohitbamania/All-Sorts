import java.util.Scanner;
public class BubbleSort {
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

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1; j++){
                if(a[j]>a[j+1]){
                 int temp = a[j];
                 a[j] = a[j+1];
                 a[j+1] = temp;
                }
            }
        }

        System.out.println("Your array elements after sorting ");
        for(int i=0; i<n; i++){
            System.out.println(a[i]);
        }
    }
}
