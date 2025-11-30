import java.util.Scanner;

public class pattern {
    
  public static void  main(String[] args) {
    
      Scanner input = new Scanner(System.in);

      System.out.print("Enter a: ");

      int a = input.nextInt();


      for(int i=0;i<=a;i++){
            for(int j=0;j<i;j++){
                   
           System.out.print("* ");
                }
            
            System.out.print("\n");
         }


         input.close() ; 
    
        }
    }
    

