//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainForm.h"
#include "LoginForm.h"
#include "RegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyMainFrom *MyMainFrom;
//---------------------------------------------------------------------------
__fastcall TMyMainFrom::TMyMainFrom(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyMainFrom::loginNavigationBtnClick(TObject *Sender)
{
    MyLoginForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMyMainFrom::registrationNavigatinBtnClick(TObject *Sender)
{
	MyRegistrationForm->Show();
}
//---------------------------------------------------------------------------
