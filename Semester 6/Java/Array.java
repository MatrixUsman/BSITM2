
package lecture.pkg1;

import java.util.Scanner;

public class Array {
    
    public static void main(String[] args){
        
      //  Scanner input =new Scanner (System.in);
                
          /*    String [] name =  new String[20];
              System.out.println("Enter the name of 20 students:");
              for (int i = 0; i < 20; i++) {
                      name[i] = input.next();
                      
        
        }
              System.out.println("The name of students rage from 7-14:");
              for (int i = 6; i < 14; i++) {
                  System.out.println(name[i]);
            
        }*/
      int [] a={10,20,30,40,50};
        System.out.println(a.length);
        
        int val;
        
        boolean isfound=false;
        Scanner input=new Scanner(System.in);
        
        System.out.println("enter your value");
        val =input.nextInt();
        
        for(int i=0; i<5; i++)
        {
            if(a[i]==val)
            {
                System.out.println("Data is found");
                isfound=true;
            }
          /*  else
            {
                System.out.println("data is yes");
            }*/
        }
        if(isfound==false)
        {
            System.out.println("Data is not found");
        }
        
    }
    }
    

