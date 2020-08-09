class  Answer1{
    public static void  main(String[] args) {
        int n = 10;
        int term1 = 0;
        int term2 = 1;
        int sum = 0;
        if (n == 1) {
            System.out.println(""+term1);
        } else if (n == 2) {
            System.out.println(""+term2);
        } else {
            for (int i =0; i < n;++i) {
                System.out.println(sum);
                sum = term1 + term2;
                term1 = term2;
                term2 = sum;
            }
        }
    }
}