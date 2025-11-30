class calculator{
    int add(int x,int y){
        return x+y;
    }
    int add(int x,int y,int z){
        return x+y+z;
    }
}

public class methodoverloading {
    public static void main(String[] args) {
            calculator calci = new calculator();
        System.out.println(calci.add(3,4));
        System.out.println(calci.add(3,4,5));
    }
}
