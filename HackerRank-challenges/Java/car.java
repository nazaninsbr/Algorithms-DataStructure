import java.util.*;
public class car {
	//instance variables 
	String make;
	String model; 
	int year; 
	boolean isNew;
	double miles; 
	String owner;


	public void sell(String newOwner){
		owner = newOwner;
		if(isNew){
			isNew = false;
		}
	}

	public boolean isOld(){
		int thisYear = Calendar.getInstance().get(Calendar.YEAR);
		if(thisYear - year >10)
			return true;
		else 
			return false;
	}

	public static void main(String[] args) {
		car myCar = new car();
		myCar.make = "BMW";
		myCar.model = "X6";
		myCar.year = 2017;
		myCar.isNew = true;
		myCar.miles = 0.0;
		myCar.owner = "Nazanin";
		boolean answer = myCar.isOld();
		myCar.sell("Jane Rizzoli");
		System.out.println(answer);
		System.out.println(myCar.owner);
	}

}
