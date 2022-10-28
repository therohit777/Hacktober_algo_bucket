public class compareTo {
    public static void main(String[] args) {
        String name1 = "Tony";
        String name2 = "Tony";

        // Comparsion between two String
        // 1) s1 > s2 : +ve Value
        // 2) s1 == s2 : 0
        // 3) s1 <s2 : -ve value

        if (name1.compareTo(name2) == 0) {
            System.out.println("String are equal");
        } else {
            System.out.println("String are not equal");
        }

        // Upper code is the most effective way to Compare the String

        // String can be compare directly, but it can be show Wrong result sometime in
        // some cases.

        if (name1 == name2) {
            System.out.println("String are equal");
        } else {
            System.out.println("String are not equal");
        }
    }
}
