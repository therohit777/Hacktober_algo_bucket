
import java.util.*;

class Knapsack 
{ 
     static int max(int a, int b) { return (a > b)? a : b; } 

     static int knapSack(int W, int wt[], int val[], int n) 
     { 

          if (n == 0 || W == 0) 
              return 0; 
          if (wt[n-1] > W) 
             return knapSack(W, wt, val, n-1); 
          else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), 
                           knapSack(W, wt, val, n-1) 
                            ); 
      } 
   public static void main(String args[]) 
   { 
        Scanner sc = new Scanner(System.in);
        System.out.println("Input no. items which have profit and weight");
        int n = sc.nextInt();
        int val[] = new int[n]; 
        int wt[] = new int[n];
        for(int i=1;i<=n;i++){
          System.out.println("Input profit and weight of item "+i);
          val[i] = sc.nextInt();
          wt[i] = sc.nextInt();
        }
        
        System.out.println("Input maximum capacity of weight");
        int  W = sc.nextInt(); 
        int r = val.length; 
        System.out.println(knapSack(W, wt, val, r)); 
    } 
} 
