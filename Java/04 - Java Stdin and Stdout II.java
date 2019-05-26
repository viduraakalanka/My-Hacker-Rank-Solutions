import java.util.Scanner;

public class Solution {
    //When switching between reading tokens of input and reading a full line of input, you need to make another call to nextLine() because the Scanner object will read the rest of the line where its previous read left off; if there is nothing on the line, it simply consumes the newline and moves to the beginning of the next line.
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        //no  need of scan.nextLine() here
        //this is because nextInt() and nextDouble() does is it assigns integer to appropriate variable and keeps the enter key unread in thekeyboard buffer.
        double d = scan.nextDouble();
        scan.nextLine(); //nextInt() nextDouble() doesnt read newline character. So this is included to read it  out
        String s = scan.nextLine();

        // Write your code here.

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}

