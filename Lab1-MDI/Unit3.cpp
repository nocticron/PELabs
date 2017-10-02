//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action=caFree;
    Form2->Solve1->Enabled=true;
}

void __fastcall TForm3::Button1Click(TObject *Sender)

{
	//����� ������ �������� � ���������� ������ ����
	if (RadioGroup1->ItemIndex==0)	{
		int max=0;
		int imax=0;
		int jmax=0;
		int temp, sum;
		for (int i=1; i < Form1->StringGrid1->RowCount; i++) {
		for (int j=1; j < Form1->StringGrid1->ColCount; j++) {

	// bool:TryStrToInt(str,int);

			if (TryStrToInt(Form1->StringGrid1->Cells[j][i], temp)) {
				sum=(temp / 1000) + ((temp / 100) % 10) + ((temp / 10) % 10) + (temp % 10);
				if (sum>max) {
					max=sum;
					imax=i;
                    jmax=j;
				}
			}
			else
			{
				Label1->Caption="��������� ������� ������!";
				break;
			}
			Label1->Caption="("+IntToStr(imax)+", "+IntToStr(jmax)+") : "+Form1->StringGrid1->Cells[jmax][imax];

		}
		}
	}


	//����� ������, ������ ���������

	else {
		int temp,comp;
		bool btemp=false;

	//i=0 � ���� ����������� ���������� ����� "while ...".
	//�� �����, ����� ���� btemp=true, �� ������� �� ����� � ����� ���������� (i,j). ������ ��������� � ������, � i=0;
	//���� ��������� ��������� �� � �����, �� �� �� ���������� ���� (i+1,j)

		int i=0;
		int j=1;

		if (TryStrToInt(Edit3->Text, comp)) {
			while ((!btemp) && (i<=Form1->StringGrid1->RowCount))  {
				j=1;
				i++;
				while ((!btemp) && (j<=Form1->StringGrid1->ColCount) && (TryStrToInt(Form1->StringGrid1->Cells[j][i], temp))) {
					if (temp==comp) {
						btemp=true;
					} else
					{
						j++;
					}
				}


			}

		if (btemp) { Label1->Caption="("+IntToStr(i)+", "+IntToStr(j)+")";}
		else { Label1->Caption="�� �������";}

		}

		else {
			Label1->Caption="������� �����!";
		}

	}
}


