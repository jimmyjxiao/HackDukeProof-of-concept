#pragma once
#include "book\order_book.h"
#include "book\order.h"
class watt_order : public liquibook::book::Order
{
public:
	
	int x_loc;
	double y_loc;
	unsigned int num_watts;
	virtual bool all_or_none() const override final
	{
		return false;
	}
	virtual bool immediate_or_cancel() const override final
	{
		return false;
	}
	virtual liquibook::book::Quantity order_qty() const override;
protected:
	
	watt_order(int x_location, int y_locaction, unsigned int Num_Watts) : x_loc(x_location), y_loc(y_locaction), num_watts(Num_Watts)
	{}

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
	buy_order(int x_location, int y_locaction, unsigned int Num_Watts) : watt_order(x_location, y_locaction, Num_Watts) {}
};
class sell_order : public watt_order
{
private:
	unsigned int cents;
public:
	virtual bool is_buy() const override
	{
		return false;
	}
	virtual liquibook::book::Price price() const override
	{
		return 10;
	}
	sell_order(int x_location, int y_locaction, unsigned int Num_Watts, unsigned int price_in_cents=0) : watt_order(x_location, y_locaction, Num_Watts), cents(price_in_cents) {}
};

typedef liquibook::book::OrderBook<std::shared_ptr<watt_order>> EnergyBook;
//void main();

std::shared_ptr<EnergyBook> StartBook();