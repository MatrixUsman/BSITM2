
package lecture.pkg1;

import java.util.Arrays;

public class LargestSmallestNo {
    
    public static void main(String[] args){
        
        
        int size , temp , smll;
        int[] values={12,55,48,22,14,19,15,18,16,11};
        Arrays.sort(values);
        System.out.println("Sorted array " + Arrays.toString(values));
        smll = values[0];
        System.out.println("Smallest no is" + smll );
        size = values.length;
        for (int i = 0; i < size; i++) {
            for (int j = i+1 ; j < size; j++) {
                if (values[i]>values[j]) {
                    temp=values[i];
                    values[i]=values[j];
                    values[j]=temp;
                    
                    
                }
                
            }
            
        }
       
        System.out.println("Smallest no is :" + values[0]);
        
    }
    
}
