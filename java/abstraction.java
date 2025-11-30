// Abstraction : 
// abstract class Vehicle {
//     abstract void start();
// }

// class Car extends Vehicle {
//     @Override
//     void start() {
//         System.out.println("Car starts with a key.");
//     }
// }

// public class abstraction {
//     public static void main(String[] args) {
//         Vehicle car = new Car();
//         car.start();
//     }
// }

//Interface :

interface Animal {
    void makeSound();
}

class Cat implements Animal {
    public void makeSound() {
        System.out.println("Meow");
    }
}

public class abstraction {
    public static void main(String[] args) {
        Animal cat = new Cat();
        cat.makeSound(); // Output: Meow
    }
}

