class  Answer2 {
    public static void  main(String[] args) {
        int target = 30;
        int trigger = 0;
        for (int i = 2; i < target/2; i++){
            if (target%i == 0) {
                trigger+=1;
                break;
            }
        }
        if (trigger == 0) {
            System.out.println("The number "+ target +" is a prime number.");
        } else {
            System.out.println("The number "+ target + " is not a prime number.");
        }
    }
}