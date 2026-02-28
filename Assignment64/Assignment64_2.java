import java.util.*;

class Assignment64_2
{
    public static void main(String A[])
    {
        int imask1 = 0, iresult1 = 0, imask2 = 0, iresult2 = 0;
        int no1 = 0, no2 = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number1 : ");
        no1 = sobj.nextInt();

        System.out.println("Enter the number2 : ");
        no2 = sobj.nextInt();

        imask1 = 0x00000010;
        imask2 = 0x00020000;

        iresult1 = no1 & imask1;
        iresult2 = no2 & imask2;

        if(iresult1 == imask1)
        {
            System.out.println("5th bit is ON");
        }
        else
        {
            System.out.println("5th bit is OFF");
        }
                
        if(iresult2 == imask2)
        {
            System.out.println("18th bit is ON");
        }
        else
        {
            System.out.println("18th bit is OFF");
        }

        sobj.close();
    }
}
