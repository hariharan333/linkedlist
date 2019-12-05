/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication18;
    import java.io.*;
import java.util.*;

import java.util.Scanner;
public class JavaApplication18 {

  public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
            int n = scan.nextInt();
            List<Integer>l = new ArrayList<Integer>(); 
            for(int i=0;i<n;i++)
            {
                l.add(scan.nextInt());
            }
            int t = scan.nextInt();
            for(int i=0;i<t;i++)
            {
                String result = scan.next();
                if(result.equals("Insert"))
                {
                    int y = scan.nextInt();
                     int x = scan.nextInt();
                    l.add(y, x);
                }
                if(result.equals("Delet"))
                {
                     int x = scan.nextInt();
                    l.remove(x);
                }
            }
            for(int s:l)
            {
                System.out.println(s);
            }
           
    }
}

