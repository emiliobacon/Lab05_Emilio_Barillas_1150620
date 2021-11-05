#pragma once
#include "ListaBaraja.h"
#include "PilaMazo.h"
#include <stdlib.h>
#include <time.h>

namespace Lab05EmilioBarillas1150620 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		ListaBaraja^ MiListaBaraja = gcnew ListaBaraja();
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblGrupo1;
	private: System::Windows::Forms::Label^ lblGrupo2;
	private: System::Windows::Forms::Label^ lblGrupo4;
	private: System::Windows::Forms::Label^ lblGrupo3;
	private: System::Windows::Forms::Label^ lblGrupo6;
	private: System::Windows::Forms::Label^ lblGrupo5;
	private: System::Windows::Forms::Label^ lblGrupo7;
	public:
		PilaMazo^ MiPilaMazo = gcnew PilaMazo();
		PilaMazo^ Grupo1 = gcnew PilaMazo();
		PilaMazo^ Grupo2 = gcnew PilaMazo();
		PilaMazo^ Grupo3 = gcnew PilaMazo();
		PilaMazo^ Grupo4 = gcnew PilaMazo();
		PilaMazo^ Grupo5 = gcnew PilaMazo();
		PilaMazo^ Grupo6 = gcnew PilaMazo();
		PilaMazo^ Grupo7 = gcnew PilaMazo();
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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

	protected:

	protected:



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblGrupo1 = (gcnew System::Windows::Forms::Label());
			this->lblGrupo2 = (gcnew System::Windows::Forms::Label());
			this->lblGrupo4 = (gcnew System::Windows::Forms::Label());
			this->lblGrupo3 = (gcnew System::Windows::Forms::Label());
			this->lblGrupo6 = (gcnew System::Windows::Forms::Label());
			this->lblGrupo5 = (gcnew System::Windows::Forms::Label());
			this->lblGrupo7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(105, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// lblGrupo1
			// 
			this->lblGrupo1->AutoSize = true;
			this->lblGrupo1->Location = System::Drawing::Point(220, 24);
			this->lblGrupo1->Name = L"lblGrupo1";
			this->lblGrupo1->Size = System::Drawing::Size(35, 13);
			this->lblGrupo1->TabIndex = 2;
			this->lblGrupo1->Text = L"label3";
			// 
			// lblGrupo2
			// 
			this->lblGrupo2->AutoSize = true;
			this->lblGrupo2->Location = System::Drawing::Point(261, 24);
			this->lblGrupo2->Name = L"lblGrupo2";
			this->lblGrupo2->Size = System::Drawing::Size(35, 13);
			this->lblGrupo2->TabIndex = 3;
			this->lblGrupo2->Text = L"label4";
			// 
			// lblGrupo4
			// 
			this->lblGrupo4->AutoSize = true;
			this->lblGrupo4->Location = System::Drawing::Point(343, 24);
			this->lblGrupo4->Name = L"lblGrupo4";
			this->lblGrupo4->Size = System::Drawing::Size(35, 13);
			this->lblGrupo4->TabIndex = 5;
			this->lblGrupo4->Text = L"label5";
			// 
			// lblGrupo3
			// 
			this->lblGrupo3->AutoSize = true;
			this->lblGrupo3->Location = System::Drawing::Point(302, 24);
			this->lblGrupo3->Name = L"lblGrupo3";
			this->lblGrupo3->Size = System::Drawing::Size(35, 13);
			this->lblGrupo3->TabIndex = 4;
			this->lblGrupo3->Text = L"label6";
			// 
			// lblGrupo6
			// 
			this->lblGrupo6->AutoSize = true;
			this->lblGrupo6->Location = System::Drawing::Point(424, 24);
			this->lblGrupo6->Name = L"lblGrupo6";
			this->lblGrupo6->Size = System::Drawing::Size(35, 13);
			this->lblGrupo6->TabIndex = 7;
			this->lblGrupo6->Text = L"label7";
			// 
			// lblGrupo5
			// 
			this->lblGrupo5->AutoSize = true;
			this->lblGrupo5->Location = System::Drawing::Point(383, 24);
			this->lblGrupo5->Name = L"lblGrupo5";
			this->lblGrupo5->Size = System::Drawing::Size(35, 13);
			this->lblGrupo5->TabIndex = 6;
			this->lblGrupo5->Text = L"label8";
			// 
			// lblGrupo7
			// 
			this->lblGrupo7->AutoSize = true;
			this->lblGrupo7->Location = System::Drawing::Point(462, 24);
			this->lblGrupo7->Name = L"lblGrupo7";
			this->lblGrupo7->Size = System::Drawing::Size(35, 13);
			this->lblGrupo7->TabIndex = 8;
			this->lblGrupo7->Text = L"label9";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 355);
			this->Controls->Add(this->lblGrupo7);
			this->Controls->Add(this->lblGrupo6);
			this->Controls->Add(this->lblGrupo5);
			this->Controls->Add(this->lblGrupo4);
			this->Controls->Add(this->lblGrupo3);
			this->Controls->Add(this->lblGrupo2);
			this->Controls->Add(this->lblGrupo1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void LlenarListaBaraja()
		{
			for (size_t i = 0; i < 13; i++)
			{
				MiListaBaraja->InsertarNuevo(i+1, "R");
			}
			for (size_t i = 0; i < 13; i++)
			{
				MiListaBaraja->InsertarNuevo(i + 1, "R");
			}
			for (size_t i = 0; i < 13; i++)
			{
				MiListaBaraja->InsertarNuevo(i + 1, "N");
			}
			for (size_t i = 0; i < 13; i++)
			{
				MiListaBaraja->InsertarNuevo(i + 1, "N");
			}
		}
	void LlenaPilaMazo()
	{
		
	}
	void Actualizar()
	{
		lblGrupo1->Text = Grupo1->Recorrer();
		lblGrupo2->Text = Grupo2->Recorrer();
		lblGrupo3->Text = Grupo3->Recorrer();
		lblGrupo4->Text = Grupo4->Recorrer();
		lblGrupo5->Text = Grupo5->Recorrer();
		lblGrupo6->Text = Grupo6->Recorrer();
		lblGrupo7->Text = Grupo7->Recorrer();
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LlenarListaBaraja();
		LlenaPilaMazo();
		label1->Text = MiPilaMazo->Recorrer();
		label2->Text = MiListaBaraja->Recorrer();


	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		
	}
	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		
	}
	};



}
