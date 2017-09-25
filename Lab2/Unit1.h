//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Add;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit3;
	TEdit *Edit4;
	TButton *Prior;
	TButton *Next;
	TButton *Change;
	TButton *Button1;
	TEdit *Edit5;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label3;
	TLabel *Label6;
	void __fastcall AddClick(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall PriorClick(TObject *Sender);
	void __fastcall ChangeClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
class elem
{
public:

	AnsiString s1;
	int k;

//	int getPopulation() const {return k;}
//	string getName() const {return s1;}




};

bool operator < (const elem &e1, const elem &e2) {
//	return e1.getPopulation() < e2.getPopulation();
	return e1.k < e2.k;
}

extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
