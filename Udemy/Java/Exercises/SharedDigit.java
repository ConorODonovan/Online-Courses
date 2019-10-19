public class SharedDigit {
    
    public static boolean hasSharedDigit(int num1, int num2) {
        
        if (num1 < 10 || num1 > 99) {
            return false;
        }
        
        if (num2 < 10 || num2 > 99) {
            return false;
        }
        
        int firstDigitNum1 = num1 % 10;
        int firstDigitNum2 = num2 % 10;
        
        num1 /= 10;
        num2 /= 10;
        
        int secondDigitNum1 = num1 % 10;
        int secondDigitNum2 = num2 % 10;
        
        if (firstDigitNum1 == firstDigitNum2 || firstDigitNum1 == secondDigitNum2) {
            return true;
        }
        
        if (secondDigitNum1 == firstDigitNum2 || secondDigitNum1 == secondDigitNum2) {
            return true;
        }
        
        return false;
    }
}