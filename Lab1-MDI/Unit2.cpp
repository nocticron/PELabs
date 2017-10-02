//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm2::Input1Click(TObject *Sender)
{
    Form1=new TForm1(this);
	Form1->Show();
	Input1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Solve1Click(TObject *Sender)
{
	Form3=new TForm3(this);
	Form3->Show();
    Solve1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ile1Click(TObject *Sender)
{
    Tile();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Cascade1Click(TObject *Sender)
{
    Cascade();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::CloseCurrent1Click(TObject *Sender)
{
	if (ActiveMDIChild!=NULL) ActiveMDIChild->Close();
}
//---------------------------------------------------------------------------
