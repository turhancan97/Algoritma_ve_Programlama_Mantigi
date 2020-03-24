import java.util.Scanner;
public class odd_or_even 
{

	public static void main(String[] args) 
	{
		Scanner scn = new Scanner (System.in);
		System.out.print("Bir Sayý Giriniz : ");
		int s = scn.nextInt();
		
		if(s % 2 ==0)
			
		{
			System.out.println("Girilen Sayý bir Çift Sayýdýr! ");
		}
		else
		{
			System.out.println("Girilen Sayý bir Tek Sayýdýr! ");
		}

	}
}
