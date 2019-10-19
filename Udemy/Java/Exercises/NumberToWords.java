public class NumberToWords {
    
    public static int reverse (int number) {
        
        int remainder, reversedNum = 0;
        while(true) {
            
            remainder = number % 10;
            reversedNum = reversedNum * 10 + remainder;
            number = number/10;
            
            if (number == 0) {
            
                break;
            }
        }
        return reversedNum;
    }
    
    public static int getDigitCount(int number) {
        
        if (number < 0) {
            
            return -1;
        }
        
        if (number < 10) {
            
            return 1;
        }
        
        int numOfDigits = 0;
        
        while (number > 0) {
            
            numOfDigits += 1;
            number = number/10;
        }
        
        return numOfDigits;
    }
    
    public static void numberToWords(int number) {
     
        if (number < 0) {
            
            System.out.println("Invalid Value");
        }
        else {
            
            int digits = getDigitCount(number);
            
            number = reverse(number);
            int lastDigit = 0;
            
            for (int i = 1; i <= digits; i++) {
                
                lastDigit = number % 10;
                
                switch(lastDigit) {
                    
                    case 1:
                        System.out.println("One");
                        break;
                    case 2:
                        System.out.println("Two");
                        break;
                    case 3:
                        System.out.println("Three");
                        break;
                    case 4:
                        System.out.println("Four");
                        break;
                    case 5:
                        System.out.println("Five");
                        break;
                    case 6:
                        System.out.println("Six");
                        break;
                    case 7:
                        System.out.println("Seven");
                        break;
                    case 8:
                        System.out.println("Eight");
                        break;
                    case 9:
                        System.out.println("Nine");
                        break;
                    default:
                        System.out.println("Zero");
                }
                
                number /= 10;
            }
        }
    }
}