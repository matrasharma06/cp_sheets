import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        Map<String,Integer> pb = new HashMap<String,Integer>(); 
        
        for(int i = 0; i < n; i++)
            pb.put(in.next(), in.nextInt());
        
        while(in.hasNext()){
            String name = in.next();
            if (pb.containsKey(name))                
            System.out.println(name + "=" + pb.get(name) );
            else
            System.out.println("Not found");
        }
        in.close();
    }
}
