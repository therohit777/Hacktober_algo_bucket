public class ArrayDeclartion {
    public static void main(String[] args) {
       // This is a type 1 of declartion
        int[] marks = new int[5];
        marks[0] = 98;
        marks[1] = 33;
        marks[2] = 88;
        marks[3] = 99;
        marks[4] = 98;
        for (int i = 0; i < marks.length; i++) {
            System.out.println(marks[i]);
        }
    }
}
