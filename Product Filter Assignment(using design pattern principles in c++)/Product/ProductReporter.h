#pragma once
#include "Product.h"

#include <vector>
#include <iostream>
using namespace std;

//follows Single Responsibility Principle
class ProductReporter
{
public:
	void report_product(Product p)
		{ cout<<p.name<<": "<<p.color<<", "<<p.weight<<endl; }
	void report_all(vector<Product> products)
	{
		for(int i=0; i<products.size(); i++)
			report_product(products[i]);
	}
};
