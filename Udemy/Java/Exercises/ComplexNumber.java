public class ComplexNumber {
    
    private double real;
    private double imaginary;
    
    public ComplexNumber(double real, double imaginary) {
        
        this.real = real;
        this.imaginary = imaginary;
    }
    
    public double getReal() {
        
        return real;
    }
    
    public double getImaginary() {
        
        return imaginary;
    }
    
    public void add(double r, double i) {
        
        real += r;
        imaginary += i;
    }
    
    public void add(ComplexNumber complexNum) {
        
        real += complexNum.real;
        imaginary += complexNum.imaginary;
    }
    
    public void subtract(double r, double i) {
        
        real -= r;
        imaginary -= i;
    }
    
    public void subtract(ComplexNumber complexNum) {
        
        real -= complexNum.real;
        imaginary -= complexNum.imaginary;
    }
}