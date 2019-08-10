import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    static int B,H;
    static boolean flag = false;
    //Gets called every time an instance of the class is constructed. The static block only gets called once, when the class itself is initialized, no matter how many objects of that type you create.
    //Class is initialized when an object from that class is created or when static variable is used 
    static {
        
        Scanner sc = new Scanner(System.in);
        B  = sc.nextInt();
        H  = sc.nextInt();

        if (B<=0 || H<=0 ){
            System.out.print("java.lang.Exception: Breadth and height must be positive");
        }
        else {
            flag = true;
        }
    }

public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class

