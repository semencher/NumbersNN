#pragma once

#include <vector>

class Neuron
{
public:
	// ���������� ������� ����� �������� ����������, �����0 ����� ����� 0.
	Neuron(double om0 = 0.0);

	void setOm0(double om0);
	double om0() const;

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