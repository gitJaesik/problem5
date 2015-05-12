#pragma once

// 문제 내용
// Create class called Sale

class Sale
{
// has price (type duoble, private)
private:
	double Price;

public:
	Sale();
	Sale(double ThePrice);
	~Sale();
	double GetPrice();
	virtual double Bill();
	double Savings(Sale& Other);
	bool operator<(Sale& Other);
};

