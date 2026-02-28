import java.util.*;

class Assignment64_3
{
    public static void main(String A[])
    {

        int ino1 = 0, ino2 = 0, ino3 = 0, ino4 = 0;
        int iresult1 = 0, iresult2= 0, iresult3 = 0, iresult4 = 0;
        int imask1 = 0, imask2 = 0, imask3 = 0, imask4 = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number1 : ");
        ino1 = sobj.nextInt();

        System.out.println("Enter the number2 : ");
        ino2 = sobj.nextInt();

        System.out.println("Enter the number3 : ");
        ino3 = sobj.nextInt();

        System.out.println("Enter the number4 : ");
        ino4 = sobj.nextInt();

        

        imask1 = 0x00000010;
        imask2 = 0x00020000;
        imask3 = 0x00100000;
        imask4 = 0x08000000;

        iresult1 = ino1 & imask1;
        iresult2 = ino2 & imask2;
        iresult3 = ino3 & imask3;
        iresult4 = ino4 & imask4;

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

        if(iresult3 == imask3)
        {
            System.out.println("21th bit is ON");
        }
        else
        {
            System.out.println("21th bit is OFF");
        }
                
        if(iresult4 == imask4)
        {
            System.out.println("28th bit is ON");
        }
        else
        {
            System.out.println("28th bit is OFF");
        }
        
        sobj.close();
    }
}