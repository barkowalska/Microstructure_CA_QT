#pragma once
#include <vector>
#include <random>

class Rules
{

public:
	/*Przyjmuje wektor z wartosciami wasiadow i zwraca wartosc ktora ma byc wpisana do danej komorki*/
	virtual int value(std::vector<int>& values)=0;
};

class MaxNumber :public Rules
{
private:
	int counter;
public:
	int value(std::vector<int>& values) override; 
};

class Energy :public Rules
{
private:
	int counter;
public:
	int value(std::vector<int>& values) override;
};
