// import java.io.*;
// import java.util.*;

// class arraylist{
// 	public static void main(String[] args)
// 	{
//         Scanner sc = new Scanner(System.in);
//         int n=sc.nextInt();
// 		ArrayList<Integer> arraylist
// 			= new ArrayList<Integer>(n);
// 		for (int i = 1; i <= n; i++)
// 			arraylist.add(i);
// 		System.out.println(arraylist);

// 		arraylist.remove(3);
// 		System.out.println(arraylist);
//     }

// }

import java.util.ArrayList;
 
public class arraylist {
   public static void main(String args[]){
      ArrayList<String> strList = new ArrayList<String>();
      strList.add("Data");
      strList.add("Structure");
      strList.add("And");
      strList.add("Algorithm");
      strList.remove(3);
      System.out.println("The ArrayList: " + strList);
      StringBuffer strings = new StringBuffer();
      for (String str : strList) {
         strings.append(str + " ");
      }
      String myStr = strings.toString();
      System.out.println("\nString from ArrayList: " + myStr);
   }
}
