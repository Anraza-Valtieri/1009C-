#include "Student.h"
#include "header.h"
#include <boost/algorithm/string/split.hpp> // Include for boost::split

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
	Result r;

	r.setUserID(this->aID);

	int noQ;
	string call;
	string choices;
	vector<string> resultStuff;
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

		r.setQuizname("Practice " + to_string(noQ) + " questions on " + choices);

		vector<Questions> aq = q.getSelectQuestions(noQ, choices);

		for (int i = 0; i < aq.size(); i++) {
			/*cout << aq[i].getQuestion_text() << endl;*/
			r = tryQuestion(aq[i], i+1, r);
		}

		if (aq.size() == 0) {
			cout << "You seem to have entered something wrong, PLEASE RETRY THE ENTIRE THING" << endl << endl;
		}
		else {
			cout << "You have reached the end of the quiz." << endl;
			//create results here


			cin.get();
			showAnswers(aq, r);
			return;
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

Result Student::tryQuestion(Questions q, int questionNo, Result r) {
	cin.clear();
	cout << "____________________________________________________" << endl << endl;
	cout << "Question " << questionNo << ": " << endl << endl;
	cout << q.getQuestion_text() << endl << endl;
	r.setQuestion(r.getQuestion() + q.getQuestion_text() + "/*/*/");

	if (q.getQuestion_type() == 0) { // MCQ
		int MCQcheck = 0;
		string choice;
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

		cout << endl << "Please enter your choice(s), without spaces: " << endl << endl;
		cin >> choice;

		if (choice.length() == 1){
			if (!isdigit(choice[0])) {
				cout << "You have entered something wrong, please try again." << endl;
				cin.get();
				tryQuestion(q, questionNo, r);
			}
		}
		else if (choice.length() == 3) {
			if (!isdigit(choice[0]) || !isdigit(choice[2])) {
				cout << "You have entered something wrong, please try again." << endl;
				cin.get();
				tryQuestion(q, questionNo, r);
			}
		}
		else if (choice.length() == 5) {
			if (!isdigit(choice[0]) || !isdigit(choice[2]) || !isdigit(choice[4])) {
				cout << "You have entered something wrong, please try again." << endl;
				cin.get();
				tryQuestion(q, questionNo, r);
			}
		}
		else if (choice.length() == 7) {
			if (!isdigit(choice[0]) || !isdigit(choice[2]) || !isdigit(choice[4]) || !isdigit(choice[6])) {
				cout << "You have entered something wrong, please try again." << endl;
				cin.get();
				tryQuestion(q, questionNo, r);
			}
		}
		else {
			cout << "You have entered something wrong, please try again." << endl;
			cin.get();
			tryQuestion(q, questionNo, r);
		}

		if ((choice.find(q.getData5()) != string::npos) && (choice.length() == q.getData5().length())) {
			r.setIndvmark(r.getIndvmark() + to_string(q.getMarks()) + "/*/*/");
		}
		else {
			r.setIndvmark(r.getIndvmark() + "0/*/*/");
		}
		r.setInputAnswer(r.getInputAnswer() + choice + "/*/*/");
		r.setActualAnswer(r.getActualAnswer() + q.getData5() + "/*/*/");
		return r;


	}
	else if (q.getQuestion_type() == 1) { // T|F
		string choiceTF;
		cout << endl << "Please input only either T or F." << endl << endl;
		cin >> choiceTF;
		if (choiceTF == "T" || choiceTF == "t" || choiceTF == "F" || choiceTF == "f") {
			if (choiceTF == "T" || choiceTF == "t") {
				r.setInputAnswer(r.getInputAnswer() + "TRUE" + "/*/*/");
				if (q.getData5() == "1") {
					r.setIndvmark(r.getIndvmark() + to_string(q.getMarks()) + "/*/*/");
					r.setActualAnswer(r.getActualAnswer() + "TRUE" + "/*/*/");
				}
				else {
					r.setIndvmark(r.getIndvmark() + "0/*/*/");
				}
				return r;
			}
			else {
				r.setInputAnswer(r.getInputAnswer() + "FALSE" + "/*/*/");
				if (q.getData5() == "2") {
					r.setIndvmark(r.getIndvmark() + to_string(q.getMarks()) + "/*/*/");
					r.setActualAnswer(r.getActualAnswer() + "FALSE" + "/*/*/");
				}
				else {
					r.setIndvmark(r.getIndvmark() + "0/*/*/");
				}

				return r;
			}
		}
		else {
			cout << "You have entered something wrong, please try again." << endl;
			cin.get();
			tryQuestion(q, questionNo, r);
		}

	}
	else if (q.getQuestion_type() == 2) { // SA
		string answerSA;
		cout << "Please input your answer: " << endl << endl;
		//cin >> answerSA;
		getline(cin, answerSA);
		if (answerSA.length() != 0) {
			vector<string> answerCheck;
			bool check = false;
            string d5 = q.getData5();
              boost::split(answerCheck, d5, boost::is_any_of(","), boost::token_compress_on);
			//boost::split(answerCheck, q.getData5(), boost::is_any_of(","), boost::token_compress_on);
			boost::algorithm::to_lower(answerSA);
			for (int i = 0; i < answerCheck.size(); i++) {
				string checkThingy = answerCheck[i];
				boost::algorithm::to_lower(checkThingy);
				if (answerSA.find(checkThingy) != string::npos) {
					check = true;
				}
				else {
					check = false;
				}
			}

			if (check) {
				r.setIndvmark(r.getIndvmark() + to_string(q.getMarks()) + "/*/*/");
			}
			else {
				r.setIndvmark(r.getIndvmark() + "0/*/*/");
			}
			r.setActualAnswer(r.getActualAnswer() + q.getData5() + "/*/*/");
			r.setInputAnswer(r.getInputAnswer() + answerSA + "/*/*/");
			return r;

		}
		else {
			cout << "You have entered something wrong, please try again." << endl;
			cin.get();
			tryQuestion(q, questionNo, r);
		}
	}
	else if (q.getQuestion_type() == 3) { // MAP
		string choice;
		vector<string> choices;
        string d1 =q.getData1();
		boost::split(choices, d1,boost::is_any_of(","), boost::token_compress_on);
		for (int i = 0; i < choices.size(); i++) {
			cout << "Option " << i << ": " << choices[i] << endl;
		}

		cout << endl << "Please enter option numbers as the answers, without spaces, separated by comma: " << endl << endl;
		cin >> choice;

		if (choice.length() < 1) {
			cout << "You have entered something wrong, please try again." << endl;
			cin.get();
			tryQuestion(q, questionNo, r);
		}

		if (choice == q.getData5()) {
			r.setIndvmark(r.getIndvmark() + to_string(q.getMarks()) + "/*/*/");
		}
		else {
			r.setIndvmark(r.getIndvmark() + "0/*/*/");
		}
		r.setActualAnswer(r.getActualAnswer() + q.getData5() + "/*/*/");
		r.setInputAnswer(r.getInputAnswer() + choice + "/*/*/");
		return r;

	}
}

void Student::showAnswers(vector<Questions> aq, Result r) {
	vector<string> results;
    string d = r.getIndvmark();
	boost::split(results, d, boost::is_any_of("/*/*/"), boost::token_compress_on);
	int marks = 0;
	int total = 0;
	cout << endl << "_____ANSWERS_____" << endl << endl;

	for (int i = 0; i < aq.size(); i++) {
		cout << "____________________________________________________" << endl << endl;
		cout << "Question " << i+1 << ": " << endl;
		cout << "Marks: " << aq[i].getMarks() << endl << endl;
		cout << aq[i].getQuestion_text() << endl << endl;
		if (aq[i].getQuestion_type() == 0) {
			if (aq[i].getData1() != "") {
				cout << "Option 1: " << aq[i].getData1() << endl;
			}
			if (aq[i].getData2() != "") {
				cout << "Option 2: " << aq[i].getData2() << endl;
			}
			if (aq[i].getData3() != "") {
				cout << "Option 3: " << aq[i].getData3() << endl;
			}
			if (aq[i].getData4() != "") {
				cout << "Option 4: " << aq[i].getData4() << endl;
			}
		}
		else if (aq[i].getQuestion_type() == 3) {
			vector<string> ansChoices;
			ansChoices.reserve(aq.size());
            string d1 = aq[i].getData1();
			boost::split(ansChoices, d1, boost::is_any_of(","), boost::token_compress_on);
			for (int j = 0; j < ansChoices.size(); j++) {
				cout << "Option " << j << ": " << ansChoices[j] << endl;
			}
		}

		cout << endl;
		if (aq[i].getQuestion_type() == 2) {
			cout << "Keywords: " << aq[i].getData5() << endl << endl;
		}
		else if (aq[i].getQuestion_type() == 1) {
			if (aq[i].getData5() == "1") {
				cout << "Answer: TRUE" << endl << endl;
			}
			else {
				cout << "Answer: FALSE" << endl << endl;
			}
		}
		else{
			cout << "Answer: " << aq[i].getData5() << endl << endl;
		}
		if (results[i] != "0") {
			cout << "You got the question right!" << endl << endl;
			marks += aq[i].getMarks();
		}
		else {
			cout << "You got the question wrong!" << endl << endl;
		}



		total += aq[i].getMarks();

		r.setQuestion(r.getQuestion() + aq[i].getQuestion_text() + "/*/*/");


		cin.get();
	}

	r.setMarkObtained(marks);
	r.setTotalMarks(total);

	cout << endl << "End of quiz, total marks = " << marks << " / "  << total << endl;

	return;
}

void Student::doTheResultThingy(Result r) {
	r.createResult();
}