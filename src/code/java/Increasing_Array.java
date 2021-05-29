import java.util.Scanner;
public class Increasing_Array{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        long n= sc.nextLong();
        long ans = 0;
        long prev = -1;
        for(long i=0;i<n;i++){
            long ele = sc.nextLong();
            if(ele < prev)
            {
                ans += prev - ele;
                ele = prev;
            }
            prev = ele;
        }
        System.out.println(ans);
    }
}