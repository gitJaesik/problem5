#include "DiscountSale.h"
#include "Sale.h"
#include <iostream>

/*
문제 내용 풀이
1. Sale class를 생성
2. Discount class를 생성
*/

using namespace std;

void main(void)
{


	// price variables
	double price1 = 0.0;
	double price2 = 0.0;

	// discount percent variable
	double discount;


	cout << "<Example" << endl << endl;
	cout << "===============================================" << endl;
	cout << "            Price Compare Program              " << endl;
	cout << "===============================================" << endl;
	cout << "insert item1 price : ";
	cin >> price1;
	cout << "$" << endl;
	cout << "insert item2 price : ";
	cin >> price2;
	cout << "$" << endl;

	// class
	Sale SaleItem1(price1);
	Sale SaleItem2(price2);

	DiscountSale DiscountSaleItem1 = SaleItem1;


	cout << "------------------------------------------------" << endl;
	cout << "Inser dis count percent : ";
	cin >> discount;
	cout << "%";
	cout << "------------------------------------------------" << endl;

}