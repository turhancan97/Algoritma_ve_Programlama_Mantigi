
public class Veri_Tipleri {

	public static void main(String[] args) 
	{
		byte kucukTamSayi= 30; //1byte yer kaplar, -128 ve 127 arasý sayýlar
		
		char harf = 'B'; //2 byte yer kaplar. 1 haflik karakte taþýmamýza yardýmcý olur.
		char harf2 = 85;
		
		short kisaTamSayi = 102; //2 byte yer kaplar. -32768 ile 32767 arasý
		
		int TamSayi = 2013; //4 byte yer kaplar, Orta dereceli sayýlarý tutar.
		
		long uzunTamSayi = 2000000000; // 8 byte yer kaplar.
		
		float normalKullaným = 4745.96F; // ondalýk 4byte , sonuna F kullanýlmak zorunluluktur
		float bilimselKullaým = 47E4F; 
		
		double normal = 960.7744485102; //8btye ondalýk
		double bilimsel = 96E41;
		
		String karakterKatari = "Java'da String kullanýmý"; // 8byte yer kaplar.
		
		boolean yanlisKarar = false ; // 1byte yer kaplar.
		boolean karar1=(10>4);
		
	}

}
