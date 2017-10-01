#pragma once

#include <vector>

#include "Neuron.h"

class Network
{
public:
	Network();
	/*
	����� ��������� �������������, �� ���� �������� 15 ��������, ����������� ����� � �������� 5 �� 3.
	�� ������ 10-�� ������ ������ � ��������� ���������� ����.
	*/
	std::vector<int> run(const std::vector<int> &inputs);

	// ������������ ����, ���������, ���� �� ������������.
	bool educate(const std::vector<int> &inputs, const std::vector<int> outputs);

private:
	std::vector<Neuron> neurons_;

	double eps_;
};	// class Network