#pragma once
#include <iostream>
#include <vector>


template<typename T>
T Sqr(T value)
{
	return value * value;
}

template<typename T>
std::vector<T> Sqr(std::vector<T> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i] = arr[i] * arr[i];
	}

	return arr;
}