import java.util.*;
class division{
    int div(int a, int b){
        try{
            System.out.println((double)a/b);
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
        return 0;
    }
}
class EXCEPTION extends division{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        division obj = new division();
        obj.div(a,b);
    }
}
