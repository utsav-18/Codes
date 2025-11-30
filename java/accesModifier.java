//default;
// class show{
//     void display(){
//         System.out.println("Hello!!");
//     }
// }
// public class accesModifier {
//     public static void main(String[] args) {
//         show s = new show();
//         s.display();
//     }
// } 
// output => Hello!!

    //Private;
    //    class A{
    //     private void display(){
    //         System.out.println("Private!!");
    //     }
    // }

    // public class accesModifier {
    //     public static void main(String[] args) {
    //         A s = new A();
    //         s.display();
    //     }}
    // } output => error void display has a private access;

class Animal {
    protected String name;

    protected void display() {
        System.out.println("Animal name: " + name);
    }
}
class Dog extends Animal {
    public void setName(String name) {
        this.name = name;
    }
}
public class accesModifier {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.setName("Buddy");
        dog.display();  
    }
}
    