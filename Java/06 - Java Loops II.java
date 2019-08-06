import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        int[] a = new int[t];
        int[] b = new int[t];
        int[] n = new int[t];
        
        for(int i=0;i<t;i++){
            a[i] = in.nextInt();
            b[i] = in.nextInt();
            n[i] = in.nextInt();
        }
        in.close();

    
        for(int j=0; j<t; j++ ){
            int ans = a[j];
            for(int i=1;i<=n[j];i++){
                ans += Math.pow(2,i-1)*b[j];
                System.out.print(ans);
                System.out.print(" ");
            } 
            System.out.println("");           
        }
    }
}

