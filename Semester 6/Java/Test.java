
package lecture.pkg1;

import java.util.Scanner;

public class Test {
    
    public static void main(String[] args){
        
        
        Scanner input=new Scanner(System.in);
        int[] value =new int[5];
        int sum=0;
        System.out.println("Enter 5 integers");
          
        for (int i = 0; i<value.length; i++) {
            value[i]=input.nextInt();
            
        }
     /*   System.out.println("Array values are");
        for (int i = 0; i <= 5  ; i++) {
            
            System.out.println(  value[i]);
      }*/  
        for (int i = 0; i < value.length; i++) {
             if (value[i]%2==0) {
                 
             sum += value[i];
            System.out.println( sum);
        }
            
        }
        System.out.println(value.length);
    }
    
}
