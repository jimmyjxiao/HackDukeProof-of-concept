//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace SmartDevice
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
	private:
		static Windows::Devices::Gpio::GpioController^ gpio;
		static std::array<Windows::Devices::Gpio::GpioPin^,10> pins;
	};
}
