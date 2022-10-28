import java.util.*;

public class first {
    public static void main(String[] args) {
        String name = "Harry";
        String about = "Harry is a Youtuber";
        System.out.println(name);
        System.out.println(about);

        Scanner sc = new Scanner(System.in);
        Scanner ac = new Scanner(System.in);
        String name2 = sc.next(); // for Single word
        String about2 = ac.nextLine(); // for the sentence
        System.out.println(name2);
        System.out.println(about2);
    }
}
