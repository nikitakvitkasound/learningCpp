// cmd app :: Simple Calculator
// Can do +, -, *, /, ^ and root.
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/LearningCpp)


#include <iostream>
#include <string>
#include <cmath>

void ErrorInputMsg() {
	std::cout << "Please, use only 'a <symbol> b' input format!\n";
	std::cin.clear();
	std::cin.ignore(100000, '\n');
}


int main() {

	const std::string kSymbolCollection = "+-/*^<";
	std::string symbol = "+";
	std::size_t symbol_type = 0;

	double argument_01 = 0.0;
	double argument_02 = 0.0;

	do {
		std::cout << "Type any numbers in format: a + b (or any other symbol: -, /, *, ^, < (Root: 2 < 4 = 2))\n";
		if (!(std::cin >> argument_01 >> symbol >> argument_02)) {
			ErrorInputMsg();
			continue;
		}

		symbol_type = kSymbolCollection.find(symbol);
		if (symbol_type == std::string::npos) {
			ErrorInputMsg();
			continue;
		}

		break;
	} while (true);

	switch (symbol_type) {
	case 0:
		std::cout << argument_01 << " + " << argument_02 << " = " << argument_01 + argument_02 << '\n';
		break;
	case 1:
		std::cout << argument_01 << " - " << argument_02 << " = " << argument_01 - argument_02 << '\n';
		break;
	case 2:
		std::cout << argument_01 << " / " << argument_02 << " = " << argument_01 / argument_02 << '\n';
		break;
	case 3:
		std::cout << argument_01 << " * " << argument_02 << " = " << argument_01 * argument_02 << '\n';
		break;
	case 4:
		std::cout << argument_01 << " ^ " << argument_02 << " = " << pow(argument_01, argument_02) << '\n';
		break;
	case 5:
		std::cout << argument_01 << " < " << argument_02 << " = " << pow(argument_02, (1 / argument_01)) << '\n';   // pow(a, 1/b) == b root a
		break;
	default:
		std::cout << "Oops! Something went wrong, sorry!" << '\n';
	}

	system("pause");

	return 0;
}
