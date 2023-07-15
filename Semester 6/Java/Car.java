
package lecture.pkg1;


public class Car {
    
    String colour;
    int Model;
    
    public void Acceleration(){
        System.out.println("Car is accelerating");
    }
    
    public void Breaking(){
        System.out.println("Car is breaking");
    
    }
    
    public static void main(String[] args){
        
        Car obj1=new Car();
        obj1.Model=1999;
        obj1.colour="Black";
        System.out.println("Model of the car is ="+obj1.Model);
        System.out.println("Coloue of the car is ="+obj1.colour);
        
        Car obj2=new Car();
        obj2.Model=2005;
        obj2.colour="White";
        System.out.println("Model of the car is ="+obj2.Model);
        System.out.println("Coloue of the car is ="+obj2.colour);
        
        Car obj3=new Car();
        obj3.Model=2013;
        obj3.colour="Marron";
        System.out.println("Model of the car is ="+obj3.Model);
        System.out.println("Coloue of the car is ="+obj3.colour);
        
        Car obj4=new Car();
        obj4.Model=2016;
        obj4.colour="Cream";
        System.out.println("Model of the car is ="+obj4.Model);
        System.out.println("Coloue of the car is ="+obj4.colour);
        
        Car obj5=new Car();
        obj5.Model=2021;
        obj5.colour="Black";
        System.out.println("Model of the car is ="+obj5.Model);
        System.out.println("Coloue of the car is ="+obj5.colour);
        
        obj1.Acceleration();
    
    }
    
}
