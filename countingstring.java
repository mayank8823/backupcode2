// Java program to output the maximum occurring character
import java.util.*;
public class countingstring
{
	static final int ASCII_SIZE = 256;
	static char sol(String str)
	{
		int count[] = new int[ASCII_SIZE];
		int len = str.length();
		for (int i=0; i<len; i++)
			count[str.charAt(i)]++;
		int max = -1; 
		char result = ' '; 
		for (int i = 0; i < len; i++) {
			if (max < count[str.charAt(i)]) {
				max = count[str.charAt(i)];
				result = str.charAt(i);
			}}
		return result;}
	public static void main(String[] args){
		Scanner sc= new Scanner(System.in);
        System.out.print("Enter a string: ");  
        String str= sc.nextLine();   
        System.out.println("You have entered: "+ str);
		System.out.println("Max occurring character is " + sol(str));
	}}
