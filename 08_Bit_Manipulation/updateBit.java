import java.util.Scanner;

public class updateBit {
    public static void main(String[] args) {
        int n = 5;
        int pos = 1;
        int bitMask = 1 << pos;
        System.out.print("Enter the Operation ");
        Scanner sc = new Scanner(System.in);
        int operation = sc.nextInt();
        if (operation == 0) {
            System.out.println("Clear the Bit");
            int newBit = ((0101) & (~(0100)));
            System.out.println(newBit);
        } else {
            System.out.println("Set the Bit");
            int setNewBit = bitMask | n; // 0111 = 7
            System.out.println(setNewBit);
        }
    }
}
