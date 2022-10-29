import java.util.Scanner;

class garbage_collection {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Runtime r = Runtime.getRuntime();
        long m1, m2, m3;
        Integer someints[] = new Integer[100];
        System.out.println("Total memory is:" + r.totalMemory());
        m1 = r.freeMemory();
        System.out.println("Initial free memory:" + m1);
        r.gc();
        m1 = r.freeMemory();
        System.out.println("Free memory after garbage collection:" + m1);

        System.out.println("Enter 5 integer values: \n");
        for (int i = 0; i < 5; i++)
            someints[i] = sc.nextInt();
        sc.nextLine();

        m2 = r.freeMemory();
        System.out.println("Free memory after input:" + m2);

        for (int i = 0; i < 10; i++)
            someints[i] = null;

        m2 = r.freeMemory();
        System.out.println("Free memory after input is made null:" + m2);
        r.gc();
        m3 = r.freeMemory();
        System.out.println("Free memory after garbage collection:" + m3);
    }
}