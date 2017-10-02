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

	const size_t numNumbers = 10;
	for (size_t number = 0; number < numNumbers; ++number) {
		for (size_t i = 0; i < numNumbers; ++i) {
			if (number == i) {
				resultI.push_back(1);
			}
			else {
				resultI.push_back(0);
			}
		}
		result.push_back(resultI);
		resultI.clear();
	}
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
	// ������ � ������� ��������.
	std::vector<int> om0s;
	om0s.push_back(5);
	om0s.push_back(11);
	om0s.push_back(11);
	om0s.push_back(9);
	om0s.push_back(11);
	om0s.push_back(12);
	om0s.push_back(7);
	om0s.push_back(13);
	om0s.push_back(12);
	om0s.push_back(12);

	std::vector<std::vector<int>> inputs = getInputs();
	std::vector<std::vector<int>> outputs = getOutputs();
	
	// �������.
	Network network(om0s, 0.99);	// ������ 0.99.
	const size_t maxIterations = 100;
	for (size_t i = 0; i < maxIterations; ++i) {
		bool ed = false;
		auto iterInputs = inputs.begin();
		auto end = inputs.end();
		auto iterOut = outputs.begin();
		for (; iterInputs != end; ++iterInputs) {
			if (network.educate(*iterInputs, *iterOut))
				ed = true;
			++iterOut;
		}
		if (!ed) {
			std::cout << "Number of iterations: " << i << ".\n";
			break;
		}
	}

	// �������.
	std::cout << "Outputs of network to numbers 1 - 9, 0: \n\n";
	const size_t numOutpust = 10;
	for (size_t i = 0; i < numOutpust; ++i) {
		out(network.run(inputs[i]));
		std::cout << "\n";
	}
	std::cout << "\n";
}