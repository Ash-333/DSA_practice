import java.util.Scanner;
class B{
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.println("Input number ");
        int in =sc.nextInt();

        for (int i=1;i<=3;i++) {
            for(int j=1;j<=i;j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}