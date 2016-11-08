#pragma once
#include <iostream>
#include <string>
#include "RTU.h"

using namespace std;

class AnalogInput {
private:
	string name;
	string address;

	double eguMin;
	double eguMax;
	double egu;

	double rawMin;
	double rawMax;
	double raw;

	int timeStamp;

	PointStatus status;
	RTU *rtu;
public:
	AnalogInput(string name, string address, double eguMin, double eguMax, double egu, double rawMin, double rawMax, double raw, int timestamp, PointStatus status, RTU *rtuDevice);
	
	string GetName();
	string GetAddress();

	double GetEguMin();
	double GetEguMax();
	double GetEgu();

	double GetRawMin();
	double GetRawMax();
	double GetRaw();

	int GetTimestamp();
	PointStatus GetStatus();
	RTU* GetRTU();

	void SetEguMin(double value);
	void SetEguMax(double value);
	void SetEgu(double value);
	void SetRawMin(double value);
	void SetRawMax(double value);
	void SetRaw(double value);
	void SetTimestamp(int value);
	void SetPointStatus(PointStatus value);
	void SetRTU(RTU *value);
};
