public class phaseOMatic {
  public static void main(String[] args) {
    String[] wordListOne = {"24/7", "multi-Tier", "30,000 foot", "B-to-B", "win-win", "front-end", "web-base", "pervasive", "smart", "six-sigma", "critical-path", "dynamic"};
    String[] wordListtwo = {"empowered", "sticky", "value-added", "oriented", "centric", "distributed", "clustered", "branded", "outside-the-box", "positioned", "networked", "focused", "leveraged", "aligned", "targeted", "shared", "cooperative", "accelerated"};
    String[] wordListthree = {"process", "tipping", "point", "solution", "architecture", "core competency", "strategy", "mindshare", "portal", "space", "vision", "paradigm", "mission"};

    int oneLength = wordListOne.length;
    int twoLength = wordListtwo.length;
    int threelength = wordListthree.length;

    int rand1 = (int) (Math.random() * oneLength);
    int rand2 = (int) (Math.random() * twoLength);
    int rand3 = (int) (Math.random() * threelength);

    String phase = wordListOne[rand1] + " " + wordListtwo[rand2] + " " + wordListthree[rand3];

    System.out.println("What we need is a " + phase);
  }
}
