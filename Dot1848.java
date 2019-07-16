import java.util.Scanner;
import java.lang.Math;

public class Dot1848 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while(in.hasNext())
		{
			double n = Double.valueOf(in.next());
			System.out.printf("%.2f\n", Math.abs(n));
		}
		in.close();
	}
}
