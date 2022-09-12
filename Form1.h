//Timothy Edwards - "Challenge 1: LFSR"
//Created with Microsoft Visual Studio Express 2012 for Windows Desktop

#pragma once
#include "DataProcessing.h"

namespace Tester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  theOutput;
	protected: 
	private: System::Windows::Forms::TextBox^  initValue;
	private: System::Windows::Forms::Label^  labelInitValue;
	private: System::Windows::Forms::TextBox^  dataInput;
	private: System::Windows::Forms::Label^  labelData;
	private: System::Windows::Forms::Label^  labelOutput;
	private: System::Windows::Forms::Button^  btnProcess;
	private: System::Windows::Forms::RadioButton^  radioAscii;
	private: System::Windows::Forms::RadioButton^  radioHex;

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
			this->theOutput = (gcnew System::Windows::Forms::TextBox());
			this->initValue = (gcnew System::Windows::Forms::TextBox());
			this->labelInitValue = (gcnew System::Windows::Forms::Label());
			this->dataInput = (gcnew System::Windows::Forms::TextBox());
			this->labelData = (gcnew System::Windows::Forms::Label());
			this->labelOutput = (gcnew System::Windows::Forms::Label());
			this->btnProcess = (gcnew System::Windows::Forms::Button());
			this->radioAscii = (gcnew System::Windows::Forms::RadioButton());
			this->radioHex = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// theOutput
			// 
			this->theOutput->Location = System::Drawing::Point(15, 101);
			this->theOutput->Multiline = true;
			this->theOutput->Name = L"theOutput";
			this->theOutput->ReadOnly = true;
			this->theOutput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->theOutput->Size = System::Drawing::Size(160, 119);
			this->theOutput->TabIndex = 0;
			// 
			// initValue
			// 
			this->initValue->Location = System::Drawing::Point(15, 25);
			this->initValue->Name = L"initValue";
			this->initValue->Size = System::Drawing::Size(100, 20);
			this->initValue->TabIndex = 1;
			// 
			// labelInitValue
			// 
			this->labelInitValue->AutoSize = true;
			this->labelInitValue->Location = System::Drawing::Point(12, 9);
			this->labelInitValue->Name = L"labelInitValue";
			this->labelInitValue->Size = System::Drawing::Size(92, 13);
			this->labelInitValue->TabIndex = 2;
			this->labelInitValue->Text = L"Initial Value (Hex):";
			// 
			// dataInput
			// 
			this->dataInput->Location = System::Drawing::Point(124, 25);
			this->dataInput->Name = L"dataInput";
			this->dataInput->Size = System::Drawing::Size(100, 20);
			this->dataInput->TabIndex = 1;
			// 
			// labelData
			// 
			this->labelData->AutoSize = true;
			this->labelData->Location = System::Drawing::Point(121, 9);
			this->labelData->Name = L"labelData";
			this->labelData->Size = System::Drawing::Size(33, 13);
			this->labelData->TabIndex = 2;
			this->labelData->Text = L"Data:";
			// 
			// labelOutput
			// 
			this->labelOutput->AutoSize = true;
			this->labelOutput->Location = System::Drawing::Point(12, 85);
			this->labelOutput->Name = L"labelOutput";
			this->labelOutput->Size = System::Drawing::Size(42, 13);
			this->labelOutput->TabIndex = 3;
			this->labelOutput->Text = L"Output:";
			// 
			// btnProcess
			// 
			this->btnProcess->Location = System::Drawing::Point(15, 52);
			this->btnProcess->Name = L"btnProcess";
			this->btnProcess->Size = System::Drawing::Size(75, 23);
			this->btnProcess->TabIndex = 4;
			this->btnProcess->Text = L"Process";
			this->btnProcess->UseVisualStyleBackColor = true;
			this->btnProcess->Click += gcnew System::EventHandler(this, &Form1::btnProcess_Click);
			// 
			// radioAscii
			// 
			this->radioAscii->AutoSize = true;
			this->radioAscii->Checked = true;
			this->radioAscii->Location = System::Drawing::Point(231, 27);
			this->radioAscii->Name = L"radioAscii";
			this->radioAscii->Size = System::Drawing::Size(52, 17);
			this->radioAscii->TabIndex = 5;
			this->radioAscii->TabStop = true;
			this->radioAscii->Text = L"ASCII";
			this->radioAscii->UseVisualStyleBackColor = true;
			// 
			// radioHex
			// 
			this->radioHex->AutoSize = true;
			this->radioHex->Location = System::Drawing::Point(289, 27);
			this->radioHex->Name = L"radioHex";
			this->radioHex->Size = System::Drawing::Size(44, 17);
			this->radioHex->TabIndex = 5;
			this->radioHex->Text = L"Hex";
			this->radioHex->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 237);
			this->Controls->Add(this->radioHex);
			this->Controls->Add(this->radioAscii);
			this->Controls->Add(this->btnProcess);
			this->Controls->Add(this->labelOutput);
			this->Controls->Add(this->labelData);
			this->Controls->Add(this->dataInput);
			this->Controls->Add(this->labelInitValue);
			this->Controls->Add(this->initValue);
			this->Controls->Add(this->theOutput);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Challenge 1: LFSR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnProcess_Click(System::Object^  sender, System::EventArgs^  e) {
		//Clears output for new content.
		theOutput->Text = "";

		/*Attempts to perform encryption.  An exception would occur due to an incorrect data input
		format.*/
		try
		{
			//Start setting up data input to perform crypt on.
			unsigned char * dataToInput;
			int lengthToInput;

			if(radioAscii->Checked) //If data input is ASCII.
			{
				//Getting unsigned char array for data input and getting length of input.
				lengthToInput = dataInput->Text->Length;
				dataToInput = new unsigned char[lengthToInput];

				//Getting input characters from text box.
				for(int onChar = 0; onChar < lengthToInput; onChar++)
				{
					dataToInput[onChar] = (unsigned char)dataInput->Text->default[onChar];
				}
			}
			else if(radioHex->Checked) //If data input is HEX
			{
				//Converting data input hex to bytes.  Then, converting bytes to unsigned chars.
				array<Byte>^ bytesFromHex = hexToBytes(dataInput->Text);
				lengthToInput = bytesFromHex->Length;
				dataToInput = new unsigned char[lengthToInput];

				//Looping through bytes and converting them to chars.
				for(int onByte = 0; onByte < lengthToInput; onByte++)
				{
					dataToInput[onByte] = (unsigned char)bytesFromHex[onByte];
				}
			}

			//Running "Crypt(...)" function.
			unsigned char * encryptionOutput = Crypt(dataToInput, lengthToInput,
						int::Parse(initValue->Text,
						System::Globalization::NumberStyles::HexNumber));

			//Converting "Crypt(...)" function output to byte array.
			array<Byte>^ encryptionOutBytes = gcnew array<Byte>(lengthToInput);
			for(int onByte = 0; onByte < lengthToInput; onByte++)
			{
				encryptionOutBytes[onByte] = (Byte)encryptionOutput[onByte];
			}

			//Convert byte array to text string and display it in a text box.
			theOutput->Text = "Result (in HEX): " + bytesToHex(encryptionOutBytes);
		}
		catch(System::Exception ^exception) //Exception likely due to bad user input
		{
			//Display error message.
			MessageBox::Show(exception->Message + "\r\n\r\nCheck data inputed.");
		}
	}
};
}

