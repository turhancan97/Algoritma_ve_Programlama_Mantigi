import java.util.Scanner;
public class Fonksiyonlar 
{
	public static void main(String[] args)
	{
		int a,b;
		Scanner scn = new Scanner(System.in);
		
		System.out.println("1.sayi : ");
		a = scn.nextInt();
		
		System.out.println("2.sayi : ");
		b = scn.nextInt();
		
		int sonuc = Topla (a,b);
		System.out.println("Toplam : " +sonuc);

	}
	
	public static int Topla (int sayi1,int sayi2)
	{
		int sonuc = sayi1 + sayi2;
		return sonuc;
	}

}
