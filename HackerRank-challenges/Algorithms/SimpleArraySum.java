import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n; 
        int sum;
        int x;
        n = in.nextInt();
        sum = 0;
        for(int i=0; i<n; i++){
            x = in.nextInt();
            sum = sum + x;
        }
        System.out.println(sum);
    }
}