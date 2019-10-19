import java.util.Scanner;
 
public class InputCalculator {
    
    public static void inputThenPrintSumAndAverage() {
        
        int num = 0;
        int sum = 0;
        int count = 0;
        double doubleAverage;
        long average = 0;
        
        Scanner scanner = new Scanner(System.in);
        
        while (scanner.hasNextInt()) {
            
            num = scanner.nextInt();
            sum = sum + num;
            count++;
        }
        
        doubleAverage = (double)sum/(double)count;
        
        average = Math.round(doubleAverage);
        
        System.out.println("SUM = " + sum + " AVG = " + average);
    }
}