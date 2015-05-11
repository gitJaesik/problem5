#pragma once
#include "Sale.h"

// 문제 내용
// You should create the DiscountSale class which inherits from Sale class.
class DiscountSale : public Sale
{
// It has a private vaule named DiscountPercent (type double)
private:
	double DiscountPercent;

public:
	DiscountSale();
	~DiscountSale();

	// In this class also has a Bill function which calculates the discount price using the GetPrice function in Sale class.
	double Bill() override;
};

