import java.util.Scanner;
public class D�ng�_ve_Dizi 
{
   public static void main(String[] args)
   {
	Scanner scn = new Scanner(System.in);
	int [] sayilar = new int [5];
	double ortalama = 0.0;
	
	for(int i=0;i<5 ;i++)
	{
		System.out.print((i+1)  + ". say�y� giriniz : ");
		sayilar[i] = scn.nextInt();
		
	}
	
	for(int i=0; i<5 ;i++)
		
	{
		ortalama += sayilar[i];
}
	ortalama /= 5.0;
	System.out.println("Ortalama : " +ortalama);
}
}
