import java.util.Scanner;

public class creatingArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int [] numbers = new int[size];
        // by defalut zero value intialise hoti h Java me 
        for (int i = 0; i < size; i++) {
            numbers[i] = sc.nextInt(); 
        } 
        for (int j = 0; j < size; j++) {
            System.out.println( numbers[j]);
        }
    }
}
