public class StringBuilderAppend {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("h");
        sb.append("e");
        sb.append("l");
        sb.append("l");
        sb.append("o");
        System.out.println(sb);

        for (int i = sb.length()-1; i >= 0; i--) {
            System.out.print(sb.charAt(i));
        }
    }
}
