//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
void __fastcall TForm1::About1Click(TObject *Sender)
{
	AboutBox->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//найти индекс элемента с наибольшей суммой цифр
	if (RadioGroup1->ItemIndex==0)	{
		int max=0;
		int imax=0;
		int jmax=0;
		int temp, sum;
		for (int i=1; i < StringGrid1->RowCount; i++) {
		for (int j=1; j < StringGrid1->ColCount; j++) {

	// bool:TryStrToInt(str,int);

			if (TryStrToInt(StringGrid1->Cells[j][i], temp)) {
				sum=(temp / 1000) + ((temp / 100) % 10) + ((temp / 10) % 10) + (temp % 10);
				if (sum>max) {
					max=sum;
					imax=i;
                    jmax=j;
				}
			}
			else
			{
				Label1->Caption="Ошибочные входные данные!";
				break;
			}
			Label1->Caption="("+IntToStr(imax)+", "+IntToStr(jmax)+") : "+StringGrid1->Cells[jmax][imax];

		}
		}
	}


	//найти первый, равный заданному

	else {
		int temp,comp;
		bool btemp=false;

	//i=0 в силу особенности построения цикла "while ...".
	//мы хотим, чтобы если btemp=true, то выходим из цикла и сразу показываем (i,j). потому инкремент в начале, и i=0;
	//если инкремент находился бы в конце, то мы бы показывали пару (i+1,j)

		int i=0;
		int j=1;

		if (TryStrToInt(Edit3->Text, comp)) {
			while ((!btemp) && (i<=StringGrid1->RowCount))  {
				j=1;
				i++;
				while ((!btemp) && (j<=StringGrid1->ColCount) && (TryStrToInt(StringGrid1->Cells[j][i], temp))) {
					if (temp==comp) {
						btemp=true;
					} else
					{
						j++;
					}
				}


			}

		if (btemp) { Label1->Caption="("+IntToStr(i)+", "+IntToStr(j)+")";}
		else { Label1->Caption="Не найдено";}

		}

		else {
			Label1->Caption="Введите число!";
		}

	}
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
//---------------------------------------------------------------------------



void __fastcall TForm1::N1Click(TObject *Sender)
{
    if(OpenTextFileDialog1->Execute())
	  {
		  AnsiString FileName;
		  FileName =  OpenTextFileDialog1->FileName;
      }
}
//---------------------------------------------------------------------------

