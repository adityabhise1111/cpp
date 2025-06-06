public class half {
    public static void main(String[] args) {
        // Your code goes here
        System.out.println("Hello, World!");
        for(int col=0; col<4; col++){
            for(int row=0; row<col; row++){
                System.out.print(col+" "+row);
            }
            System.out.println();
        }
    }
}