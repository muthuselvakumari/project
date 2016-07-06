import java.util.*;
import java.lang.*;
import java.io.*;
class Program2
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in=new Scanner(System.in);
		String s=in.nextLine();
		StringTokenizer t=new StringTokenizer(s," ");
		System.out.println(t.countTokens());
	}
}
