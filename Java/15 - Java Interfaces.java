import java.util.*;
interface AdvancedArithmetic{
  int divisor_sum(int n);
}

class MyCalculator implements AdvancedArithmetic{
    public int divisor_sum(int n){
        //this method calculates the sum divisors of an integer
        //ex : divisors of 6 are 1,2,3,  and 6
        //divisor_sum = 1+2+3+6=12
        int total = 0;

        for(int i=1;i<=n/2;i++){
            if (n%i ==0){
                total = total+i;
            }
        }
        total = total+n;
        return  total;
    }

}

class Solution{
    public static void main(String []args){
        MyCalculator my_calculator = new MyCalculator();
        System.out.print("I implemented: ");
        ImplementedInterfaceNames(my_calculator);
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print(my_calculator.divisor_sum(n) + "\n");
      	sc.close();
    }
    /*
     *  ImplementedInterfaceNames method takes an object and prints the name of the interfaces it implemented
     */
    static void ImplementedInterfaceNames(Object o){
        Class[] theInterfaces = o.getClass().getInterfaces();
        for (int i = 0; i < theInterfaces.length; i++){
            String interfaceName = theInterfaces[i].getName();
            System.out.println(interfaceName);
        }
    }
}

