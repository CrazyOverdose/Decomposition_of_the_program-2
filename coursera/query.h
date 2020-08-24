#pragma once
#include "pch.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

enum class QueryType {
	NewBus,
	BusesForStop,
	StopsForBus,
	AllBuses
};

struct Query {
	QueryType type;
	string bus;
	int stop_count;
	string stop;
	vector<string> stops;
};

istream& operator >> (istream& is, Query& q);