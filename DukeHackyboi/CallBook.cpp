#include "pch.h"
//#include "server_HTTP.hpp"

#include "book\order_book.h"
#include "CallBook.h"

//#include <boost/property_tree/json_parser.hpp>
//#include <boost/property_tree/ptree.hpp>
#include <iostream>
using namespace liquibook;
using namespace book;
//using namespace boost::property_tree;
using namespace std;




liquibook::book::Quantity watt_order::order_qty() const
{
	return num_watts;
}

void main()
{
	std::string z;
	cin>>z;
}
std::shared_ptr<EnergyBook> StartBook()
{
	auto book = std::make_shared<EnergyBook>();
	//SimpleWeb::Server<SimpleWeb::HTTP> server;
	//server.resource["^/newbuy$"]["POST"] = [book](std::shared_ptr<SimpleWeb::Server<SimpleWeb::HTTP>::Response> response, std::shared_ptr < SimpleWeb::Server<SimpleWeb::HTTP>::Request> request) {

	//	try {
	//		//ptree pt;

	//		//read_json(request->content, pt);


	//		//book->add(std::make_shared<buy_order>(pt.get<double>("x_loc"), pt.get<double>("y_loc"), pt.get<unsigned int>("watts")));

	//		*response << "HTTP/1.1 200 OK\r\n";

	//	}

	//	catch (const std::exception &e) {

	//		*response << "HTTP/1.1 400 Bad Request\r\nContent-Length: " << strlen(e.what()) << "\r\n\r\n"

	//			<< e.what();

	//	}
	//};
	//server.resource["^/newsell$"]["POST"] = [book](std::shared_ptr<SimpleWeb::Server<SimpleWeb::HTTP>::Response> response, std::shared_ptr < SimpleWeb::Server<SimpleWeb::HTTP>::Request> request) {

	//	try {
	//		//ptree pt;

	//		//read_json(request->content, pt);

	//		//book->add(std::make_shared<sell_order>(pt.get<unsigned int>("price"), pt.get<double>("x_loc"), pt.get<double>("y_loc"), pt.get<unsigned int>("watts")));




	//		*response << "HTTP/1.1 200 OK\r\n";

	//	}

	//	catch (const std::exception &e) {

	//		*response << "HTTP/1.1 400 Bad Request\r\nContent-Length: " << strlen(e.what()) << "\r\n\r\n"

	//			<< e.what();

	//	}
	//};
	//std::thread t1([&server]() {server.start(); });
	return book;
}
