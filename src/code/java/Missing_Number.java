import java.util.Scanner;
public class Missing_Number{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        boolean[] arr = new boolean[n+1];
        for(int i=0;i<n-1;i++){
            int index = sc.nextInt();
            arr[index - 1]= true;
        }

        for(int i=0;i<n;i++){
            if (!arr[i]) {
                System.out.print(i+1);
                break;
            }
        }
 
    }
}