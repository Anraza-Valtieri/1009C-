#include "Student.h"

int Student::getAID() const {
	return aID;
}
Student::Student() {}
Student::Student(int aID, const string &name, const string &uniqID, const string &email)
	: aID(aID), name(name), uniqID(uniqID), email(email) {}

void Student::setAID(int aID) {
	this->aID = aID;
}
const string &Student::getName() const {
	return name;
}
void Student::setName(const string &name) {
	this->name = name;
}
const string &Student::getUniqID() const {
	return uniqID;
}
void Student::setUniqID(const string &uniqID) {
	this->uniqID = uniqID;
}
const string &Student::getEmail() const {
	return email;
}
void Student::setEmail(const string &email) {
	this->email = email;
}

bool has_only_digits(const string s) {
	return s.find_first_not_of("0123456789") == string::npos;
}

void Student::attemptQuestions() {
	cout << "Please enter the number of questions you want: " << endl;
	Questions q;
	int noQ;
	string call;
	string choices;
	cin >> call;
	if (has_only_digits(call)) {
		noQ = atoi(call.c_str());
		vector<string> subjectList = q.getAllSubjects();
		cout << endl << "Available subjects: ";
		for (int i = 0; i < subjectList.size(); i++) {
			cout << subjectList[i] << ", ";
		}
		cout << endl << "Please type in the subjects you want to be tested on, seperated by comma if there's more than one." << endl;

		getline(cin, choices);
		getline(cin, choices);

		vector<Questions> aq = q.getSelectQuestions(noQ, choices);

		for (int i = 0; i < aq.size(); i++) {
			/*cout << aq[i].getQuestion_text() << endl;*/
			tryQuestion(aq[i], i+1);
		}

		if (aq.size() == 0) {
			cout << "You seem to have entered something wrong, PLEASE RETRY THE ENTIRE THING" << endl << endl;
		} 
		else {
			cout << "You have reached the end of the quiz." << endl;
			system("pause");
		}


		/*string checkstuff;
		while (checkstuff != "something"){
			cout << "Type something: " << endl;
			cin >> checkstuff;
		}
		if (checkstuff == "something") {
			return;
		}*/
	}

	else {
		cout << "Not valid input." << endl;
		return;
	}
}

void Student::tryQuestion(Questions q, int questionNo) {
	cout << "____________________________________________________" << endl << endl;
	cout << "Question " << questionNo << ": " << endl << endl;
	cout << q.getQuestion_text() << endl << endl;

	if (q.getQuestion_type() == 0) { // MCQ
		int MCQcheck = 0;
		string choice;
		int intChoice;
		if (q.getData1() != "") {
			cout << "Option 1: " << q.getData1() << endl;
			MCQcheck += 1;
		}
		if (q.getData2() != "") {
			cout << "Option 2: " << q.getData2() << endl;
			MCQcheck += 1;
		}
		if (q.getData3() != "") {
			cout << "Option 3: " << q.getData3() << endl;
			MCQcheck += 1;
		}
		if (q.getData4() != "") {
			cout << "Option 4: " << q.getData4() << endl;
			MCQcheck += 1;
		}
		
		cout << endl << "Please enter your choice(s): " << endl;
		cin >> choice;

		if ((choice.find(q.getData5()) != string::npos) && (choice.length() == q.getData5().length())) {
			cout << "Answered correctly!" << endl << endl;
		}
		else {
			cout << "Answered wrongly!" << endl << endl;
		}
		

	}
	else if (q.getQuestion_type() == 1) { // T|F
		cout << "T|F question, yet to be implemented." << endl << endl;
	}
	else if (q.getQuestion_type() == 2) { // SA
		cout << "SA question, yet to be implemented." << endl << endl;
	}
	else if (q.getQuestion_type() == 3) { // MAP
		cout << "MAPPING question, yet to be implemented." << endl << endl;
	}
}