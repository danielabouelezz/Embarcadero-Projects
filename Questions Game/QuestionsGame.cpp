//---------------------------------------------------------------------------

#include <fmx.h>
#include <queue>
#pragma hdrstop

#include "QuestionsGame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

class Question{
public:
	char* Text;
	char* Answer1;
	char* Answer2;
	char* Answer3;
	int CorrectAnswer;

	Question(){}
	Question(char* text, char* ans1, char* ans2, char* ans3, int correctAns){
		Text = text;
		Answer1 = ans1;
		Answer2 = ans2;
		Answer3 = ans3;
		CorrectAnswer = correctAns;
	}
};

std::queue<Question> LoadQuestions(){
	Question q1 = Question("Which color does not appear on the Olympic rings?", "Black", "Orange", "Green", 2);
	Question q2 = Question("What is the chemical formula for Table Salt?", "NaCl", "NaCl2", "Na2Cl", 1);
	Question q3 = Question("What is the longest river in the world?", "Nile", "Mississippi", "Amazon", 1);

	std::queue<Question> questions;
	questions.push(q1);
	questions.push(q2);
	questions.push(q3);

	return questions;
}

std::queue<Question> questions;
Question currentQuestion;
int selectedAnswer;
int points{0};

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	questions = LoadQuestions();
	currentQuestion = questions.front();

	QuestionLabel->Text = currentQuestion.Text;
	Answer1RadioButton->Text = currentQuestion.Answer1;
	Answer2RadioButton->Text = currentQuestion.Answer2;
	Answer3RadioButton->Text = currentQuestion.Answer3;

	questions.pop();
	PointsLabel->Text = points;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Answer1RadioButtonChange(TObject *Sender)
{
	selectedAnswer = 1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Answer2RadioButtonChange(TObject *Sender)
{
	selectedAnswer = 2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Answer3RadioButtonChange(TObject *Sender)
{
	selectedAnswer = 3;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ConfirmButtonClick(TObject *Sender)
{
	if(selectedAnswer == currentQuestion.CorrectAnswer)
	{
		points++;
		PointsLabel->Text = points;
	}

	if(!questions.empty())
	{
		currentQuestion = questions.front();

        QuestionLabel->Text = currentQuestion.Text;
		Answer1RadioButton->Text = currentQuestion.Answer1;
		Answer2RadioButton->Text = currentQuestion.Answer2;
		Answer3RadioButton->Text = currentQuestion.Answer3;
		questions.pop();

		Answer1RadioButton->IsChecked = false;
		Answer2RadioButton->IsChecked = false;
		Answer3RadioButton->IsChecked = false;
	}
	else{
		ConfirmButton->Enabled = false;
        ConfirmButton->Text = "The End";
    }
}
//---------------------------------------------------------------------------
