import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.nextLine();

        for (int i = 0; i < n; i++) {
            String string = sc.nextLine();
            char[] charArray = string.toCharArray();

            for (int j = 0; j < charArray.length; j += 2) 
            System.out.print(charArray[j]);
            System.out.print(" ");

            for (int j = 1; j < charArray.length; j += 2) 
            System.out.print(charArray[j]);
            System.out.println();
        }

        sc.close();
    }
}