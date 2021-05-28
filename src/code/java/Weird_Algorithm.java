import java.util.Scanner;
public class Weird_Algorithm {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();
    while (n > 1) {
      System.out.print(n + " ");
      n = n % 2 == 0 ? n / 2 : n * 3 + 1;
    }
    System.out.print(n);
  }
}