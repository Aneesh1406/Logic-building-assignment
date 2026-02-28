import java.util.*;

class Assignment64_5
{
    public static void main(String A[])
    {
        int imask1 = 0, iresult1 = 0, imask2 = 0, iresult2 = 0;
        int no = 0, no2 = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number : ");
        no = sobj.nextInt();

        System.out.println("Enter the number 2 : ");
        no2 = sobj.nextInt();

        imask1 = 0x00000001;
        imask2 = 0x80000000;

        iresult1 = no & imask1;
        iresult2 = no2 & imask2;


        if(iresult1 <= imask1)
        {
            System.out.println("1st bit is ON");
        }

        if(iresult2 <= imask2)
        {
            System.out.println("32th bit is ON");
        }


        sobj.close();
    }
}
