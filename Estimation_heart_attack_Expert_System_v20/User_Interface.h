#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<sstream>

#define q 5

using namespace std;
class User_Interface
{
private:
	string question1();
	string question2();
	string question3();
	string question4();
	string question5();

	string question6();
	string question7();
	string question8();
	string question9();
	string question10();
	string question11();
	string question12();

public:
	string collectScoreAnswers();
	string collectHelpfullAnswer();
	void showPredictions(int, int);
	User_Interface();
	~User_Interface();
};

