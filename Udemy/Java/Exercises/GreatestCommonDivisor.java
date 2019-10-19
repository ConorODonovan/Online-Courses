public class GreatestCommonDivisor {
    
    public static int getGreatestCommonDivisor(int first, int second) {
        
        if (first < 10 || second < 10) {
            
            return -1;
        }
        
        int smallestNumber = 0;
        
        if (first < second) {
            
            smallestNumber = first;
        }
        else {
            smallestNumber = second;
        }
        
        int i = 0;
        int greatestCommonDivisor = -1;
        
        for (i = 2; i <= smallestNumber; i++) {
            
            if (first % i == 0 && second % i == 0) {
                
                greatestCommonDivisor = i;
            }
        }
        
        return greatestCommonDivisor;
    }
}