
package lecture.pkg1;

public class Student3 {

    String name;
    String rollno;
    int semester;
    String session;

    Student3(String n, String r, int s, String ss) {

        name = n;
        rollno = r;
        semester = s;
        session = ss;
    }

    Student3(String nam, String roll, Student3 t) {

        name = nam;
        rollno = roll;
        semester = t.semester;
        session = t.session;
    }

    public void Display() {

        System.out.println("My name is = " + name);
        System.out.println("My rollno is = " + rollno);
        System.out.println("My semester is = " + semester);
        System.out.println("My session is = " + session);
    }

    public static void main(String[] args) {

        Student3 obj1 = new Student3("Usman", "BSIT-M2-20-48", 6, "2020-2024");
        Student3 obj2 = new Student3("Ali", "BSIT-M2-20-1", obj1);

        obj1.Display();
        obj2.Display();
    }

}
