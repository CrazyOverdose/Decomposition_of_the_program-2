#pragma once
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct BusesForStopResponse {
	// Наполните полями эту структуру
	vector<string > Buses_For_Stop_Response;
};

struct StopsForBusResponse {
	// Наполните полями эту структуру
	vector <string> Stops_Response;
	vector< vector <string>> Bus_Response;
};

struct AllBusesResponse {
	// Наполните полями эту структуру
	map<string, vector<string>> All_Buses_Response;
};

ostream& operator << (ostream& os, const BusesForStopResponse& r);

ostream& operator << (ostream& os, const StopsForBusResponse& r);

ostream& operator << (ostream& os, const AllBusesResponse& r);