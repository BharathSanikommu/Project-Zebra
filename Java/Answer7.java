class Answer7 {
    public static void  main(String[] args) {
        int targetInt = 2344;
        int revTargetInt = 0;
        int remainder = 0;

        String targeStr = "lollipop";
        String revTargetStr = "";
        int lenTargetSize = targeStr.length();
        System.out.println(lenTargetSize);
        for (int i = lenTargetSize-1; i>=0; i--) {
            revTargetStr += targeStr.charAt(i);
        }
        System.out.println("Target String : "+targeStr);
        System.out.println("Reverse Integer :"+revTargetStr);

        System.out.println("Target Interger : "+targetInt);
        while(targetInt>0) {
            remainder = targetInt%10;
            revTargetInt = (revTargetInt*10)+remainder;
            targetInt = targetInt/10;
        }
        System.out.println("Reverse Integer : "+revTargetInt);

    }
}