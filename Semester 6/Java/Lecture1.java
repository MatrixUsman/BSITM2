
package lecture.pkg1;

import java.util.Scanner; //java code for scanner

public class Lecture1 {

    public static void main(String[] args) {

        // ************Lecture No 2********
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your Roll No ");
        int Rollno = sc.nextInt();

        System.out.println("Enter your name");
        String name = sc.next();

        System.out.println("Your Roll No is =" + Rollno);
        System.out.println("Your Name is =" + name);

        System.out.println("Enter your cgpa");
        double grade = sc.nextDouble();
        System.out.println("Your CGPA is =" + grade);

        // *********Lecture No 1********
        /*
         * String myName = "Usman";
         * int myRollNo = 48;
         * char myGrade = 'A';
         * double myCGPA = 3.51;
         * int myMarks = 700;
         * 
         * System.out.println("********hello********");
         * 
         * System.out.println("My Name =" + myName);
         * System.out.println("My Roll No =" + myRollNo);
         * System.out.println("My Marks =" + myMarks);
         * System.out.println("My CGPA =" + myCGPA);
         * System.out.println("My Grade =" + myGrade);
         */

        // *************Lecture No 4*************
        /*
         * Scanner cc = new Scanner(System.in);
         * 
         * System.out.println("Enter your age =");
         * int age = cc.nextInt();
         * System.out.println("Your age is =" + age);
         * 
         * if(age >= 18){
         * System.out.println("Get in the party");
         * }
         * else{
         * System.out.println("You are not eligible");
         * }
         */

    }

}
