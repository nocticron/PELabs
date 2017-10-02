//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "About.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

	StringGrid1->RowCount=StrToInt(Edit1->Text) + 1;
	StringGrid1->ColCount=StrToInt(Edit2->Text) + 1;

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Edit1Change(TObject *Sender)
{
	int k=0;
	if (TryStrToInt(Edit1->Text, k))
	{
		if (k<1) k=1;
		StringGrid1->RowCount=k+1;
		for (int i=1; i<StringGrid1->RowCount; i++)
			StringGrid1->Cells[0][i]=i;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{
	int k=0;
	if (TryStrToInt(Edit2->Text, k))
	{
		if (k<1) k=1;
		StringGrid1->ColCount=k+1;
		for (int i=1; i<StringGrid1->ColCount; i++)
			StringGrid1->Cells[i][0]=i;
	}
}
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form2->Input1->Enabled=true;
	Action=caFree;
}
