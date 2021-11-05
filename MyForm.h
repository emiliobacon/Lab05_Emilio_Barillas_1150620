#pragma once
#include "ListaBaraja.h"
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(364, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 355);
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

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LlenarListaBaraja();
		label1->Text = MiListaBaraja->Recorrer();


	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		
	}
	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		
	}
	};



}
