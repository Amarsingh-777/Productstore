#include "ProductManager.h"
#include<iostream>

ProductManager::ProductManager()
{

}
void ProductManager::insert_product(){
    cout<<"Enter Product ID"<<endl;
    cin>>product_id;
    cout<<"Enter Product Name"<<endl;
    cin>>title;
    cout<<"Enter Product Description"<<endl;
    cin>>description;
    cout<<"Enter Product Price"<<endl;
    cin>>price;
    

}

void ProductManager::display_product(){
    cout<<"Product Id: "<<product_id<<endl;
	cout<<"Product Name: "<<title<<endl;
	cout<<"Product Description: "<<description<<endl;
	cout<<"Product Price: "<<price<<endl;

}
