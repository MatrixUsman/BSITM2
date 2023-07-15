
package lecture.pkg1;

public class Student {

    // Constructor= To Initialize your variable

    String name;
    String Rollno;
    float cgpa;

    // Difference between Constructor and Function
    // 1:Constructor Name is exactly as Class name
    // 2:Function have a return type Constructure does not have return type
    // 3:When object is created Constructor called
    // 1:Parameterize Constructor 2:Copy constructor
    // Parametrize Constructor Important

    Student() {

        name = "Usman Razwan";
        Rollno = "BSIT M2-20-48";
        cgpa = 3.4f;

        System.out.println("I am Constructor");
    }

    public void Display() {

        System.out.println("Name =" + name);
        System.out.println("Roll no =" + Rollno);
        System.out.println("CGPA =" + cgpa);
    }

    public static void main(String[] args) {

        Student obj1 = new Student();
        obj1.Display();

    }
}
