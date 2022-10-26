#pragma once
#include "Pila.h"
#include "listaDoble.h"
#include <string>
#include <random>
#include <array>
namespace ProyectoEstructurasDeDatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Pila^ grupo1 = gcnew Pila;
		Pila^ grupo2 = gcnew Pila;
		Pila^ grupo3 = gcnew Pila;
		Pila^ grupo4 = gcnew Pila;
		Pila^ grupo5 = gcnew Pila;
		Pila^ grupo6 = gcnew Pila;
		Pila^ grupo7 = gcnew Pila;
		Pila^ aux = gcnew Pila;
		Pila^ pilamazo = gcnew Pila;
		Pila^ sostieneLugares = gcnew Pila;
		listaDoble^ mazo = gcnew listaDoble;
		int exitos1 = 0;
		int exitos2 = 0;
		int exitos3 = 0;
		int exitos4 = 0;
		int exitos5 = 0;
		int exitos6 = 0;
		int exitos7 = 0;
	private: System::Windows::Forms::Button^ button_bar;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::Button^ button_moverGrupos;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_grupoEmisor;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_GrupoReceptor;
	private: System::Windows::Forms::ListBox^ listBox_mano;
	private: System::Windows::Forms::Button^ buttonMoverDeBaraja;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_selectorBaraja;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_selectorBarajaAGrupo;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_cambiar;
	public:
		Pila^ mano = gcnew Pila;
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ listBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button_bar = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->button_moverGrupos = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_grupoEmisor = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_GrupoReceptor = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBox_mano = (gcnew System::Windows::Forms::ListBox());
			this->buttonMoverDeBaraja = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_selectorBaraja = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_selectorBarajaAGrupo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_cambiar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_grupoEmisor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_GrupoReceptor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_selectorBaraja))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_selectorBarajaAGrupo))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Grupo 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(199, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Grupo 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(322, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Grupo 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(465, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Grupo 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(612, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Grupo 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(771, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Grupo 6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(893, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Grupo 7";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(69, 54);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(63, 95);
			this->listBox1->TabIndex = 7;
			// 
			// button_bar
			// 
			this->button_bar->Location = System::Drawing::Point(455, 357);
			this->button_bar->Name = L"button_bar";
			this->button_bar->Size = System::Drawing::Size(63, 23);
			this->button_bar->TabIndex = 8;
			this->button_bar->Text = L"Barajear";
			this->button_bar->UseVisualStyleBackColor = true;
			this->button_bar->Click += gcnew System::EventHandler(this, &MyForm::button_bar_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(187, 54);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(63, 95);
			this->listBox2->TabIndex = 9;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(309, 54);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(63, 95);
			this->listBox3->TabIndex = 10;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(455, 54);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(63, 95);
			this->listBox4->TabIndex = 11;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(604, 54);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(63, 95);
			this->listBox5->TabIndex = 12;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(757, 54);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(63, 95);
			this->listBox6->TabIndex = 13;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(881, 54);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(63, 95);
			this->listBox7->TabIndex = 14;
			// 
			// button_moverGrupos
			// 
			this->button_moverGrupos->Enabled = false;
			this->button_moverGrupos->Location = System::Drawing::Point(187, 243);
			this->button_moverGrupos->Name = L"button_moverGrupos";
			this->button_moverGrupos->Size = System::Drawing::Size(63, 23);
			this->button_moverGrupos->TabIndex = 15;
			this->button_moverGrupos->Text = L"Mover";
			this->button_moverGrupos->UseVisualStyleBackColor = true;
			this->button_moverGrupos->Click += gcnew System::EventHandler(this, &MyForm::button_moverGrupos_Click);
			// 
			// numericUpDown_grupoEmisor
			// 
			this->numericUpDown_grupoEmisor->Location = System::Drawing::Point(69, 206);
			this->numericUpDown_grupoEmisor->Name = L"numericUpDown_grupoEmisor";
			this->numericUpDown_grupoEmisor->Size = System::Drawing::Size(63, 20);
			this->numericUpDown_grupoEmisor->TabIndex = 16;
			// 
			// numericUpDown_GrupoReceptor
			// 
			this->numericUpDown_GrupoReceptor->Location = System::Drawing::Point(309, 206);
			this->numericUpDown_GrupoReceptor->Name = L"numericUpDown_GrupoReceptor";
			this->numericUpDown_GrupoReceptor->Size = System::Drawing::Size(63, 20);
			this->numericUpDown_GrupoReceptor->TabIndex = 17;
			// 
			// listBox_mano
			// 
			this->listBox_mano->FormattingEnabled = true;
			this->listBox_mano->Location = System::Drawing::Point(757, 253);
			this->listBox_mano->Name = L"listBox_mano";
			this->listBox_mano->Size = System::Drawing::Size(63, 95);
			this->listBox_mano->TabIndex = 18;
			// 
			// buttonMoverDeBaraja
			// 
			this->buttonMoverDeBaraja->Enabled = false;
			this->buttonMoverDeBaraja->Location = System::Drawing::Point(757, 354);
			this->buttonMoverDeBaraja->Name = L"buttonMoverDeBaraja";
			this->buttonMoverDeBaraja->Size = System::Drawing::Size(63, 23);
			this->buttonMoverDeBaraja->TabIndex = 19;
			this->buttonMoverDeBaraja->Text = L"Mover";
			this->buttonMoverDeBaraja->UseVisualStyleBackColor = true;
			this->buttonMoverDeBaraja->Click += gcnew System::EventHandler(this, &MyForm::buttonMoverDeBaraja_Click);
			// 
			// numericUpDown_selectorBaraja
			// 
			this->numericUpDown_selectorBaraja->Location = System::Drawing::Point(940, 373);
			this->numericUpDown_selectorBaraja->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 24, 0, 0, 0 });
			this->numericUpDown_selectorBaraja->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_selectorBaraja->Name = L"numericUpDown_selectorBaraja";
			this->numericUpDown_selectorBaraja->Size = System::Drawing::Size(63, 20);
			this->numericUpDown_selectorBaraja->TabIndex = 20;
			this->numericUpDown_selectorBaraja->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown_selectorBarajaAGrupo
			// 
			this->numericUpDown_selectorBarajaAGrupo->Location = System::Drawing::Point(826, 354);
			this->numericUpDown_selectorBarajaAGrupo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			this->numericUpDown_selectorBarajaAGrupo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_selectorBarajaAGrupo->Name = L"numericUpDown_selectorBarajaAGrupo";
			this->numericUpDown_selectorBarajaAGrupo->Size = System::Drawing::Size(63, 20);
			this->numericUpDown_selectorBarajaAGrupo->TabIndex = 21;
			this->numericUpDown_selectorBarajaAGrupo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(826, 243);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Mano";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_cambiar
			// 
			this->button_cambiar->Enabled = false;
			this->button_cambiar->Location = System::Drawing::Point(757, 192);
			this->button_cambiar->Name = L"button_cambiar";
			this->button_cambiar->Size = System::Drawing::Size(63, 44);
			this->button_cambiar->TabIndex = 24;
			this->button_cambiar->Text = L"Cambiar mano";
			this->button_cambiar->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 392);
			this->Controls->Add(this->button_cambiar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown_selectorBarajaAGrupo);
			this->Controls->Add(this->numericUpDown_selectorBaraja);
			this->Controls->Add(this->buttonMoverDeBaraja);
			this->Controls->Add(this->listBox_mano);
			this->Controls->Add(this->numericUpDown_GrupoReceptor);
			this->Controls->Add(this->numericUpDown_grupoEmisor);
			this->Controls->Add(this->button_moverGrupos);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button_bar);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_grupoEmisor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_GrupoReceptor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_selectorBaraja))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_selectorBarajaAGrupo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void button_bar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		buttonMoverDeBaraja->Enabled = true;
		button_moverGrupos->Enabled = true;
		aux->Limpiar();
		pilamazo->Limpiar();
		grupo1->Limpiar();
		grupo2->Limpiar();
		grupo3->Limpiar();
		grupo4->Limpiar();
		grupo5->Limpiar();
		grupo6->Limpiar();
		grupo7->Limpiar();
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		listBox3->Items->Clear();
		listBox4->Items->Clear();
		listBox5->Items->Clear();
		listBox6->Items->Clear();
		listBox7->Items->Clear();
		listBox_mano->Items->Clear();
		mazo->InsertarNuevo("13R");
		mazo->InsertarNuevo("04R");
		mazo->InsertarNuevo("03R");
		mazo->InsertarNuevo("09N");
		mazo->InsertarNuevo("09N");
		mazo->InsertarNuevo("01N");
		mazo->InsertarNuevo("06N");
		mazo->InsertarNuevo("11R");
		mazo->InsertarNuevo("03N");
		mazo->InsertarNuevo("02N");
		mazo->InsertarNuevo("11R");
		mazo->InsertarNuevo("03N");
		mazo->InsertarNuevo("01N");
		mazo->InsertarNuevo("07R");
		mazo->InsertarNuevo("07N");
		mazo->InsertarNuevo("02N");
		mazo->InsertarNuevo("06R");
		mazo->InsertarNuevo("05R");
		mazo->InsertarNuevo("11N");
		mazo->InsertarNuevo("07R");
		mazo->InsertarNuevo("06N");
		mazo->InsertarNuevo("10N");
		mazo->InsertarNuevo("12N");
		mazo->InsertarNuevo("10N");
		mazo->InsertarNuevo("04N");
		mazo->InsertarNuevo("08N");
		mazo->InsertarNuevo("01R");
		mazo->InsertarNuevo("02R");
		mazo->InsertarNuevo("02R");
		mazo->InsertarNuevo("13N");
		mazo->InsertarNuevo("07N");
		mazo->InsertarNuevo("08R");
		mazo->InsertarNuevo("08N");
		mazo->InsertarNuevo("06R");
		mazo->InsertarNuevo("11N");
		mazo->InsertarNuevo("04N");
		mazo->InsertarNuevo("13N");
		mazo->InsertarNuevo("12N");
		mazo->InsertarNuevo("04R");
		mazo->InsertarNuevo("10R");
		mazo->InsertarNuevo("03R");
		mazo->InsertarNuevo("05R");
		mazo->InsertarNuevo("01R");
		mazo->InsertarNuevo("09R");
		mazo->InsertarNuevo("10R");
		mazo->InsertarNuevo("05N");
		mazo->InsertarNuevo("12R");
		mazo->InsertarNuevo("09R");
		mazo->InsertarNuevo("13R");
		mazo->InsertarNuevo("05N");
		mazo->InsertarNuevo("08R");
		mazo->InsertarNuevo("12R");
		
		std::string arr[52] = { "13R","04R","03R","09N","09N","01N","06N","11R","03N","02N","11R","03N","01N","07R","07N","02N","06R","05R","11N","07R","06N","10N","12N","10N","04N","08N","01R","02R","02R","13N","07N","08R","08N","06R","11N","04N","13N","12N","04R","10R","03R","05R","01R","09R","10R","05N","12R","09R","13R","05N","08R","12R" };
		int numGrup1 = 1;
		int numGrup2 = 2;
		int numGrup3 = 3;
		int numGrup4 = 4;
		int numGrup5 = 5;
		int numGrup6 = 6;
		int numGrup7 = 7;
		int numMano = 3;
		int semilla = 0;
		int cantrip = 52;
		String^ cartaTransferible;
		while (cantrip > 0)
		{
			semilla = rand() % cantrip;
			pilamazo->Insertar(mazo->EliminarEnPosicion(semilla));
			//pilamazo->Insertar(msclr::interop::marshal_as String^ >(arr[semilla]));
			cantrip--;
		}
		for (int i = 0; i < 28; i++)
		{
			if (grupo1->Dimension() == 0)
			{
				grupo1->Insertar(pilamazo->Quitar());
				listBox1->Items->Add(Convert::ToString(numGrup1)+"."+ grupo1->Cima());
				numGrup1;
			}
			if (grupo2->Dimension() <= 1)
			{
				grupo2->Insertar(pilamazo->Quitar());
				listBox2->Items->Add(Convert::ToString(numGrup2) + "." + grupo2->Cima());
				numGrup2--;
			}
			if (grupo3->Dimension() <= 2)
			{
				grupo3->Insertar(pilamazo->Quitar());
				listBox3->Items->Add(Convert::ToString(numGrup3) + "." + grupo3->Cima());
				numGrup3--;
			}
			if (grupo4->Dimension() <= 3)
			{
				grupo4->Insertar(pilamazo->Quitar());
				listBox4->Items->Add(Convert::ToString(numGrup4) + "." + grupo4->Cima());
				numGrup4--;
			}
			if (grupo5->Dimension() <= 4)
			{
				grupo5->Insertar(pilamazo->Quitar());
				listBox5->Items->Add(Convert::ToString(numGrup5) + "." + grupo5->Cima());
				numGrup5--;
			}
			if (grupo6->Dimension() <= 5)
			{
				grupo6->Insertar(pilamazo->Quitar());
				listBox6->Items->Add(Convert::ToString(numGrup6) + "." + grupo6->Cima());
				numGrup6--;
			}
			if (grupo7->Dimension() <= 6)
			{
				grupo7->Insertar(pilamazo->Quitar());
				listBox7->Items->Add(Convert::ToString(numGrup7) + "." + grupo7->Cima());
				numGrup7--;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			aux->Insertar(pilamazo->Quitar());
			listBox_mano->Items->Add(Convert::ToString(numMano) + "." + aux->Cima());
			numMano--;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	exit(1);
}
private: System::Void buttonMoverDeBaraja_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int carta = Convert::ToInt16(numericUpDown_selectorBaraja->Text);
	int objetivos = Convert::ToInt16(numericUpDown_selectorBarajaAGrupo->Text);
	String^ comparadorA;
	String^ comparadorB;
	String^ numerosA;
	String^ numerosB;
	Pila^ prueba;
	ListBox^ temporal;
	switch (objetivos)
	{
	case(1):
		
		prueba = grupo1;
		temporal = listBox1;
		break;
	case(2):
		prueba = grupo2;
		temporal = listBox2;
		break;
	case(3):
		prueba = grupo3;
		temporal = listBox3;
		break;
	case(4):
		prueba = grupo4;
		temporal = listBox4;
		break;
	case(5):
		prueba = grupo5;
		temporal = listBox5;
		break;
	case(6):
		prueba = grupo6;
		temporal = listBox6;
		break;
	case(7):
		prueba = grupo6;
		temporal = listBox7;
		break;
	default:
		break;
	}
	comparadorA = aux->Cima();
	comparadorB = prueba->Cima();
	numerosA = Convert::ToString(comparadorA[0]) + Convert::ToString(comparadorA[1]);
	numerosB = Convert::ToString(comparadorB[0]) + Convert::ToString(comparadorB[1]);
	int cuentaA = aux->Dimension();
	int cuentaB = prueba->Dimension();
	if (Convert::ToInt16(numerosA) == Convert::ToInt16(numerosB)-1 && comparadorA[2] != comparadorB[2])
	{

		prueba->Insertar(aux->Quitar());
		temporal->Items->Clear();
		listBox_mano->Items->Clear();
		for (int i = 0; i < aux->Dimension(); i++)
		{
			mano->Insertar(aux->Quitar());
		}
		for (int i = 0; i < mano->Dimension(); i++)
		{
			aux->Insertar(mano->Quitar());
			listBox_mano->Items->Add(Convert::ToString(cuentaA) + "." + aux->Cima());
			cuentaA--;
		}
		for (int i = 0; i < prueba->Dimension(); i++)
		{
			mano->Insertar(prueba->Quitar());
		}
		for (int i = 0; i < mano->Dimension(); i++)
		{
			prueba->Insertar(mano->Quitar());
			temporal->Items->Add(Convert::ToString(cuentaA) + "." + prueba->Cima());
			cuentaA--;
		}
		//verificador de victorias 
		if (prueba->Dimension() >= 5)
		{
			for (int i = 0; i < prueba->Dimension(); i++)
			{
				if (Convert::ToInt16(numerosA) < Convert::ToInt16(numerosB))
				{
					if (comparadorA[2] != comparadorB[2])
					{
						switch (objetivos)
						{
						case(1):
							exitos1++;
						case(2):
							exitos2++;
						case(3):
							exitos3++;
						case(4):
							exitos4++;
						case(5):
							exitos5++;
						case(6):
							exitos6++;
						case(7):
							exitos7++;
						default:
							break;
						}
					}
				}
			}
		}
	}
	else
	{
		MessageBox::Show("Movimiento Invalido");
	}
	
}
private: System::Void button_moverGrupos_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//E rivoltante 
	int emisor = Convert::ToInt16(numericUpDown_grupoEmisor->Text);
	int receptor = Convert::ToInt16(numericUpDown_GrupoReceptor->Text);
	String^ comparadorA;
	String^ comparadorB;
	String^ numerosA;
	String^ numerosB;
	Pila^ prueba;
	Pila^ prueba2;
	ListBox^ temporal2;
	ListBox^ temporal;
	if (emisor != receptor)
	{
		switch (emisor)
		{
		case(1):
			prueba2 = grupo1;
			temporal2 = listBox1;
			break;
		case(2):
			prueba2 = grupo2;
			temporal2 = listBox2;
			break;
		case(3):
			prueba2 = grupo3;
			temporal2 = listBox3;
			break;
		case(4):
			prueba2 = grupo4;
			temporal2 = listBox4;
			break;
		case(5):
			prueba2 = grupo5;
			temporal2 = listBox5;
			break;
		case(6):
			prueba2 = grupo6;
			temporal2 = listBox6;
			break;
		case(7):
			prueba2 = grupo6;
			temporal2 = listBox7;
			break;
		default:
			break;
		}
		switch (receptor)
		{
		case(1):
			prueba = grupo1;
			temporal = listBox1;
			break;
		case(2):
			prueba = grupo2;
			temporal = listBox2;
			break;
		case(3):
			prueba = grupo3;
			temporal = listBox3;
			break;
		case(4):
			prueba = grupo4;
			temporal = listBox4;
			break;
		case(5):
			prueba = grupo5;
			temporal = listBox5;
			break;
		case(6):
			prueba = grupo6;
			temporal = listBox6;
			break;
		case(7):
			prueba = grupo6;
			temporal = listBox7;
			break;
		default:
			break;
		}
		comparadorA = prueba2->Cima();
		comparadorB = prueba->Cima();
		numerosA = Convert::ToString(comparadorA[0]) + Convert::ToString(comparadorA[1]);
		numerosB = Convert::ToString(comparadorB[0]) + Convert::ToString(comparadorB[1]);
		int cuentaA = prueba2->Dimension();
		int cuentaB = prueba->Dimension();
		if (Convert::ToInt16(numerosA) == Convert::ToInt16(numerosB) - 1 && comparadorA[2] != comparadorB[2])
		{

			prueba->Insertar(prueba2->Quitar());
			temporal->Items->Clear();
			listBox_mano->Items->Clear();
			for (int i = 0; i < prueba2->Dimension(); i++)
			{
				mano->Insertar(prueba2->Quitar());
			}
			for (int i = 0; i < mano->Dimension(); i++)
			{
				prueba2->Insertar(mano->Quitar());
				listBox_mano->Items->Add(Convert::ToString(cuentaA) + "." + prueba2->Cima());
				cuentaA--;
			}
			for (int i = 0; i < prueba->Dimension(); i++)
			{
				mano->Insertar(prueba->Quitar());
			}
			for (int i = 0; i < mano->Dimension(); i++)
			{
				prueba->Insertar(mano->Quitar());
				temporal->Items->Add(Convert::ToString(cuentaA) + "." + prueba->Cima());
				cuentaA--;
			}
			//verificador de victorias 
			if (prueba->Dimension() >= 5)
			{
				for (int i = 0; i < prueba->Dimension(); i++)
				{
					if (Convert::ToInt16(numerosA) < Convert::ToInt16(numerosB))
					{
						if (comparadorA[2] != comparadorB[2])
						{
							switch (receptor)
							{
							case(1):
								exitos1++;
							case(2):
								exitos2++;
							case(3):
								exitos3++;
							case(4):
								exitos4++;
							case(5):
								exitos5++;
							case(6):
								exitos6++;
							case(7):
								exitos7++;
							default:
								break;
							}
						}
					}
				}
			}
		}
		else
		{
			MessageBox::Show("Movimiento Invalido");
		}
	}
}
};
}
