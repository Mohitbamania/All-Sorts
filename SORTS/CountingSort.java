import java.util.Scanner;
public class CountingSort {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a [] = new int[20];
        int count [] = new int[10];
        int b [] = new int [20];

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
            ++count[a[i]];
        }

        for(int j=1; j<10; j++){
            count[j] = count[j] + count[j-1];
        }

        for(int k=n-1; k>=0; k--){
            b[--count[a[k]]] = a[k];
        }

        System.out.println("Your array elements after sorting ");
        for(int i=0; i<n; i++){
            System.out.println(b[i]);
        }
    }
}
