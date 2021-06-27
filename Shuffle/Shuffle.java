public class Shuffle {
// Exercise: Code Magnets Head First Java 2nd ed.
  public static void main(String[] args) {

    int x = 3;

    while (x > 0) {

      if (x > 2){
        System.out.print("a");
      }

      x = x - 1;
      System.out.print("-");

      if (x == 2) {
        System.out.print("b c");
      }

      if (x == 1) {
        System.out.print("d");
        x = x -1;
      }
    }
  }
}
