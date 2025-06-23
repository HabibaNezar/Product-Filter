#pragma once

#include <iostream>
using namespace std;

class Product
{
public:
	string name;
	char color;
	float weight;
	Product(string n,char c,float w)
		{ name=n; color=c; weight=w; }

	//violates Single Responsibility Principle
	void report_product_info()
		{ cout<<name<<": "<<color<<", "<<weight<<endl; }

};
