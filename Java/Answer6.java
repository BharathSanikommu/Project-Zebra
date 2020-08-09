class Answer6 {
    public static void main(String[] args) {
        int target = 232865;
        int sum = 0;
        while (target > 0) {
            int code = target % 10;
            target = target / 10;
            sum +=code;
        }
        System.out.println("The sum of digits is : "+sum);
    }
}