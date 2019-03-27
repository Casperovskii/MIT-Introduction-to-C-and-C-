#include <iostream>

using namespace std;

class Tool {
	/* Fill in */
public:
	int strength;
	char type;
	Tool() {};
	Tool(int str) {
		this->strength = str;
	}
	virtual bool fight(Tool&) = 0;
	void setStrength(int);
};

void Tool::setStrength(int new_strength) {
	this->strength = new_strength;
}
/*
	Implement class Scissors
*/
class Scissors : public Tool {
public:
	Scissors(int str) {
		this->Tool::Tool(str);
		this->type = 's';
	}
	virtual bool fight(Tool&);
};

bool Scissors::fight(Tool& another_tool) {
	int this_str = this->strength;
	int another_str = another_tool.strength;
	if (another_tool.type == 'p') {
		this_str = 2 * this_str;
	}
	else if (another_tool.type == 'r') {
		another_str = 2 * another_str;
	}

	return this_str > another_str;
}
/*
	Implement class Paper
*/
class Paper : public Tool {
public:
	Paper(int str) {
		this->Tool::Tool(str);
		this->type = 'p';
	}
	virtual bool fight(Tool&);
};

bool Paper::fight(Tool& another_tool) {
	int this_str = this->strength;
	int another_str = another_tool.strength;
	if (another_tool.type == 'r') {
		this_str = 2 * this_str;
	}
	else if (another_tool.type == 's') {
		another_str = 2 * another_str;
	}

	return this_str > another_str;
}
/*
	Implement class Rock
*/
class Rock : public Tool {
public:
	Rock(int str) {
		this->Tool::Tool(str);
		this->type = 'r';
	}
	virtual bool fight(Tool&);
};

bool Rock::fight(Tool& another_tool) {
	int this_str = this->strength;
	int another_str = another_tool.strength;
	if (another_tool.type == 's') {
		this_str = 2 * this_str;
	}
	else if (another_tool.type == 'p') {
		another_str = 2 * another_str;
	}

	return this_str > another_str;
}

int main() {
	// Example main function
	// You may add your own testing code if you like

	Scissors s1(5);
	Paper p1(7);
	Rock r1(15);
	cout << s1.fight(p1) << p1.fight(s1) << endl;
	cout << p1.fight(r1) << r1.fight(p1) << endl;
	cout << r1.fight(s1) << s1.fight(r1) << endl;

	return 0;
}