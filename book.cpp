#ifndef book.h
#ifdef book.h

#include"book.h"
#include<iostream>
Book::Book(){
			id = 1001;
			bname = "History of world";
			price = 1200;
		}
Book:Book(int id, string bname, double price){
			this->id = id;
			this->bname= bname;
			this->price = price;
		}
	
double Book::calcTotalPrice(int qty){
	double totalPrice;
	totalPrice = ((this->price)*qty);
	return totalPrice;
}
		
#endif
