import java.util.Scanner;
public class Geometrik_Ortalama {

	public static void main(String[] args) {
		Scanner scn = new Scanner (System.in);
		double ort=1.0;
		int n=0,sayi=0;
	do {
		System.out.print("Bir Sayý Giriniz veya çýkmak için 0 giriniz : ");
		sayi = scn.nextInt();
		if (sayi !=0)
		{
			ort*=sayi;
			n++;
		}
			
	}while(sayi!=0);
		ort=Math.pow(ort, 1.0/(double)n);
		System.out.print("Geometrik Ortalama =  "+ort);
	}

}
