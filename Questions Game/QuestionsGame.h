//---------------------------------------------------------------------------

#ifndef QuestionsGameH
#define QuestionsGameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *QuestionLabel;
	TRadioButton *Answer1RadioButton;
	TRadioButton *Answer2RadioButton;
	TRadioButton *Answer3RadioButton;
	TButton *ConfirmButton;
	TLabel *Label2;
	TLabel *PointsLabel;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
