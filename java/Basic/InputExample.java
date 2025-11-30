package Basic;
import java.util.Scanner;

 class hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = s.nextLine();

        System.out.print("Enter your age: ");
        int age = s.nextInt();

        System.out.println("Hello, " + name + "! You are " + age + " years old.");

        s.close();
    }
}



    