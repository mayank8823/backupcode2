// import java.util.Arrays;  
// import java.util.*;
// public class anagram {  
//     static void isAnagram(String str1, String str2) {  
//         String s1 = str1.replaceAll("\\s", "");  
//         String s2 = str2.replaceAll("\\s", "");  
//         boolean status = true;  
//         if (s1.length() != s2.length()) {  
//             status = false;  } else {  
//             char[] ArrayS1 = s1.toLowerCase().toCharArray();  
//             char[] ArrayS2 = s2.toLowerCase().toCharArray();  
//             Arrays.sort(ArrayS1);  
//             Arrays.sort(ArrayS2);  
//             status = Arrays.equals(ArrayS1, ArrayS2);  }  
//         if (status) {  
//             System.out.println(s1 + " and " + s2 + " are anagrams");  
//         } else {  
//             System.out.println(s1 + " and " + s2 + " are not anagrams");  
//         }  }  public static void main(String[] args) {  
//         Scanner sc= new Scanner(System.in);
//         System.out.print("Enter a string: ");  
//         String str= sc.nextLine();   
//         System.out.println("You have entered: "+ str);
//         Scanner sc1= new Scanner(System.in);
//         System.out.print("Enter a string: ");  
//         String str1= sc1.nextLine();   
//         System.out.println("You have entered: "+ str1);
//         isAnagram("str", "str1"); }  }  

import java.util.*;
public class anagram{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Set<String> h = new HashSet<String>();
        System.out.println(h);
    }
}