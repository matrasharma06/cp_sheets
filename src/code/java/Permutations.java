import java.util.Scanner;
public class Permutations{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        if(n<2)
            System.out.print("1");
        else if(n<4)
            System.out.print("NO SOLUTION");
        else if(n==4)
            System.out.print("2 4 1 3");
        else{
            StringBuilder str = new StringBuilder();
            for(int i=1;i<=n;i+=2)
                str.append(i).append(" ");
            for(int i=2;i<=n;i+=2)
                str.append(i).append(" ");
             System.out.println(str);
        }
        
    }
}