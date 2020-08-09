class Answer8 {
    public static void  main(String[] args) {
        int alpha = 235;
        int beta = 633;
        System.out.println("A : "+ alpha);
        System.out.println("B : "+ beta);
        alpha = alpha + beta;
        beta = alpha - beta;
        alpha = alpha - beta;
        System.out.println("A : "+ alpha);
        System.out.println("B : "+ beta);
    }
}