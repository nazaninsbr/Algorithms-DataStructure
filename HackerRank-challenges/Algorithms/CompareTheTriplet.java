import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    static int bobScore(int a, int b) {
         if(b>a)
             return 1;
        return 0; 
   }
    static int aliceScore(int a, int b) {
         if(b<a)
             return 1;
        return 0;
   }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a0 = in.nextInt();
        int a1 = in.nextInt();
        int a2 = in.nextInt();
        int b0 = in.nextInt();
        int b1 = in.nextInt();
        int b2 = in.nextInt();
        int alice = aliceScore(a0, b0)+aliceScore(a1, b1)+aliceScore(a2, b2);
        int bob = bobScore(a2, b2) + bobScore(a0, b0)+ bobScore(a1, b1);
        System.out.println(alice+" "+bob);
    }
}

