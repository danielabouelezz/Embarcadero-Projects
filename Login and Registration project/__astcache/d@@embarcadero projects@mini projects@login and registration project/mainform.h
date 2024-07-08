//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMyMainFrom : public TForm
{
__published:	// IDE-managed Components
	TButton *loginNavigationBtn;
	TButton *registrationNavigatinBtn;
	void __fastcall loginNavigationBtnClick(TObject *Sender);
	void __fastcall registrationNavigatinBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyMainFrom(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyMainFrom *MyMainFrom;
//---------------------------------------------------------------------------
#endif
