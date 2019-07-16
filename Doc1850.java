import java.util.Scanner;

public class Doc1850 {
	public static boolean isLeap(int year) 
	{
		if(year % 4 != 0) 
		{
			return false;
		}
		else
		{
			if(year % 400 == 0)
			{
				return true;
			}
			else if(year % 100 != 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int [] days1 = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int [] days2 = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		while(in.hasNext())
		{
			String t = in.next();
			String [] str = t.split("\\/");
			int year = Integer.parseInt(str[0]);
			int month = Integer.parseInt(str[1]);
			int day = Integer.parseInt(str[2]);
			if(isLeap(year))
			{
				for(int i = 0; i < month - 1; i++)
				{
					day += days2[i];
				}
			}
			else
			{
				for(int i = 0; i < month - 1; i++)
				{
					day += days1[i];
				}
			}
			System.out.println(day);
		}
		in.close();
	}
}
