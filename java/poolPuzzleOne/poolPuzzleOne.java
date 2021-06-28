public class poolPuzzleOne {
    public static void main(String[] args) {
        int x = 0;

        //variable
        while (x < 4) {
            //variable
            System.out.print("a");
            //cnstant
            if (x < 1) {
                //variable
                System.out.print(" ");
            }
            //variable
            System.out.print("n");

            //variable
            if ( x > 1) {
                //verible
                System.out.print(" oyster");
                //verible
                x = x + 2;
            }
            //constant
            if (x == 1) {
                //verible
                System.out.print("noys");
            }
            //variable
            if (x < 1) {
                //variable
                System.out.print("oise");
            }
            //constant
            System.out.println("");

            x = x + 1;
        }
    }
}
