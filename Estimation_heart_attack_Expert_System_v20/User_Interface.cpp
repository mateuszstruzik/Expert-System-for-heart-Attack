#include "User_Interface.h"



string User_Interface::question1()
{
	bool check = true;
	string answer="N";
	while (check)
	{
		if (answer == "N") {
			cout << "Podaj plec (M - mezczyzna, K - kobieta): "<<endl;
			cin >> answer;
		}
		else if (answer == "M" || answer == "K") {
			check = false;
			if (answer == "M")
				return "01";
			else
				return "10";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	

	
	return string();
}

string User_Interface::question2()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Czy regularnie palisz papierosy(T- tak, N- nie) : " << endl;
			cin >> answer;
		}
		else if (answer == "T" || answer == "N") {
			check = false;
			if (answer == "T")
				return "10";
			else
				return "01";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question3()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Podaj swoje cisnienie tetnicze skurczowe (w przyblizeniu 120, 140, 160, 180 [mm Hg]): " << endl;
			cin >> answer;
		}
		else if (answer == "120" || answer == "140" || answer == "160" || answer == "180") {
			check = false;
			if (answer == "120")
				return "0001";
			else if (answer == "140")
				return "0010";
			else if (answer == "160")
				return "0100";
			else if (answer == "180")
				return "1000";
				
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question4()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Podaj swoj holesterol calkowity(w przyblizeniu 4, 5, 6, 7, 8 [mmol/l]): " << endl;
			cin >> answer;
		}
		else if (answer == "4" || answer == "5" || answer == "6" || answer == "7" || answer == "8") {
			check = false;
			if (answer == "4")
				return "00001";
			else if (answer == "5")
				return "00010";
			else if (answer == "6")
				return "00100";
			else if (answer == "7")
				return "01000";
			else if (answer == "8")
				return "10000";

		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question5()
{
	bool check = true;
	int old;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Podaj swoj wiek: " << endl;
			cin >> old;

			if ( old < 45)
				answer = "40";
			else if (old >= 45 && old < 53)
				answer = "50";
			else if (old >= 53 && old < 57)
				answer = "55";
			else if (old >= 57 && old < 63)
				answer = "60";
			else if (old >= 63)
				answer = "65";

		}
		else if (answer == "40" || answer == "50" || answer == "55" || answer == "60" || answer == "65") {
			check = false;
			if (answer == "40")
				return "00001";
			else if (answer == "50")
				return "00010";
			else if (answer == "55")
				return "00100";
			else if (answer == "60")
				return "01000";
			else if (answer == "65")
				return "10000";

		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question6()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Czy wystepuje u ciebie bezdech senny (T - tak, N - nie): " << endl;
			cin >> answer;
		}
		else if (answer == "T" || answer == "N") {
			check = false;
			if (answer == "T")
				return "1";
			else
				return "0";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question7()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Czy wystepuje u ciebie zaburzenia erekcji (T - tak, N - nie): " << endl;
			cin >> answer;
		}
		else if (answer == "T" || answer == "N") {
			check = false;
			if (answer == "T")
				return "1";
			else
				return "0";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question8()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Czy chorujesz obecnie na jakas chorobe immunologiczna (T - tak, N - nie): " << endl;
			cin >> answer;
		}
		else if (answer == "T" || answer == "N") {
			check = false;
			if (answer == "T")
				return "1";
			else
				return "0";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question9()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Czy w ostatnich 2-latach przechodziles chemioterapie (T - tak, N - nie): " << endl;
			cin >> answer;
		}
		else if (answer == "T" || answer == "N") {
			check = false;
			if (answer == "T")
				return "1";
			else
				return "0";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question10()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Czy przechodzisz lub niedawno przechodziles grype (T - tak, N - nie): " << endl;
			cin >> answer;
		}
		else if (answer == "T" || answer == "N") {
			check = false;
			if (answer == "T")
				return "1";
			else
				return "0";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question11()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Czy ktos w twojej rodzinie mial zawal (T - tak, N - nie): " << endl;
			cin >> answer;
		}
		else if (answer == "T" || answer == "N") {
			check = false;
			if (answer == "T")
				return "1";
			else
				return "0";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}
	return string();
}

string User_Interface::question12()
{
	bool check = true;
	string answer = "C";
	while (check)
	{
		if (answer == "C") {
			cout << "Czy wedlug wskaznika BMI masz objawy nadwagi( ogulnie wskaznik BMI np.: 180 cm - 80 kg )(T - tak, N - nie): " << endl;
			cin >> answer;
		}
		else if (answer == "T" || answer == "N") {
			check = false;
			if (answer == "T")
				return "1";
			else
				return "0";
		}
		else {
			cout << " Nie poprawna odpowiedz, odpowiedz jeszcze raz: " << endl;
			cin >> answer;
		}
	}

	return string();
}

string User_Interface::collectScoreAnswers()
{
	stringstream ss;
	string ch;

	ss << question1(); 
	ss << question2();
	ss << question3();
	ss << question4();
	ss << question5();

	ch = ss.str();

	ss << "";

	return ch;
}

string User_Interface::collectHelpfullAnswer()
{
	stringstream ss;
	string ch;

	ss << question6();
	ss << question7();
	ss << question8();
	ss << question9();
	ss << question10();
	ss << question11();
	ss << question12();
	
	ch = ss.str();

	ss << "";

	return ch;
}

void User_Interface::showPredictions(int a, int b)
{
	cout << "Mozliwosc zawalu na poziomie: " << a + b<< "% " << endl;
}

User_Interface::User_Interface()
{
}


User_Interface::~User_Interface()
{
}
