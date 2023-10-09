#ifndef PRODUCT_H
#define PRODUCT_H
#include<string>
using namespace std;
class Product
{
	public:
		int product_id;
		string title;
		string description;
		double price;
	public:
		Product(int product_id,string title,string description,double price);
		void display();
};
#endif
