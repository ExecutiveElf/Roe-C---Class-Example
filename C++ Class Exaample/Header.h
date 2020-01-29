#ifndef student_h

#define student_h
using namespace std;
#include <string>;
class student;
struct credits;

class student //Class for the students.
{
	public:string name;
	string id;
	float gpa;
};

struct populace //Student Names
{
	student Claude;
	student Cyril;
	student Dimitri;
	student Dedue;
	student Edelgard;
	student Flayn;
	student Hilda;
	student Hubert;
};

struct course //Struct for the classes.
{
	string name;
	string semester;
	float grade;
};

struct credit //Names of the classes.
{
	course Calculus;
	course Statistics;
	course Physics;
	course Biology;
	course Composition;
	course PublicSpeaking;
	course History;
	course Government;
	course Art;
	course Music;
};
#endif