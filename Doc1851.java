import java.util.Scanner;
import java.lang.Math;

public class Doc1851 {
	public static boolean isNarcissin(int n) 
	{
		int ge = n % 10;
		int shi = n / 10 % 10;
		int bai = n / 100;
		if(Math.pow(ge, 3) + Math.pow(shi, 3) + Math.pow(bai, 3) == n)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int m, n;
		boolean flag;
		while(in.hasNext())
		{
			m = in.nextInt();
			n = in.nextInt();
			flag = false;
			for(int i = m; i < n; i++)
			{
				if(isNarcissin(i))
				{
					System.out.print(i + " ");
					flag = true;
				}
			}
			if(flag == false)
			{
				System.out.println("no");
			}
		}
		in.close();
	}
}
