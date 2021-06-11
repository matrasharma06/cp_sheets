import java.io.*;
import java.util.*;

class Difference{
    private int[] elements;
   
    Difference(int[] elements){ 
        this.elements = elements; 
    }
    
    public void maximumDifference;
    int computeDifference(){
    int min_ele = 101, max_ele = -1;
    for(int i=0; i<elements.length; i++){
        if (elements[i] < min_ele) min_ele = elements[i];
        if (elements[i] > max_ele) max_ele = elements[i];
    }
    maximumDifference = max_ele - min_ele
    }
}

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        Difference d = new Difference(arr);
        d.computeDifference();
        System.out.println(d.maximumDifference);
        sc.close();
    }
}