//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonConvertClick(TObject *Sender)
{
// зчитуємо значення
    double kursKupivli = StrToFloat(Edit1->Text);
    double kursProdazhu = StrToFloat(Edit2->Text);
    double suma = StrToFloat(Edit3->Text);
    double result;

    // якщо вибрана "Купівля"
    if (RadioButton1->Checked)
    {
        result = suma * kursKupivli;
    }
    // якщо вибрана "Продаж"
    else
    {
        result = suma * kursProdazhu;
    }

    // виводимо результат
    Edit4->Text = FloatToStr(result);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonClearClick(TObject *Sender)
{
 Edit1->Text = "";
    Edit2->Text = "";
    Edit3->Text = "";
    Edit4->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonExitClick(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------
