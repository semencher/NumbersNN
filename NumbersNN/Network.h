#pragma once

#include <vector>

class Neuron;

class Network
{
public:
	/*
	����� ��������� �������������, �� ���� �������� 15 ��������, ����������� ����� � �������� 5 �� 3.
	�� ������ 10-�� ������ ������ � ��������� ���������� ����.
	*/
	std::vector<int> run(const std::vector<int> &inputs);

private:
	std::vector<Neuron> neurons_;
};	// class Network