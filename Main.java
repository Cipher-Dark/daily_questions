import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        switch (Integer.compare(num, 0)){
            case 1:
                System.out.println("positive number");
                break;
            case -1:
                System.out.println("Negative number");
            default:
                System.out.println("Zero");
        }
        }
    }

