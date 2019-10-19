public class PaintJob {
    
    public static int getBucketCount(double width, double height, double areaPerBucket, int extraBuckets) {
        
        if (width <= 0 || height <= 0 || areaPerBucket <= 0 || extraBuckets < 0) {
            
            return -1;
        }
        
        double area = width * height;
        
        double bucketsAtHomeCoverage = areaPerBucket * extraBuckets;
        
        double remainingArea = area - bucketsAtHomeCoverage;
        
        if (remainingArea < 0) {
            
            return 0;
        }
        else {
            
            double bucketsToBuy = Math.ceil(remainingArea/areaPerBucket);
            return (int)bucketsToBuy;
        }
    }
    
    public static int getBucketCount(double width, double height, double areaPerBucket) {
        
        return getBucketCount(width, height, areaPerBucket, 0);
    }
    
    public static int getBucketCount(double area, double areaPerBucket) {
        
        return getBucketCount(area, 1, areaPerBucket);
    }
}