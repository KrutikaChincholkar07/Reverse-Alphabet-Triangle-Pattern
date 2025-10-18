import java.util.Scanner;

public class ReverseAlphabetTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an uppercase letter: ");
        char ch = sc.next().toUpperCase().charAt(0);

        int n = ch - 'A' + 1;

        for (int i = 0; i < n; i++) {
            for (char c = (char)(ch - i); c <= ch; c++) {
                System.out.print(c + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
