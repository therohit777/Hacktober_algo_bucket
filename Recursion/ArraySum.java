package questions.Recursion;

import java.util.Scanner;

public class ArraySum {
    public static int sum(int[] arr,int index)
    {
        if(index==0) return arr[0];
        return arr[index-1] + sum(arr,index-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no. of element : ");
        int n= sc.nextInt();
        System.out.print("Enter array -> ");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Sum = "+sum(arr,n-1));
    }
}
