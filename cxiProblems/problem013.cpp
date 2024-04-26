// CXI Problems :: 13 :: C++ program that converts between Celsius and Fahrenheit temperatures based on user input. You can also add conversions for Kelvin.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <iomanip>
#include <cmath>

static double TwoDecimalRounding(const double& a);
static void GetInputAndValidate(double& a , char& ch);

int main()
{
    const double kFahrenCoeff = 32.0;
	const double kFactor = 1.8000;
	const double kKelvinCoeff = 273.15;
	const int kWidth = 10;

	double temperature = 0;
	char scale;
    GetInputAndValidate(temperature, scale);

	double f = 0.0;
	double c = 0.0;
	double k = 0.0;

	switch (scale){
	case 'F':   // Fahrenheit to Celcius and Kelvin
		f = temperature;
		c = (f - kFahrenCoeff) / kFactor;
		k = c + kKelvinCoeff;

		std::cout << TwoDecimalRounding(f) << "F" << std::setw(kWidth)
                    << TwoDecimalRounding(c) << "C" << std::setw(kWidth)
			        << TwoDecimalRounding(k) << "K\n";
		break;

	case 'C':   // Celcius to Fahrenheit and Kelvin
		c = temperature;
		f = (c * kFactor) + kFahrenCoeff;
		k = c + kKelvinCoeff;

		std::cout << TwoDecimalRounding(c) << "C" << std::setw(kWidth)
                    << TwoDecimalRounding(f) << "F" << std::setw(kWidth)
                    << TwoDecimalRounding(k) << "K\n";
		break;

	case 'K':   // Kelvin to Celcius and Fahrenheit
		k = temperature;
		c = k - kKelvinCoeff;
		f = (c * kFactor) + kFahrenCoeff;

		std::cout << TwoDecimalRounding(k) << "K" << std::setw(kWidth)
                    << TwoDecimalRounding(c) << "C" << std::setw(kWidth)
                    << TwoDecimalRounding(f) << "F\n";
		break;

	default:
		std::cout << "Something went wrong, check implementation\n";
	}
	

	system("pause");
	return 0;
}


/* - - - - - - Declaration - - - - - */

static double TwoDecimalRounding(const double& a){
	return round(a * 100) / 100;  // Round 0.23451 to 0.23
}

static void GetInputAndValidate(double& a, char& ch){
	do{
		std::cout << "Type only numbers and scale (F, C or K), i.e. 32F or 54C or 534K\n";

		if (!(std::cin >> a >> ch)){
			std::cin.clear();
			std::cin.ignore(1000000, '\n');
			continue;
		}
		a = TwoDecimalRounding(a);
		
        ch = static_cast<char>(toupper(ch));
		if (ch != 'F' && ch != 'C' && ch != 'K'){
			std::cin.clear();
			std::cin.ignore(1000000, '\n');
			continue;
		}
		break;

	}while(true);
}
