import java.util.*;

class Assignment64_4
{
    public static void main(String A[])
    {
        int imask = 0, iresult = 0;
        int no = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number : ");
        no = sobj.nextInt();

        imask = 0x000001c0;

        iresult = no & imask;

        if(iresult == imask)
        {
            System.out.println("7 , 8, 9th bit is ON");
        }
        else
        {
            System.out.println("7 , 8, 9th bit is OFF");
        }

        sobj.close();
    }
}
