import java.util.*;

class Assignment64_1
{
    public static void main(String A[])
    {
        int imask = 0, iresult = 0;
        int no = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number : ");
        no = sobj.nextInt();

        imask = 0x00004000;

        iresult = no & imask;

        if(iresult == imask)
        {
            System.out.println("15th bit is ON");
        }
        else
        {
            System.out.println("15th bit is OFF");
        }

        sobj.close();
    }
}
