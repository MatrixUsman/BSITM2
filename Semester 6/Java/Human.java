
package lecture.pkg1;

//import java.util.Scanner;

public class Human {

    String name;
    int age;

    public void Speaking() {

        System.out.println("name is speaking");
    }

    public void Eating() {

        System.out.println("human is eating");
    }

    public void Walking() {

        System.out.println("human is walking");
    }

    public static void main(String[] args){
    
        Human obj1=new Human();
        obj1.name="Usman";
        obj1.age=20z;
       
        
        System.out.println("My name is =" +obj1.name );
        System.out.println("My age is ="+ obj1.age);
    }

}
