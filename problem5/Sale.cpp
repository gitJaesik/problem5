#include "Sale.h"


Sale::Sale()
{
	m_dPrice = 0.0;
}

Sale::Sale(double ThePrice)
{
	m_dPrice = ThePrice;
}

Sale::~Sale()
{
}


double Sale::Bill()
{
	return 0;
}
