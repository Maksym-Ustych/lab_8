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
void __fastcall TForm1::BtnShowClick(TObject *Sender)
{
         // Збираємо дані з полів Edit
    String name = EditName->Text;
    String surname = EditSurname->Text;
    String age = EditAge->Text;
    String group = EditGroup->Text;

    // Відображаємо повідомлення з даними
    ShowMessage("Ім'я: " + name + "\n"
                "Прізвище: " + surname + "\n"
                "Вік: " + age + "\n"
				"Група: " + group);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BtnSaveClick(TObject *Sender)
{
     String name = EditName->Text;
    String surname = EditSurname->Text;
    String age = EditAge->Text;
    String group = EditGroup->Text;

    ShowMessage("Ім’я: " + name +
                "\nПрізвище: " + surname +
                "\nВік: " + age +
				"\nГрупа: " + group);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BtnClearClick(TObject *Sender)
{
// Очищаємо всі поля вводу
    EditName->Text = "";
    EditSurname->Text = "";
    EditAge->Text = "";
    EditGroup->Text = "";

    // Фокус на перше поле
    EditName->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnExitClick(TObject *Sender)
{
Close(); // закриває форму та програму
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Image1->Visible = true;   // Портретна фотографія показується
    Image2->Visible = false;  // Художня фотографія ховається
    Image3->Visible = false;  // Третя фотографія ховається
    Button1->Caption = "Художня фотографія"; // Змінюємо підпис
    ButtonRemove->Visible = true; // Кнопка "Забрати фотографію" стає видимою
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
   Image1->Visible = false;
    Image2->Visible = true;
    Image3->Visible = false;
    Button1->Caption = "Третя фотографія";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
         Image1->Visible = false;
    Image2->Visible = false;
    Image3->Visible = true;
    Button1->Caption = "Портретна фотографія";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonRemoveClick(TObject *Sender)
{
Image1->Visible = false;
    Image2->Visible = false;
    Image3->Visible = false;
    ButtonRemove->Visible = false;
    Button1->Caption = "Портретна фотографія";
}
//---------------------------------------------------------------------------

