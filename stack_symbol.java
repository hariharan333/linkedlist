import java.util.*;
class Solution{
	
	public static void main(String []argh)
	{
        Scanner scan = new Scanner(System.in);
       while(scan.hasNext())
       {
            int pair=0;
       String str = scan.next();
       char arr[] =new char[str.length()];
       Stack s = new Stack();int c=0;
       for(int i=0;i<str.length();i++)
       {
           if((str.charAt(i)=='{') || (str.charAt(i)=='[') ||(str.charAt(i)=='('))
           {
                 s.push(str.charAt(i));
           }
           else   
           {
               arr[c++]=str.charAt(i);   
           }
       }
      
       while(!(s.empty()))
       {
           char x = (char) s.pop();
           for(int i=0;i<c;i++)
           { 
           if(x=='[')
           {
               if(arr[i]==']')
               {
                   
                   pair+=1;
                    arr[i]=0;
                   break;
               }
           }
           if(x=='{')
           {
               if(arr[i]=='}')
               {
                   pair+=1;
                   arr[i]=0;
                   break;
               }
           }
           if(x=='(')
           {
               if(arr[i]==')')
               {
                   pair+=1;
                   arr[i]=0;
                   break;
               }
           }}
       }
       if(str.length()/2==pair&& str.length()%2==0)
       {
           System.out.println("true");
       }
       
        else
       {
           System.out.println("false");
       }
     s.removeAllElements();
   }
}
}




