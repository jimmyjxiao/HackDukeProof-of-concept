#pragma once
#include "book\order_book.h"
#include "book\order.h"
class watt_order : public liquibook::book::Order
{
protected:
	double x_loc;
	double y_loc;
	unsigned int num_watts;
	watt_order(float x_location, float y_locaction, unsigned int Num_Watts) : x_loc(x_location), y_loc(y_locaction), num_watts(Num_Watts)
	{}
public:
	virtual liquibook::book::Quantity order_qty() const override;
};
class buy_order : public watt_order
{
public:
	// Inherited via Order
	virtual bool is_buy() const override
	{
		return true;
	}
	virtual liquibook::book::Price price() const override
	{
		return 0;
	}
	buy_order(float x_location, float y_locaction, unsigned int Num_Watts) : watt_order(x_location, y_locaction, Num_Watts) {}
};
class sell_order : public watt_order
{
private:
	unsigned int cents;
	bool is_limit = true;
public:
	virtual bool is_buy() const override
	{
		return false;
	}
	virtual liquibook::book::Price price() const override
	{
		if (is_limit)
			return cents;
		else
			return 0;
	}
	sell_order(float x_location, float y_locaction, unsigned int Num_Watts, unsigned int price_in_cents) : watt_order(x_location, y_locaction, Num_Watts) {}
};

typedef liquibook::book::OrderBook<std::shared_ptr<watt_order>> EnergyBook;
void main();