import java.util.Scanner;

public class isnumeric {
	public static boolean Digit(String str, int n)
	{
		for (int i = 0; i < n; i++) {
			if (str.charAt(i) >= '0'
				&& str.charAt(i) <= '9') {
				return true;
			}
			else {
				return false;
			}
		}
		return false;
	}
	public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
        System.out.print("Enter a string: ");  
        String str= sc.nextLine();   
        System.out.println("You have entered: "+ str);
		int len = str.length();
		System.out.println(Digit(str, len));
	}
}
