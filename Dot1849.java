import java.util.Scanner;

public class Dot1849 {
	public static boolean isNumeric(String str) 
	{
		if(str == null)
		{
			return false;
		}
		int sz = str.length();
		for(int i = 0; i < sz; i++) 
		{
			if(Character.isDigit(str.charAt(i)) == false)
			{
				return false;
			}
		}
		return true;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		while(in.hasNext())
		{
			String t = in.next();
			if(!isNumeric(t))
			{
				System.out.println("Score is error!");
				continue;
			}
			int num = Integer.valueOf(t);
			char grade;
			if(num < 60 && num >= 0)
			{
				grade = 'E';
			}
			else if(num >= 60 && num < 70)
			{
				grade = 'D';
			}
			else if(num >= 70 && num < 80)
			{
				grade = 'C';
			}
			else if(num >= 80 && num < 90)
			{
				grade = 'B';
			}
			else if(num >= 90 && num <= 100)
			{
				grade = 'A';
			}
			else
			{
				System.out.println("Score is error!");
				continue;
			}
			System.out.println(grade);
		}
		in.close();
	}
}
