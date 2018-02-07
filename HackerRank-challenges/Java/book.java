public class book {
	//instance variables
	int numberOfPages;
	String author;
	int year;

	book(int numOfpages, int _year, String _author){
		this.numberOfPages = numOfpages;
		this.author = _author;
		this.year = _year;
	}

	public static void main(String[] args) {
		book mybook = new book(356, 2016, "Joe Hill");
	}

}
