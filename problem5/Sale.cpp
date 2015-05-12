#include "Sale.h"


Sale::Sale()
{
	Price = 0.0;
}

Sale::Sale(double ThePrice)
{
	Price = ThePrice;
}

Sale::~Sale()
{
}


double Sale::Bill()
{
	return 0;
}

double Sale::GetPrice()
{
	return Price;
}
double Sale::Savings(Sale& Other)
{
	// 상대 가격과의 차이 구하기
	return this->GetPrice() - Other.GetPrice();
}
bool Sale::operator<(Sale& Other)
{
	return this->GetPrice() < Other.GetPrice();
}
