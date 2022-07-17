/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	   Scanner sc = new Scanner(System.in);
	   int t=sc.nextInt();
	   while(t-->0){
	      int n=sc.nextInt();
	      String s=sc.next();
	      int a=0,b=0;
	      for(int i=0;i<n;i++){
	         if(s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' || s.charAt(i)=='u'){
	            a=0;
	         }
	         else{
	            a++;
	         }
	         if(a>=4){
	            System.out.println("NO");
	            b=1;
	            break;
	         }
	      }
	      if(b!=1){
	         System.out.println("YES");
	      }
	   }
		// your code goes here
	}
}
