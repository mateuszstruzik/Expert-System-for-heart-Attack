#pragma once
#include "User_Interface.h"
#include "Fact_Base.h"
#include<fstream>

class InferenceEngine
{
public:
	User_Interface user_interface;
	Fact_Base fact_base;

	void calculateScorePoints();
	void calculateHelpfullPoints();
	void wholeParts();

	InferenceEngine();
	~InferenceEngine();
};

