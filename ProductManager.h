#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include "Product.h"

class ProductManager : public Product
{
	public:
		ProductManager();
		void insert_product();
		void display_product();
		
};

#endif
