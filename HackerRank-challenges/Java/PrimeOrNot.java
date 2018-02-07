import java.util.*;
public class PrimeOrNot {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int number;
		int divisible=2; 
		Scanner scanner= new Scanner(System.in);
		number = scanner.nextInt();

		for(int i=2; i<number; i++){
			if(number%i==0)
				divisible+=1;
		}
		if(divisible==2)
			System.out.println("Prime");
		else
			System.out.println("Not Prime");
	}

}
