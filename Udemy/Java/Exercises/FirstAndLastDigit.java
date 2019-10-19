public class FirstLastDigitSum {
    
    public static int sumFirstAndLastDigit(int number) {
        
        int firstDigit;
        int lastDigit;
        
        if (number < 0) {
            
            return -1;
        }
        
        if (number < 10) {
            return number + number;
        }
        
        lastDigit = number % 10;
        
        while (number > 9) {
            
            number /= 10;
        }
        
        firstDigit = number;
        
        return firstDigit + lastDigit;
    }
}