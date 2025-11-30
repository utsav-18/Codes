//constructor overloading ;
 class player {
    String name;
    int age;
    char ID;
    player (String n,int a){
        name=n;
        age=a;
    }
    player(String n,int a,char id){
        name=n;
        age=a;
        ID=id;
    }
 };

 
 class CodeEx{
        public static void main(String[] args){
            System.out.println("hello");
            player p1= new player("Utsav",20);
            player p2 = new player("Rapunzel",20);
            player p3 = new player("Raju",21,'D');
            System.out.println(p1.name);
            System.out.println(p1.age);
            System.out.println(p2.name);
            System.out.println(p2.age);
            System.out.println(p3.name);
            System.out.println(p3.age);
            System.out.println(p3.ID);


        }
}