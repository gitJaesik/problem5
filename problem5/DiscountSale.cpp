#include "DiscountSale.h"


DiscountSale::DiscountSale()
{
}


DiscountSale::~DiscountSale()
{
}

// Bill function which calculates the discount price using the GetPrice function in Sales class
double DiscountSale::Bill()
{
	// �� ���� * ���� Percent = discount price
	return this->GetPrice * this->DiscountPercent;
}