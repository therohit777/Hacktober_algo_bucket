public class setBit {
    public static void main(String[] args) {
        int n = 5; // 0101
        int pos = 1; // 0001
        int bitMask = 1 << pos; // 0010

        int setNewBit = bitMask | n; // 0111 = 7
        System.out.println(setNewBit);
    }
}
