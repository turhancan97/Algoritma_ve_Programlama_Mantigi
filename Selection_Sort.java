import java.util.Scanner;
public class Selection_Sort {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.print("Eleman Sayisi (N) Giriniz : " );
		int N = scn.nextInt();
		int [] d = new int[N];
		for (int i = 0; i<N ; i++)
		{
			
			System.out.print((i+1) + ".eleman : ");
			d[i] = scn.nextInt();
			
		}
		
		for (int i=0; i < N-1; i++)
			
		{
			for (int j = i+1; j<N ; j++)
			{
				if(d[j]< d[i])
				{
					int temp = d[j];
					d[j]=d[i];
					d[i]=temp;
				}
			}
		}
		System.out.print("\n\n------Sýralanmi Dizi-------\n\n" );
		for (int i=0; i<N ; i++)
		{
			System.out.print("\t" +d[i]);
		}
	}
}
