public class eightBall {

  public static void main(String[] args) {

    System.out.println("Ask your Question");
    System.out.println("Press enter to continue");

    try{System.in.read();}
    catch(Exception e){}

    String[] wordListOne = {"As I see it, yes", "Ask again later", "Better not tell you", "Cannot predict now", "Concentrate and ask again", "Don’t count on it", "It is certain", "It is decidedly so", "Most likely", "My reply is no", "My sources say no", "Outlook good", "Outlook not so good", "Reply hazy try again", "Signs point to yes", "Very doubtful", "Without a doubt", "Yes", "Yes, definitely", "You may rely on it"};

    int oneLength = wordListOne.length;

    int rand1 = (int) (Math.random() * oneLength);

    String phase = wordListOne[rand1];

    System.out.println(phase);

  }
}
