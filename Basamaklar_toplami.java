import java.util.Scanner;
public class Basamaklar_toplami {

	public static void main(String[] args) {
		Scanner scn = new Scanner (System.in);
		int sayi, toplam=0;
		System.out.print("Bir Sayý Giriniz  : ");
		sayi = scn.nextInt();
		
		while(sayi!=0)
		{
			toplam+=sayi%10;
			sayi/=10;
		}
		
		System.out.print("Toplam  : "+toplam);
	}

}
