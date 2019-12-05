/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
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
       Scanner s =new Scanner(System.in);
       int n = s.nextInt();
        int arr[];
        arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]= s.nextInt();
        }
        int sum=1,a;
        for(int i=0;i<n;i++)
        {
            a=arr[i];
            arr[i]=1;
            for(int j=0;j<n;j++)
            {
            sum*=arr[j];
            }
             System.out.println(sum);
             sum=1;
             arr[i]=a;
        }
      
    }
    
}

