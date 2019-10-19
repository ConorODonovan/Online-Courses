public class NumberPalindrome {
    public static boolean isPalindrome(int number) {
        if (number < 0) {
            number *= -1;
        }
        
        int reverse = 0;
        int originalNumber = number;
        int lastDigit = 0;
        
        while (number > 0) {
            lastDigit = number % 10;
            reverse *= 10;
            reverse += lastDigit;
            number /= 10;
        }
        
        if (originalNumber == reverse) {
            return true;
        }
        else {
            return false;
        }
    }
}