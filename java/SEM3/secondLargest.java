
public class secondLargest {
    public static void main(String args[]){

            int a,b,c;
            a=1;
            b=2;
            c=3;

            if((a>b && a<c) || a>c && a<b) System.out.println(a +" is sl");
             if((b>c && b<a) || b>a && b<c) System.out.println(a +" is sl");
             if((c>b && c<a) || c>a && c<b) System.out.println(a +" is sl");

    }
}
