// Put the two classes in separate files Geeks.java and Main.java
// Compile both using `javac Geeks.java Main.java`
// run `java Main`

//User function Template for Java
class Geeks {
	 static void printTable (int n) 
	 {
      int multiplier=10;
      while(multiplier>0)
      {
        System.out.println((multiplier * n) + " ");
        multiplier--;
      }
      System.out.println();
	 }

}
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int n = scan.nextInt();
        scan.close();

        Geeks geek = new Geeks();
        geek.printTable(n);
    }
}
