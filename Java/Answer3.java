class  Answer3 {
    public static void main(String[] args) {
        String strTarget = "racecar";
        String revStrTarget = "";
        int intTarget = 123321;
        int revIntTarget = 0;
        int tempVal = intTarget;
        int remainder = 0;
        
        for(int i=strTarget.length()-1;i>=0;i--) {
            revStrTarget += strTarget.charAt(i);
        }
        if (strTarget.equals(revStrTarget)) {
            System.out.println("The String is a Palindrome.");
        } else {
            System.out.println("The String is a not a Palindrome.");
        }

        while(tempVal>0) {
            remainder = tempVal % 10;
            revIntTarget = (revIntTarget*10)+ remainder;
            tempVal = tempVal / 10;
        }
        if (intTarget == revIntTarget) {
            System.out.println("The Integer is a Palindrome.");
        } else {
            System.out.println("The Integer is a not a Palindrome.");
        }
    }
}