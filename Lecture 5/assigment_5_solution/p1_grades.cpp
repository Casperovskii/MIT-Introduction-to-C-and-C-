#include <stdio.h>

char GRADE_MAP[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A' };

class Grade {
	char letter;
	int percent;

public:
	void setByPercent(int new_percent) {
		this->percent = new_percent;
		this->letter = GRADE_MAP[this->percent / 10];
	}

	void setByLetter(char new_letter) {
		this->letter = new_letter;
		this->percent = 100 - (this->letter - 'A') * 10 - 5;
	}

	void print() {
		printf("Grade: %d: %c\n", this->percent, this->letter);
	}
};

int main() {
	Grade g;
	int percent;
	printf("Enter two grades separated by a space. Use a percentage for the first and letter for the second: ");
	scanf("%d", &percent);
	scanf("\n");
	g.setByPercent(percent);
	g.print();
	g.setByLetter(getchar());
	g.print();
	return 0;
}