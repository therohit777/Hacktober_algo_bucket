import java.util.Scanner;

public class arrayFInder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sizeofArray = sc.nextInt();
        int[] array = new int[sizeofArray];
        for (int i = 0; i < sizeofArray; i++) {
            array[i] = sc.nextInt();
        }
        // Let the Given Number is 10;
        int givenNumber = 10;
        // When it occurs, array stop prnting
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
            if (array[i] == givenNumber) {
                break;
            }
        }

    }
}
