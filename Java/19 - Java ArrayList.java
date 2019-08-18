import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        //ArrayList is a dynamic array. i.e unlike other list we can change its  size
        ArrayList[] list1 = new ArrayList[n]; //creating 2D arrayList

        for (int i=0; i<n; i++){
            ArrayList sub_list = new ArrayList(); 
            int d = sc.nextInt();
            //sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for(int j=0; j<d; j++){
                sub_list.add(sc.nextInt());
            }

            list1[i] = sub_list;
        }

        int q = sc.nextInt();

        for (int i=0; i<q; i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            //sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
            
            //int x = Integer.parseInt(xny[0]);
            //int y = Integer.parseInt(xny[1]);
            
            try{
                System.out.println(list1[x-1].get(y-1));
            }
            catch(Exception e){
                System.out.println("ERROR!");
            }
        }
    }
}

