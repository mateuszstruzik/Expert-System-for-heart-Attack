#pragma once
#include<string>

using namespace std;
class Fact_Base
{
private:
	string score_answers;
	string helpfull_answers;
	int collectscorepoints;
	int collecthelpfullpoints;
public:

	void collectFromInterfaceScoreAnswers(string);
	void collectFromInterfaceScoreHelpfull(string);
	
	string getScoreAnswers() { return score_answers; };
	void setScorePoints(int a) { this->collectscorepoints = a; };
	int getScorePoints() { return collectscorepoints; };

	string getHelpfullAnswers() { return helpfull_answers; };
	void setHelpfullPoints(int a) { this->collecthelpfullpoints = a; };
	int getHelpfullPoints() { return collecthelpfullpoints; };


	Fact_Base();
	~Fact_Base();
};

