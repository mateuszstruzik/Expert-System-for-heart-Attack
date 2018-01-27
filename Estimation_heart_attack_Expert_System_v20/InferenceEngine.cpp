#include "InferenceEngine.h"



void InferenceEngine::calculateScorePoints()
{
	vector<string> rules;
	vector<int> points;
	int num=0;
	string a,b;
	fact_base.collectFromInterfaceScoreAnswers(user_interface.collectScoreAnswers());
	a = fact_base.getScoreAnswers();

	ifstream answers_read("scorerule.txt");
	stringstream ss;

	for (string line; getline(answers_read, line);) {

		ss << line;
		rules.push_back(ss.str());
		ss.str("");

	}

	answers_read.close();
	ifstream points_read("scorepoints.txt");
	for (string line; getline(points_read, line);) {

		ss << line;
		b= ss.str();
		points.push_back(atoi(b.c_str()));
		ss.str("");

	}

	for (int i = 0; i < rules.size(); i++) {
		if (a.compare(rules[i]) == 0) {
			fact_base.setScorePoints(points[i]);
		}
	}
}

void InferenceEngine::calculateHelpfullPoints()
{
	vector<string> rules;
	vector<int> points;
	int num = 0;
	string a, b;
	fact_base.collectFromInterfaceScoreHelpfull(user_interface.collectHelpfullAnswer());
	a = fact_base.getHelpfullAnswers();

	ifstream answers_read("helpfullrule.txt");
	stringstream ss;

	for (string line; getline(answers_read, line);) {

		ss << line;
		rules.push_back(ss.str());
		ss.str("");

	}

	answers_read.close();
	ifstream points_read("helpfullpoints.txt");
	for (string line; getline(points_read, line);) {

		ss << line;
		b = ss.str();
		points.push_back(atoi(b.c_str()));
		ss.str("");

	}

	for (int i = 0; i < rules.size(); i++) {
		if (a.compare(rules[i]) == 0) {
			fact_base.setHelpfullPoints(points[i]);
		}
	}

}

void InferenceEngine::wholeParts()
{
	calculateScorePoints();
	calculateHelpfullPoints();
	//fact_base.getScorePoints();
	user_interface.showPredictions(fact_base.getScorePoints(), fact_base.getHelpfullPoints());
}

InferenceEngine::InferenceEngine()
{
}


InferenceEngine::~InferenceEngine()
{
}
