
package lecture.pkg1;


public class Student2 {
    
    String Name;
    int Price;
    
    Student2(String n, int p ){
        
        Name=n;
        Price=p;
      
    }
    
  
    
    
    public void Display(){
    
        System.out.println("Name = " + Name);
        System.out.println("Price = " + Price);
    }
    
  
    
    public static void main(String[] args){
    
        Student2 obj=new Student2("Mango",350);
        Student2 obj2=new Student2("Apple",150);
        Student2 obj3=new Student2("Cherry",550);
        Student2 obj4=new Student2("Bnana",650);
        Student2 obj5=new Student2("Peach",143); 
        Student2 obj6=new Student2("Grapes",870);
        Student2 obj7=new Student2("WaterMelon",790);
        Student2 obj8=new Student2("Pear",450);
        Student2 obj9=new Student2("Steawberry",225);
        Student2 obj10=new Student2("Pineapple",681);
        obj.Display();
        obj2.Display();
        obj3.Display();
        obj4.Display();
        obj5.Display();
        obj6.Display();
        obj7.Display();
        obj8.Display();
        obj9.Display();
        obj10.Display();
        
            
    }
    //Parameterize Constructor: No of parameter and data type of parameter
    
}
