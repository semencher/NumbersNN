#pragma once

#include <vector>

class Neuron
{
public:
	// ������� �������� �� ���� ������� �������� � ������������ ���������.
	int run(const std::vector<int> &inputs);

private:
	// 15-�� ������ ������ �����.
	std::vector<int> weight_;
	// ����� �������.
	int om0_;
};	// class Neuron