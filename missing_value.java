package javaapplication17;
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
/**
 *
 * @author hari
 */
public class JavaApplication17 {

  public static void main(String[] args) {
      int diff;
       Scanner s =new Scanner(System.in);
       int n = s.nextInt();
        int arr[];
        arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]= s.nextInt();
        }
        diff=arr[1]-arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i+1]-arr[i]!=diff)
            {
                System.out.println(arr[i]+diff);
                break;
            }
        }
    }
    
}

