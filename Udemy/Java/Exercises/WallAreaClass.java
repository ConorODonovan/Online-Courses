public class Wall {
    
    private double width;
    private double height;
    
    public Wall() {
        
        double width;
        double height;
    }
    
    public Wall(double width, double height) {
        
        if (width > 0) {
            
            this.width = width;
        }
        else {
            
            this.width = 0;
        }
        
        if (height > 0) {
            
            this.height = height;
        }
        else {
            
            this.height = 0;
        }
    }
    
    public double getWidth() {
        
        return width;
    }
    
    public double getHeight() {
        
        return height;
    }
    
    public void setWidth(double w) {
        
        if (w < 0) {
            
            width = 0;
        }
        else {
            
            width = w;
        }
    }
    
    public void setHeight(double h) {
        
        if (h < 0) {
            
            height = 0;
        }
        else {
            
            height = h;
        }
    }
    
    public double getArea() {
        
        return width * height;
    }
    
}