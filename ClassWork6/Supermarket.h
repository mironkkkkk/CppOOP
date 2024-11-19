#pragma once
#include <iostream>
#include "Customer.h"
#include "Product.h"

using namespace std;

class Supermarket
{
private:
	Customer* arrCustomer;
	Product* arrProduct;
public:
	Supermarket();
	~Supermarket();
};

