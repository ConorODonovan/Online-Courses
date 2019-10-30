public class Point {
    
    private int x;
    private int y;
    
    public Point() {

    }
    
    public Point(int x, int y) {
        
        this.x = x;
        this.y = y;
    }
    
    public int getX() {
        
        return x;
    }
    
    public int getY() {
        
        return y;
    }
    
    public void setX(int newX) {
        
        x = newX;
    }
    
    public void setY(int newY) {
        
        y = newY;
    }
    
    public double distance() {
        
        return Math.sqrt((x * x) + (y * y));
    }
    
    public double distance(int pointX, int pointY) {
        
        int distX = pointX - x;
        int distY = pointY - y;
        
        return Math.sqrt((distX * distX) + (distY * distY));
    }
    
    public double distance(Point myPoint) {
        
        return Math.sqrt((x - myPoint.x) * (x - myPoint.x) + (y - myPoint.y) * (y - myPoint.y));
    }
}