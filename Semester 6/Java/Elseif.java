
package lecture.pkg1;


public class Elseif {
     public static void main(String[] args) {
         
         char Grade = 'A';
         
         if (Grade == 'A'){
             System.out.println("Your grade is exellent");
         }
         else if (Grade == 'B') {
             System.out.println("Your grade is good");
             
         }
         else if (Grade == 'C') {
             System.out.println("Your grade is satisfactory");
             
         }
          else if (Grade == 'D') {
             System.out.println("Your grade is poor");
             
         }
          else if (Grade == 'F') {
             System.out.println("Your grade is fail");
             
         }
         
         System.out.println("We are Done");
     }
    
}
