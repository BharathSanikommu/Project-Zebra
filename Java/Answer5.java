class  Answer5 {
    public static void main(String[] args) {
        int c = 0,a, temp;
        int n=153;
        temp = n;
        System.out.print(n+" is ");
        while (n>0) {
            a = n%10;
            n = n/10;
            c = c+(a*a*a);
        }
        if(temp == c){
            System.out.println("an arm strong number");
        } else {
            System.out.println("not an armstrong number");
        }

    }
}