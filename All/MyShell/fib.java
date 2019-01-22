import java.util.Scanner;

public class Main
{
  public static void main(String[] args)
  {
    //For the script read a positive integer from the keyborad into variable: n
    Scanner keyboard = new Scanner(System.in);
    System.out.print("Which term? ");
    int n = keyboard.nextInt();
    System.out.println(fib(n));
  }

  private static int fib(int n)
  {
    if(n == 1) return 1;
    if(n == 2) return 1;
    return fib(n-1) + fib(n -2);
  }
}
