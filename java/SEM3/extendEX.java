// Superclass
class Animal {
    String name;

    void eat() {
        System.out.println(name + " is eating");
    }
}

// Subclass
class Dog extends Animal {
    void bark() {
        System.out.println(name + " is barking");
    }
}

public class extendEX {
    public static void main(String[] args) {
        Dog dog = new Dog();  // Create an instance of Dog
        dog.name = "Buddy";   // Inherited field from Animal class
        dog.eat();            // Inherited method from Animal class
        dog.bark();           // Method defined in Dog class
    }
}
