public class LastDigitChecker {
    
    public static boolean isValid(int num) {
        if (num < 10 || num > 1000) {
            return false;
        }
        else {
            return true;
        }
    }
    
    public static boolean hasSameLastDigit(int num1, int num2, int num3) {
        
        int lastDigit1 = num1 % 10;
        int lastDigit2 = num2 % 10;
        int lastDigit3 = num3 % 10;
        
        if (!isValid(num1)) {
            return false;
        }
        
        if (!isValid(num2)) {
            return false;
        }
        
        if (!isValid(num3)) {
            return false;
        }
        
        if (lastDigit1 - lastDigit2 == 0 || lastDigit1 - lastDigit3 == 0 || lastDigit2 - lastDigit3 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
}