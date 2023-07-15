
package lecture.pkg1;

import java.util.Scanner;

public class PrintStt {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String myName = "Usman";
        int myRollNo = 48;
        char myGrade = 'A';
        double myCGPA = 3.51;
        int myMarks = 700;

        System.out.println("********hello********");

        System.out.println("My Name =" + myName);
        System.out.println("My Roll No =" + myRollNo);
        System.out.println("My Marks =" + myMarks);
        System.out.println("My CGPA =" + myCGPA);
        System.out.println("My Grade =" + myGrade);
        System.out.println("Enter your name =");
        String name = sc.next();

    }
}