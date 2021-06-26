public class coinFlip {

  public static void main(String[] args) {
    double rand = Math.random();

    if (rand > 0.50) {
      System.out.println("Heads");
    }
    else {
      System.out.println("Tails");
    }
  }
}
