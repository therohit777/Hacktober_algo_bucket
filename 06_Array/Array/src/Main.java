public class Main {
    public static void main(String[] args) {
        System.out.println("Started Learning Array");
        // Array is a collection of data types.
        // Syntax
        // datatype[] variacle_name = new datatypes
        int[] arr = {233, 333, 222, 222, 222};
        System.out.print("[");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(" " + arr[i] + ",");
        }
        System.out.print("]");
    }
}