public class DiagonalStar {
    
    public static void printSquareStar(int num) {
        
        if (num < 5) {
            System.out.println("Invalid Value");
        }
        else {
        
            String SquareStar = "";
            boolean test1 = false;
            boolean test2 = false;
            boolean test3 = false;
            
            for (int i = 1; i <= num; i++) {
                
                SquareStar = "";
                
                for (int j = 1; j<= num; j++) {
                    
                    test1 = j == 1 || j == num || i == 1 || i == num;
                    test2 = i == j;
                    test3 = j == num - i + 1;
                    
                    if (test1 || test2 || test3) {
                        
                        SquareStar += "*";
                    }
                    else {
                        
                        SquareStar += " ";
                    }
                }
                
                System.out.println(SquareStar);
            }
        }
    }
}