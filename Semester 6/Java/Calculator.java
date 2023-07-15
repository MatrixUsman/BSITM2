
package lecture.pkg1;

import java.util.Scanner;
public class Calculator {
    
    //int Add,sub,Mult,div;
    
    public int Addition(){
     Scanner sc=new Scanner(System.in);
        int a,b;
        System.out.println("Enter ther value of a and b=");
        
        a=sc.nextInt();
        b=sc.nextInt();
        int c=a+b;
        
        System.out.println("The sum of a and b is ="+c);
        return c;
    } 
   public int Substraction(){
     Scanner sc=new Scanner(System.in);
        int a,b;
        System.out.println("Enter ther value of a and b=");
        
        a=sc.nextInt();
        b=sc.nextInt();
        int c=a-b;
        
        System.out.println("The substraction of a and b is ="+c);
        return c;
    }    
   
    public int Multiplication(){
     Scanner sc=new Scanner(System.in);
        int a,b;
        System.out.println("Enter ther value of a and b=");
        
        a=sc.nextInt();
        b=sc.nextInt();
        int c=a*b;
        
        System.out.println("The Multiple of a and b is ="+c);
        return c;
    }
      
         public int Division(){
     Scanner sc=new Scanner(System.in);
        int a,b;
        System.out.println("Enter ther value of a and b=");
        
        a=sc.nextInt();
        b=sc.nextInt();
        int c=a/b;
        
        System.out.println("The division of a and b is ="+c);
        return c;
    }
    
        
    
    
    public static void main(String[] args){
    
        Calculator obj1=new Calculator();
        
        obj1.Addition();
        obj1.Substraction();
        obj1.Multiplication();
        obj1.Division();
        
    }
}
            
             
    

