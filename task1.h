#pragma once
#include "include.h"

template<typename T>
class Pair1
{
private:
	T m_a;
	T m_b;
public:
	
	Pair1(T a, T b) : m_a(a), m_b(b) {}

	const T& first() const
	{
		return m_a;
	}
	
	const T& second() const
	{
		return m_b;
	}

};

template<typename T1, typename T2> 
class Pair 
{
	T1 m_a;
	T2 m_b;
public:

	Pair(T1 a, T2 b) : m_a(a), m_b(b) {}

	  const T1& first() const
	{
		return m_a;
	}

     const T2& second() const
	{
		return m_b;
	}

};

template<typename T2>
class StringValuePair : public Pair<std::string , T2>
{
public:
	StringValuePair(const std::string &a, T2 b ) : Pair<std::string, T2>(a,b)
	{}

};


void task1()
{
	Pair1<int> p1(6, 9);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
	const Pair1<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	Pair<int, double> p3(6, 7.8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair<double, int> p4(3.4, 5);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	StringValuePair<int> svp("Amazing", 7);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << std::endl;


	
}
