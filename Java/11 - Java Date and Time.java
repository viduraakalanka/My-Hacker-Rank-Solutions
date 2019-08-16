import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

     /*
        Applying Zellers rule to calculate  the day
     */

    static int f,m,C,D,remainder;
    static String str;

    public static String findDay(int month, int day, int year) {
        if (month==1) {
            m=11;
        }
        else if(month==2){
            m=12;
        } 
        else{
            m=month-2;
        }

        if (month<3){
            D = year%100 -1;
        }
        else{
            D = year%100;
        }
        
        C = year/100;

        f = day + (13*m-1)/5 + D + D/4 + C/4 - 2*C;

        if(f<0){
            remainder = f%7 +7;
        }
        else{
            remainder = f%7;
        }

        switch(remainder){
            case 0:
                str = "SUNDAY";
                break;
            case 1:
                str = "MONDAY";
                break;
            case 2:
                str = "TUESDAY";
                break;
            case 3:
                str = "WEDNESDAY";
                break;
            case 4:
                str = "THURSDAY";
                break;
            case 5:
                str = "FRIDAY";
                break;
            case 6:
                str = "SATURDAY";
                break;
        }
        
        return str;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int month = Integer.parseInt(firstMultipleInput[0]);

        int day = Integer.parseInt(firstMultipleInput[1]);

        int year = Integer.parseInt(firstMultipleInput[2]);

        String res = Result.findDay(month, day, year);

        bufferedWriter.write(res);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}

//////////////////////////////////////Alternative//////////////////////////////////////////

import java.util.Arrays;
import java.util.Calendar;
import java.util.List;
import java.util.Scanner;

public class JavaDateAndTime {
    static List<String> days = Arrays.asList("SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY");
    
    public static String getDay(String day, String month, String year) {
          
        int y = Integer.parseInt(year);
        int m = Integer.parseInt(month);
        int d = Integer.parseInt(day);
          
        Calendar c = Calendar.getInstance();
        c.set(y, m-1, d); 
            
        int p = c.get(Calendar.DAY_OF_WEEK);
        String s = days.get(p-1);
        return s;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        String day = in.next();
        String year = in.next();
        
        System.out.println(getDay(day, month, year));
        
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////