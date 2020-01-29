/* Benjamin Roe
 C++ Fall 2019
 Due 1/28/20
 Lab 1 Class Example
 Description: Create a student class that will store important information about a student.
    As a part of this lab, a client file needs to be created to test the class by displaying to
    the screen all the attributes and display all classes that match a user requested grade.
*/

#include <iostream>
#include"Header.h"
using namespace std;

int getStudent();
void getID(int j);
string getClasses(int j);

int main() //I'll just tell you right now that I ran out of time and was unable to fully implement error handling.
{
	string a;
	do {
		int j = getStudent(); //Displays names of all students.
		getID(j); //Displays student ID after name is selected.
		do {a = getClasses(j); } while (a == "Yes"); //Displays the classes the selected student has taken.
		if (a == "No")
		{
			cout << "\n\nDo you need information any other students? (Input 'Yes' or 'No')\n";
			cin >> a;
			while (a != "Yes" && a != "No") //Ignores inputs other than yes and no
			{
				cout << "Invalid Input\n";
				cin >> a;
			}
		}
	} while (a != "No");
	return 0;
}

int getStudent()
{
	cout << "\nWhich student's information do you need?\n";
	student Sstudent[8]; //Defines student names. In hindsight I really shouldn't havve gone for more than one. This was tedious.
	Sstudent[0].name = "Claude";
	Sstudent[1].name = "Cyril";
	Sstudent[2].name = "Dimitri";
	Sstudent[3].name = "Dedue";
	Sstudent[4].name = "Edelgard";
	Sstudent[5].name = "Flayn";
	Sstudent[6].name = "Hilda";
	Sstudent[7].name = "Hubert";

	int i = 0;
	do { //Displays student names.
		cout << Sstudent[i].name << endl;
		i++;
	} while (i < 8);
	cout << endl;
	i++;

	string k;
	cin >> k;

	do { //Recieves user input and returns a value dependent on the name inputted.
		if (k == "Claude")
			i = 0;
		else if (k == "Cyril")
			i = 1;
		else if (k == "Dimitri")
			i = 2;
		else if (k == "Dedue")
			i = 3;
		else if (k == "Edelgard")
			i = 4;
		else if (k == "Flayn")
			i = 5;
		else if (k == "Hilda")
			i = 6;
		else if (k == "Hubert")
			i = 7;
		else //Is supposed to reject inputs other than the names but it is broken.
		{
			cout << "Invalid Input\n";
			int i = 8;
		}
	} while (i == 8);

	return (i);
}

void getID(int j)
{
	student Sstudent[8]; //Defines student IDs.
	Sstudent[0].id = "0005";
	Sstudent[1].id = "0008";
	Sstudent[2].id = "0003";
	Sstudent[3].id = "0004";
	Sstudent[4].id = "0001";
	Sstudent[5].id = "0007";
	Sstudent[6].id = "0006";
	Sstudent[7].id = "0002";
	cout << "Student ID: " << Sstudent[j].id << endl; //Displays the ID matching the student recieved as input.
}

string getClasses(int j)
{
	course Ccourse[100]; //Defines the classes. I made 10, but this array can hold 100. 
	Ccourse[0].name = "Calculus";
	Ccourse[1].name = "Statistics";
	Ccourse[2].name = "Physics";
	Ccourse[3].name = "Biology";
	Ccourse[4].name = "Composition";
	Ccourse[5].name = "Public Speaking";
	Ccourse[6].name = "History";
	Ccourse[7].name = "Government";
	Ccourse[8].name = "Art";
	Ccourse[9].name = "Music";
	for (int l = 0; l < 10; l++)
	{
	Ccourse[l].grade = -1;
	}
	while (true)
	{
		switch (j) //Redisplays the name of the chosen student.
		{
		case 0: cout << "Claude";
			break;
		case 1: cout << "Cyril";
			break;
		case 2: cout << "Dimitri";
			break;
		case 3: cout << "Dedue";
			break;
		case 4: cout << "Edelgard";
			break;
		case 5: cout << "Flayn";
			break;
		case 6: cout << "Hilda";
			break;
		case 7: cout << "Hubert";
			break;
		}
		cout << " has recorded grades for the following classes:\n\n";

		float m = 0;
		int n = 0;

		switch (j)
		{
		case 0: //Claude's Grades
			Ccourse[1].semester = "FA 2019";
			Ccourse[1].grade = 84.2;
			Ccourse[2].semester = "SP 2020";
			Ccourse[2].grade = 98.9;
			Ccourse[5].semester = "FA 2019";
			Ccourse[5].grade = 91.7;
			Ccourse[8].semester = "FA 2019";
			Ccourse[8].grade = 73.6;
			break;
		case 1: //Cyril's Grades
			Ccourse[4].semester = "SP 2020";
			Ccourse[4].grade = 25.1;
			Ccourse[7].semester = "SP 2020";
			Ccourse[7].grade = 70.5;
			Ccourse[9].semester = "SP 2020";
			Ccourse[9].grade = 72.8;
			break;
		case 2: //Dimitri's Grades
			Ccourse[2].semester = "SP 2020";
			Ccourse[2].grade = 60.7;
			Ccourse[5].semester = "FA 2019";
			Ccourse[5].grade = 88.8;
			Ccourse[6].semester = "FA 2019";
			Ccourse[6].grade = 100.0;
			Ccourse[7].semester = "SP 2020";
			Ccourse[7].grade = 82.3;
			break;
		case 3: //Dedue's Grades
			Ccourse[0].semester = "SP 2020";
			Ccourse[0].grade = 91.9;
			Ccourse[3].semester = "FA 2019";
			Ccourse[3].grade = 94.4;
			Ccourse[6].semester = "FA 2019";
			Ccourse[6].grade = 89.7;
			break;
		case 4: //Edelgard's Grades 
			Ccourse[0].semester = "FA 2019";
			Ccourse[0].grade = 87.6;
			Ccourse[1].semester = "FA 2019";
			Ccourse[1].grade = 84.2;
			Ccourse[5].semester = "SP 2020";
			Ccourse[5].grade = 99.7;
			Ccourse[7].semester = "SP 2020";
			Ccourse[7].grade = 44.3;
			break;
		case 5: //Flayn's Grades
			Ccourse[1].semester = "SP 2020";
			Ccourse[1].grade = 73.1;
			Ccourse[3].semester = "SP 2020";
			Ccourse[3].grade = 81.6;
			Ccourse[8].semester = "SP 2020";
			Ccourse[8].grade = 93.8;
			break;
		case 6: //Hilda's Grades
			Ccourse[8].semester = "FA 2019";
			Ccourse[8].grade = 28.4;
			Ccourse[9].semester = "FA 2020";
			Ccourse[9].grade = 36.0;
			break;
		case 7: //Hubert's Grades
			Ccourse[0].semester = "SP 2020";
			Ccourse[0].grade = 86.1;
			Ccourse[1].semester = "SP 2020";
			Ccourse[1].grade = 89.5;
			Ccourse[4].semester = "FA 2019";
			Ccourse[4].grade = 94.9;
			Ccourse[6].semester = "FA 2019";
			Ccourse[6].grade = 99.2;
			Ccourse[7].semester = "FA 2019";
			Ccourse[7].grade = 98.3;
			break;
		}
		for (int p = 0; p < 10; p++) //Displays the names of the classes the student has taken.
		{
			if (Ccourse[p].grade != -1)
				cout << Ccourse[p].name << endl;
		}
		for (int o = 0; o < 10; o++) //Partially calculates GPA. 
		{
			if (Ccourse[o].grade != -1)
			{
				m = m + Ccourse[o].grade;
				n++;
			}
		}
		cout << "\nInput letter grade you would like to see matching classes of, input 'All' to see all of them, input 'GPA' to see GPA.\n";
		string q;
		int s = 0;
		cin >> q;
		if (q == "A") //Displays grades above 90%
		{
			for (int r = 0; r < 10; r++)
			{
				if (Ccourse[r].grade >= 90)
				{
					cout << endl << Ccourse[r].name << ": " << Ccourse[r].grade;
					s++;
				}
			}
		}
		else if (q == "B") //Displays grades below 90% and above 80%.
		{
			for (int r = 0; r < 10; r++)
			{
				if (Ccourse[r].grade < 90 && Ccourse[r].grade >= 80)
				{
					cout << endl << Ccourse[r].name << ": " << Ccourse[r].grade;
					s++;
				}
			}
		}
		else if (q == "C") //Displays grades below 80% and above 70%.
		{
			for (int r = 0; r < 10; r++)
			{
				if (Ccourse[r].grade < 80 && Ccourse[r].grade >= 70)
				{
					cout << endl << Ccourse[r].name << ": " << Ccourse[r].grade;
					s++;
				}
			}
		}
		else if (q == "D") //Displays grades below 70% and above 60%.
		{
			for (int r = 0; r < 10; r++)
			{
				if (Ccourse[r].grade < 70 && Ccourse[r].grade >= 60)
				{
					cout << endl << Ccourse[r].name << ": " << Ccourse[r].grade;
					s++;
				}
			}
		}
		else if (q == "F") //Displays grades below 60%.
		{
			for (int r = 0; r < 10; r++)
			{
				if (Ccourse[r].grade < 60 && Ccourse[r].grade != -1)
				{
					cout << endl << Ccourse[r].name << ": " << Ccourse[r].grade;
					s++;
				}
			}
		}
		else if (q == "GPA") //Displays GPA
		{
			cout << "\nThe student's GPA is " << m / (n * 25) << ".";
		}
		else if (q == "All") //Displays all grades.
		{
			for (int r = 0; r < 10; r++)
			{
				if (Ccourse[r].grade >= 0)
				{
					cout << endl << Ccourse[r].name << ": " << Ccourse[r].grade;
					s++;
				}
			}
		}
		else
		{
			cout << "\nThat is not a valid grade.\n";
			s++;
		}
			if (s == 0) //Statement for when a student has no classes in a given category.
				cout << "\nThis student has no classes matching this grade.\n";
		cout << "\n\nDo you need more information on this student? (Input 'Yes' or 'No')\n";
		string menu;
		cin >> menu;
		while (menu != "Yes" && menu != "No") //Determines how far back to go in the program after viewing grades.
		{
			cout << "Invalid Input\n";
			cin >> menu;
		}
		if (menu == "No")
		{
			return menu; //Exits function if no more data on a student is requested.
		}
	}
}