class Animal{
    void sound(){
        System.out.println("Some Sound");
    }
} 
class Dog extends Animal{
    @Override
    void sound(){
        System.out.println("Bark");
    }
}

public class methodoverring {
    public static void main(String args[]){
    Animal a1 = new Dog();
    a1.sound();
    }
}