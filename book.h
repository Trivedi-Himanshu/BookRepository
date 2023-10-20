#include<iostream>
#include<string.h>
using namespace std;
class Book{
	private:
		int id;
		string bname;
		double price;
	public:
		Book(){};
		
		Book(int id,string bname, double price){};
		
		double calcTotalPrice(int qty){};
};
