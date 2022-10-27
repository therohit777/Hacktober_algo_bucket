public class clearBit {
    public static void main(String[] args) {
        int n = 5; // 0101
        int pos = 2;
        int bitMask = 1 << pos; // 0100

        int newBit = ((0101) & (~(0100)));
        System.out.println(newBit);
        

    }
}
