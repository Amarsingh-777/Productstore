#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(int product_id,string title,string description,double price)
{
	this->product_id=product_id;
	this->title=title;
	this->description=description;
	this->price=price;
}
void Product::display(){
	cout<<"Product Id: "<<product_id<<endl;
	cout<<"Product Name: "<<title<<endl;
	cout<<"Product Description: "<<description<<endl;
	cout<<"Product Price: "<<price<<endl;
	
}
