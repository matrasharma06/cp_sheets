import java.util.*;

class Book {
    protected String title;
    protected String author;
    
    Book(String title, String author){
        this.title = title;
        this.author = author;
    }
     
}

class MyBook extends Book{
    
    private int price;
    
    MyBook(String title, String author, int price){ 
        super(title,author);
        this.price = price; 
    }
    
    public void display(){
        System.out.println("Title: " + title + "\nAuthor: " + author + "\nPrice: " + price);
    }
}

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String title = sc.nextLine();
        String author = sc.nextLine();
        int price = sc.nextInt();
        
        MyBook mb = new MyBook(title, author, price);
        mb.display();
    }
}
