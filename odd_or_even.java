import java.util.Scanner;
public class odd_or_even 
{

	public static void main(String[] args) 
	{
		Scanner scn = new Scanner (System.in);
		System.out.print("Bir Say� Giriniz : ");
		int s = scn.nextInt();
		
		if(s % 2 ==0)
			
		{
			System.out.println("Girilen Say� bir �ift Say�d�r! ");
		}
		else
		{
			System.out.println("Girilen Say� bir Tek Say�d�r! ");
		}

	}
}
