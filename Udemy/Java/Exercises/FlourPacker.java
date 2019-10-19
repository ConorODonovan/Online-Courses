public class FlourPacker {

    public static boolean canPack(int bigCount, int smallCount, int goal) {
        
        boolean result = false;
        
        if ((bigCount < 0) || (smallCount < 0) || (goal < 0)) {
            
            return false;
        }
 
        int totalSum = (bigCount * 5) + smallCount;
        
        if (totalSum >= goal) {
            
            if ((bigCount * 5) <= goal) {
                
                result = true;
            } 
            else {
                
                if ((goal % 5) <= smallCount) {
                    result = true;
                }
            }
        }
 
        return result;
    }
}