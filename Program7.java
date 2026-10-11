Program7
class objcount {
    static int count = 0;
    objcount( ) 
{
        count++;
    }
    public static void main(String[] args) 
{
        objcount t1 = new objcount();
        objcount t2 = new objcount();
        objcount t3 = new objcount();
        System.out.println("Number of objects = " + count);
    }
}
Program 8
class Demo
 {
    int x;
    Demo(int x) 
{
        this.x = x;   // refers to instance variable
    }
    void show() 
{
        System.out.println(x);
    }
    public static void main(String[] args) 
{
        Demo d = new Demo(10);
        d.show();
    }
}
Program 9
class Parent
 {
    int x = 100;
}
class Child extends Parent {
    int x = 20;
    void show() {
 System.out.println(super.x); 
System.out.println(x); 
        
    }
    public static void main(String[] args) {
        Child c = new Child();
        c.show();
    }
}
Program10
class Parent {
    int x = 100;

    void show() {
        System.out.println("Parent class-x " + x);
    }
}

class Child extends Parent {
    int x = 20;

    void show() {
        System.out.println("Child class -x" + x);
    }

    public static void main(String[] args) {
        Parent p = new Parent();
        p.show();
        Child1 c = new Child1();
        c.show();
    }
}


