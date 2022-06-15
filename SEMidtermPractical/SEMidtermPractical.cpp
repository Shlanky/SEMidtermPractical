// SEMidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

using std::cout;
using std::cin;


int userInput = 0;
bool Menu = true;
int Random = 0;



int main()
{
	srand(time(0));
	Random = rand() % 4 + 1;
	if (Random == 1)
	{
		cout << "Can you select Answer 3 please? Ill give you a cookie :)\n1) \n2) \n3) \n4) \n\n";
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			system("cls");
			cout << "Sorry!, that was not answer 3!. you do not get a cookie.\n\n";
			break;
		case 2:
			system("cls");
			cout << "Sorry!, that was not answer 3!. you do not get a cookie.\n\n";
			break;
		case 3:
			system("cls");
			cout << "Awesome! you are correct! You get a cookie!\n\n";
			break;
		case 4:
			system("cls");
			cout << "Sorry!, that was not answer 3!. you do not get a cookie.\n\n";
			break;
		}
	}
	else if (Random == 2)
	{
		cout << "How many of you are there in the world?\n1) \n2) \n3) \n4) \n\n";
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			system("cls");
			cout << "Correct! You are your own unique individual!\n\n";
			break;
		case 2:
			system("cls");
			cout << "That isnt right.. When did people learn how to clone eachother. There should only be 1\n\n";
			break;
		case 3:
			system("cls");
			cout << "That isnt right.. When did people learn how to clone eachother. There should only be 1\n\n";
			break;
		case 4:
			system("cls");
			cout << "That isnt right.. When did people learn how to clone eachother. There should only be 1\n\n";
			break;
		}
	}
	else if (Random == 3)
	{
		cout << "What is the title of this Class?\n1) Data Structures & Analysis\n2) Software Engineering\n3) Systems Programming\n4) Programming 1 (Hard Mode)\n\n";
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			system("cls");
			cout << "That was our previous class silly! Answer was Software Engineering!\n\n";
			break;
		case 2:
			system("cls");
			cout << "Awesome! you are correct!\n\n";
			break;
		case 3:
			system("cls");
			cout << "That was our first class in C++, not the class we are in right now. If so... Im concerned.\n\n";
			break;
		case 4:
			system("cls");
			cout << "Who gave you a time machine Mr.StoneAge? That was like half a year ago!!\n\n";
			break;
		}
	}
	else
	{
		cout << "How would you create a GitHub repository?\n1) You dont.\n2) Poof one into existence\n3) Create an account on Github and do nothing else\n4) Git->Create Git Repository...\n\n";
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			system("cls");
			cout << "Sorry!, you are incorrect. Answer was Choice 4\n\n";
			break;
		case 2:
			system("cls");
			cout << "Sorry!, you are incorrect. Answer was Choice 4\n\n";
			break;
		case 3:
			system("cls");
			cout << "Sorry!, you are incorrect. Answer was Choice 4\n\n";
			break;
		case 4:
			system("cls");
			cout << "Awesome! you are correct!\n\n";
			break;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
