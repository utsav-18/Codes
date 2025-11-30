
class Animal{
    void eat(){
        System.out.println("EAT");
    }
}
class Dog extends Animal{
    void bark(){
        System.out.println("BARRK");
    }
}

public class inheritence{
    public static void main(String args[]){
        Dog dog = new Dog();
        dog.eat();
        dog.bark();
    }
}