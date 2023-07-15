
package lecture.pkg1;


public class Class {
    
    String Name;
    int RollNo;
    int Semester;
    double Cgpa;
    
    public void TakingExam(){
    
        System.out.println("I am Taking Exam");
    }
    
    public void TakingClass(){
    
        System.out.println("I am Taking Class");
    }
    
    public static void main(String[] args){
    
        Class obj1=new Class();
        obj1.Name="Usman Razwan";
        obj1.Cgpa=3.51;
        obj1.RollNo=48;
        obj1.Semester=6;
        
        System.out.println("My name is ="+obj1.Name + '\n' + "My CGPA is ="+obj1.Cgpa+ '\n' +"My Roll no is ="+obj1.RollNo);
        System.out.println("My Semester is ="+obj1.Semester);
        
        
    
    }
    
    
    
}
