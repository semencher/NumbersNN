#pragma once

#include <vector>

class Neuron
{
public:
	Neuron();

	void setOm0(double om0) { om0_ = om0; }

	// ������� �������� �� ���� ������� �������� � ������������ ���������.
	int run(const std::vector<int> &inputs);

	// eps ���� ������ �� ������!
	void educate(const std::vector<int> &inputs, double eps);

private:
	// 15-�� ������ ������ �����.
	std::vector<double> weight_;
	// ����� �������.
	double om0_;
};	// class Neuron