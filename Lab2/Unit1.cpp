//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//using vector containing "elems"
#include "vector"
#include "algorithm"

using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
elem el;
vector <elem> lst1;
vector <elem>::iterator it1;
int i=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddClick(TObject *Sender)
{

//  enabling "<" ">" buttons
	Prior->Enabled=true;
	Next->Enabled=true;

//  pushing to lst1, if succesful
	if (TryStrToInt(Edit2->Text, el.k)) {
	el.s1=Edit1->Text;
	lst1.push_back(el);
	it1=lst1.end()-1;
	Edit1->Text="";
	Edit2->Text="";
	Label1->Caption=lst1.size();
	i=lst1.size();

	Edit3->Text=it1->s1;
	Edit4->Text=it1->k;
	Label3->Caption=IntToStr(i);
	}
	else { Label3->Caption="¬ведите число!"; }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::NextClick(TObject *Sender)
{
	Prior->Enabled=true;
	if (it1==lst1.end()-1) {
		Next->Enabled=false;

	}

	else {
	it1++;
	i++;

	Edit3->Text=it1->s1;
	Edit4->Text=it1->k;

	}
	Label3->Caption=IntToStr(i);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PriorClick(TObject *Sender)
{
	Next->Enabled=true;

	if (it1==lst1.begin()) {
		Prior->Enabled=false;
	}
	else {
	it1--;
	i--;
	Edit3->Text=it1->s1;
	Edit4->Text=it1->k;
	}

	Label3->Caption=IntToStr(i);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ChangeClick(TObject *Sender)
{
	it1->s1=Edit3->Text;
	it1->k=StrToInt(Edit4->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int maxsize=0;
	if ( (TryStrToInt(Edit5->Text, maxsize)) && (maxsize<lst1.size()) && (maxsize>0) ) {
		Form2->Show();
		Form2->StringGrid1->RowCount=maxsize+1;
		Form2->StringGrid1->ColCount=3;
		sort(lst1.begin(), lst1.end()); 
		for (int i=1; i < Form2->StringGrid1->RowCount; i++) {
			Form2->StringGrid1->Cells[1][i]=lst1[lst1.size()-i].s1;
			Form2->StringGrid1->Cells[2][i]=lst1[lst1.size()-i].k;
			
			
		}
		
	}

}
//---------------------------------------------------------------------------

