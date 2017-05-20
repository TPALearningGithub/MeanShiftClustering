#pragma once
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <msclr\marshal_cppstd.h>



namespace UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cv;
	using namespace System::IO;
	/// <summary>
	/// Summary for frmSegment
	/// </summary>
	public ref class frmSegment : public System::Windows::Forms::Form
	{
	private: System::String^ tempdir = "..\\temp\\out.jpg";
	public:
		frmSegment(void)
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
		~frmSegment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel6;
	protected:



	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnX;
	private: System::Windows::Forms::Label^  Title;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Panel^  panel5;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pbxOutput;

	private: System::Windows::Forms::PictureBox^  pbxInput;

	private: System::Windows::Forms::Button^  btnRun;

	private: System::Windows::Forms::Panel^  pnlTitle;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnBrowse;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::OpenFileDialog^  op;
	private: System::Windows::Forms::SaveFileDialog^  sv;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSegment::typeid));
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnBrowse = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlTitle = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pbxOutput = (gcnew System::Windows::Forms::PictureBox());
			this->pbxInput = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRun = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->op = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sv = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panel6->SuspendLayout();
			this->pnlTitle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxOutput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxInput))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->btnSave);
			this->panel6->Controls->Add(this->btnBrowse);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->pnlTitle);
			this->panel6->Controls->Add(this->pbxOutput);
			this->panel6->Controls->Add(this->pbxInput);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Controls->Add(this->btnRun);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(1, 33);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(598, 366);
			this->panel6->TabIndex = 11;
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::Gainsboro;
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(502, 294);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(85, 32);
			this->btnSave->TabIndex = 13;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &frmSegment::btnSave_Click);
			// 
			// btnBrowse
			// 
			this->btnBrowse->BackColor = System::Drawing::Color::Gainsboro;
			this->btnBrowse->FlatAppearance->BorderSize = 0;
			this->btnBrowse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBrowse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBrowse->Location = System::Drawing::Point(185, 294);
			this->btnBrowse->Name = L"btnBrowse";
			this->btnBrowse->Size = System::Drawing::Size(85, 32);
			this->btnBrowse->TabIndex = 12;
			this->btnBrowse->Text = L"Browse";
			this->btnBrowse->UseVisualStyleBackColor = false;
			this->btnBrowse->Click += gcnew System::EventHandler(this, &frmSegment::btnBrowse_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(324, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Segmented image";
			// 
			// pnlTitle
			// 
			this->pnlTitle->Controls->Add(this->panel7);
			this->pnlTitle->Controls->Add(this->label2);
			this->pnlTitle->Location = System::Drawing::Point(0, 18);
			this->pnlTitle->Name = L"pnlTitle";
			this->pnlTitle->Size = System::Drawing::Size(598, 36);
			this->pnlTitle->TabIndex = 10;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Gainsboro;
			this->panel7->Location = System::Drawing::Point(0, 35);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(598, 1);
			this->panel7->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(598, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Image Segmentation";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pbxOutput
			// 
			this->pbxOutput->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pbxOutput->Location = System::Drawing::Point(327, 95);
			this->pbxOutput->Name = L"pbxOutput";
			this->pbxOutput->Size = System::Drawing::Size(260, 193);
			this->pbxOutput->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbxOutput->TabIndex = 9;
			this->pbxOutput->TabStop = false;
			// 
			// pbxInput
			// 
			this->pbxInput->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pbxInput->Location = System::Drawing::Point(11, 95);
			this->pbxInput->Name = L"pbxInput";
			this->pbxInput->Size = System::Drawing::Size(259, 193);
			this->pbxInput->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbxInput->TabIndex = 8;
			this->pbxInput->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(11, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Choose your picture";
			// 
			// btnRun
			// 
			this->btnRun->BackColor = System::Drawing::Color::White;
			this->btnRun->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRun.BackgroundImage")));
			this->btnRun->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnRun->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->btnRun->FlatAppearance->BorderSize = 0;
			this->btnRun->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRun->Location = System::Drawing::Point(276, 172);
			this->btnRun->Name = L"btnRun";
			this->btnRun->Size = System::Drawing::Size(45, 45);
			this->btnRun->TabIndex = 2;
			this->btnRun->UseVisualStyleBackColor = false;
			this->btnRun->Visible = false;
			this->btnRun->Click += gcnew System::EventHandler(this, &frmSegment::btnRun_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 1);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1, 398);
			this->panel4->TabIndex = 9;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(599, 1);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1, 398);
			this->panel3->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 399);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(600, 1);
			this->panel2->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 1);
			this->panel1->TabIndex = 6;
			// 
			// btnX
			// 
			this->btnX->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnX.BackgroundImage")));
			this->btnX->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnX->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnX->FlatAppearance->BorderSize = 0;
			this->btnX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnX->Location = System::Drawing::Point(548, 0);
			this->btnX->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnX->Name = L"btnX";
			this->btnX->Size = System::Drawing::Size(50, 32);
			this->btnX->TabIndex = 5;
			this->btnX->UseVisualStyleBackColor = true;
			this->btnX->Click += gcnew System::EventHandler(this, &frmSegment::btnX_Click);
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::Color::White;
			this->Title->Location = System::Drawing::Point(56, 8);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(81, 15);
			this->Title->TabIndex = 6;
			this->Title->Text = L"Segmentation";
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.BackgroundImage")));
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBack->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Location = System::Drawing::Point(0, 0);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(50, 32);
			this->btnBack->TabIndex = 7;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &frmSegment::btnBack_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel5->Controls->Add(this->btnBack);
			this->panel5->Controls->Add(this->Title);
			this->panel5->Controls->Add(this->btnX);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(1, 1);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(598, 32);
			this->panel5->TabIndex = 10;
			// 
			// op
			// 
			this->op->FileName = L"openFileDialog1";
			this->op->Filter = L"Image Files|*.png;*jpg;*.bmp";
			// 
			// sv
			// 
			this->sv->Filter = L"|*.jpg";
			// 
			// frmSegment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(600, 400);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmSegment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmSegment";
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->pnlTitle->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxOutput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxInput))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnX_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void btnBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
		if (op->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pbxInput->Image = Image::FromFile(op->FileName);
			btnRun->Visible = true;
		}
	}

	private: System::Void btnRun_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string fileName = msclr::interop::marshal_as<std::string>(op->FileName);
		Mat in = imread(fileName), out;
		pyrMeanShiftFiltering(in, out, 20, 45, 3);
		delete pbxOutput->Image;
		string temp = "..\\temp\\out.jpg";
		imwrite(temp, out);
		pbxOutput->Image = Image::FromFile(tempdir);
	}

	public:Bitmap^ ToBitmap(cv::Mat& colorImage)
	{
		cv::cvtColor(colorImage, colorImage, CV_BGR2RGBA);
		System::IntPtr ptr(colorImage.ptr());
		System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		return b;
	}

	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (sv->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if (File::Exists(sv->FileName)) {
				if (sv->FileName == tempdir)
				{
					return;
				}
				try
				{
					File::Delete(sv->FileName);
				}
				catch (const std::exception&)
				{

				}
			}
			try
			{
				File::Copy(tempdir, sv->FileName);

			}
			catch (const std::exception&)
			{

			}
		}
	}
};
}
