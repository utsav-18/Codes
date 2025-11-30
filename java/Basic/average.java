package Basic;
import java.util.Scanner;

public class average {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        
        System.out.print("enter maths marks :");
        int math = input.nextInt();

        System.out.print("enter physics marks :");
        int phy = input.nextInt();

        System.out.print("enter chemistry marks :");
        int chem = input.nextInt();
        
        System.out.print("enter joc marks :");
        int joc = input.nextInt();

         int total = math+phy+chem+joc;

         double average = total/4.0;

         System.out.println(average);


         input.close();

    }
}
