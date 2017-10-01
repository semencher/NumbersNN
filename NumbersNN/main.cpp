#include <iostream>

#include "Network.h"

std::vector<std::vector<int>> getInputs() 
{
	std::vector<std::vector<int>> result;
	std::vector<int> resultI;

	// ����� 1.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 2.
	{
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 3.
	{
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 4.
	{
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 5.
	{
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 6.
	{
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 7.
	{
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 8.
	{
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 9.
	{
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 0.
	{
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	return result;
}

std::vector<std::vector<int>> getOutputs()
{
	std::vector<std::vector<int>> result;
	std::vector<int> resultI;

	// ����� 1.
	{
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 2.
	{
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 3.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 4.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 5.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 6.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 7.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 8.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 9.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
		resultI.push_back(0);
	}
	result.push_back(resultI);
	resultI.clear();

	// ����� 0.
	{
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(0);
		resultI.push_back(1);
	}
	result.push_back(resultI);
	resultI.clear();

	return result;	
}

void out(const std::vector<int> &inputs)
{
	auto iter = inputs.begin();
	auto end = inputs.end();
	std::cout << *iter;
	++iter;
	for (; iter != end; ++iter) {
		std::cout << " " << *iter;
	}
}

int main()
{
	std::vector<std::vector<int>> inputs = getInputs();
	std::vector<std::vector<int>> outputs = getOutputs();

	Network network;
	for (size_t i = 0; i < 3; ++i) {
		auto iter = inputs.begin();
		auto end = inputs.end();
		auto iterOut = outputs.begin();
		for (; iter != end; ++iter) {
			network.educate(*iter, *iterOut);
			++iterOut;
		}
	}
	out(network.run(inputs[0]));
	std::cout << "\n";
	out(network.run(inputs[1]));
	std::cout << "\n";
	out(network.run(inputs[2]));
	std::cout << "\n";
	out(network.run(inputs[3]));
	std::cout << "\n";
	out(network.run(inputs[4]));
	std::cout << "\n";
	out(network.run(inputs[5]));
	std::cout << "\n";
	out(network.run(inputs[6]));
	std::cout << "\n";
	out(network.run(inputs[7]));
	std::cout << "\n";
	out(network.run(inputs[8]));
	std::cout << "\n";
	out(network.run(inputs[9]));
	std::cout << "\n";
}