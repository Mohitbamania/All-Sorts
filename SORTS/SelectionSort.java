import java.util.Scanner;
public class SelectionSort {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a [] = new int[20];
        int min;
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

        for(int i=0; i<n; i++){
            min = i;
            for(int j=i+1; j<n; j++){
                if(a[j]<a[min]){
                    min = j;
                }
            }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }

        System.out.println("Your array elements after sorting ");
        for(int i=0; i<n; i++){
            System.out.println(a[i]);
        }
    }
}
