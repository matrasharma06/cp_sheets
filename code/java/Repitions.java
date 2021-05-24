import java.util.*;

public class Main
 {
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		long t = 1l,ans = 1l;
		for(int i = 1; i < str.length(); i++)
		{
			if(str.charAt(i)==str.charAt(i-1))
			{
				t++;
                ans = Math.max(t,ans);
			}
			else{
				
				t = 1l;
			}
		}
		System.out.println(ans);
	}
}