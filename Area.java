class Area {
    void area(double r){
        double result=3.14*r*r;
        System.out.println("Area of circle="+result);

    }
void area(double i, double b)
{
    double result= i*b;
    System.out.println("Area of Rectangle="+result);
}
    void area(byte b, int h){
    
        double result= 0.5*b*h;
        System.out.println("Area of Triangle="+result);
}
public static void main(String[]args){
    Area obj = new Area();
    obj.area(5);
    obj.area(4.0,6.5);
    obj.area(3,8);
}
}