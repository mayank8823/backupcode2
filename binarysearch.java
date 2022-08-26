// import java.util.Random;
// import java.util.Arrays;
// import java.util.*;
// class binarysearch{  
//     public static void binarySearch(int arr[], int first, int last, int val){  
//         int mid = (first + last)/2;  
//         while( first <= last ){  
//             if ( arr[mid] < val){  
//                 first = mid + 1;     
//             }else if ( arr[mid] == val){  
//                 System.out.println("Element is found at index: " + mid);  
//                 break;  
//             }else{  
//                 last = mid - 1;  
//             }  
//         mid = (first + last)/2;  
//         }  
//     if ( first > last ){  
//       System.out.println("Element is not found!");  
//     }  
// }  
// public static void main(String args[]){
//     int min = 1000;
//     int max = 10000;
//     Random num = new Random(); 
//     int[] arr = new int[500];
//     for (int i = 0; i < arr.length; i++) {
//         arr[i] = num.nextInt((max - min) + 1) + min;
//     }
//     Arrays.sort(arr);
//     for (int j=0;j<arr.length ; j++){
//         System.out.print(arr[j] + " ");
//     }
//     Scanner sc = new Scanner(System.in);
//     int val = sc.nextInt();  
//     int last=arr.length-1;
//     long start = System.nanoTime();
//     binarySearch(arr,0,last,val);
//     long end = System.nanoTime();
//     long elapsedTime = (end - start)/1000000;
//     System.out.println("time in milisecond : " + elapsedTime);
//     } 
// }

import java.util.*;
class Employee{
    int id;
    String name;
}
class binarySearch {

	public static void main(String args[]) {
		System.out.println("Creating our own custom class");
		Employee harry=new Employee();
		harry.id=12;
		harry.name="codewithHarry";
		System.out.println(harry.id);
		System.out.println(harry.name);
	}
}