
public class Veri_Tipleri {

	public static void main(String[] args) 
	{
		byte kucukTamSayi= 30; //1byte yer kaplar, -128 ve 127 aras� say�lar
		
		char harf = 'B'; //2 byte yer kaplar. 1 haflik karakte ta��mam�za yard�mc� olur.
		char harf2 = 85;
		
		short kisaTamSayi = 102; //2 byte yer kaplar. -32768 ile 32767 aras�
		
		int TamSayi = 2013; //4 byte yer kaplar, Orta dereceli say�lar� tutar.
		
		long uzunTamSayi = 2000000000; // 8 byte yer kaplar.
		
		float normalKullan�m = 4745.96F; // ondal�k 4byte , sonuna F kullan�lmak zorunluluktur
		float bilimselKulla�m = 47E4F; 
		
		double normal = 960.7744485102; //8btye ondal�k
		double bilimsel = 96E41;
		
		String karakterKatari = "Java'da String kullan�m�"; // 8byte yer kaplar.
		
		boolean yanlisKarar = false ; // 1byte yer kaplar.
		boolean karar1=(10>4);
		
	}

}
