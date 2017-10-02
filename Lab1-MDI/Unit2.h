//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *F1;
	TMenuItem *About1;
	TMenuItem *Input1;
	TMenuItem *Solve1;
	TMenuItem *Windows1;
	TMenuItem *ile1;
	TMenuItem *Cascade1;
	TMenuItem *CloseCurrent1;

	void __fastcall Input1Click(TObject *Sender);
	void __fastcall Solve1Click(TObject *Sender);
	void __fastcall ile1Click(TObject *Sender);
	void __fastcall Cascade1Click(TObject *Sender);
	void __fastcall CloseCurrent1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
