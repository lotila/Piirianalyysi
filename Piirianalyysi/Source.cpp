
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const string help = "voltage source = J(V), resistor = R(o), node = n";


std::vector<std::string> split(const std::string& s, const char delimiter, bool ignore_empty = false) {
	std::vector<std::string> result;
	std::string tmp = s;

	while (tmp.find(delimiter) != std::string::npos)
	{
		std::string new_part = tmp.substr(0, tmp.find(delimiter));
		tmp = tmp.substr(tmp.find(delimiter) + 1, tmp.size());
		if (not (ignore_empty and new_part.empty()))
		{
			result.push_back(new_part);
		}
	}
	if (not (ignore_empty and tmp.empty()))
	{
		result.push_back(tmp);
	}
	return result;
}

int main()
{
	string input;

	vector<string> components;
	while (true)
	{

		cout << "Anna piirikomponentit:" << endl;
		cin >> input;

		if (input == "o") input = "ssd,sdas,sd3r";

		if (input == "help") cout << help << endl;

		else if (input == "quit") break;


		else
		{
			components = split(input, ',');
			break;
		}
	}
	for (string component : components)
	{

		cout << component << endl;
	}

}

