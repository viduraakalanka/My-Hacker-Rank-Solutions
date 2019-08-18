import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = s.substring(0,k);
        String largest = s.substring(0,k);
        
        for (int i=1;i<s.length()-k+1;i++){
            String sub_str = s.substring(i,i+k);

            if (smallest.compareTo(sub_str)>0){
                smallest = sub_str;
            }

            if (largest.compareTo(sub_str)<0){
                largest = sub_str;
            }
        }
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}