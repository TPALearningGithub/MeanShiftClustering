#pragma once

#include "frmSegment.h"
#include "frmTrack.h"

namespace UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	private: Color OnColor = Color::Gainsboro;
	private: Color OffColor = Color::White;

	private: System::Windows::Forms::Panel^  pnlTrack;

	private: System::Windows::Forms::Panel^  pnlBotTrack;
	private: System::Windows::Forms::Panel^  pnlRightTrack;
	private: System::Windows::Forms::Panel^  pnlLeftTrack;
	private: System::Windows::Forms::Panel^  pnlTopTrack;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Label^  lblNameTrack;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Label^  lblDesTrack;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::PictureBox^  pbxTrack;
			 
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  pnlWindow;


	private: System::Windows::Forms::Label^  Title;
	private: System::Windows::Forms::Button^  btnX;
	private: System::Windows::Forms::Panel^  pnlTitle;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel6;

	private: System::Windows::Forms::Panel^  pnlSegment;

	private: System::Windows::Forms::Panel^  pnlName1;
	private: System::Windows::Forms::Label^  lblNameSegment;
	private: System::Windows::Forms::PictureBox^  pbxSegment;









	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  lblDesSegment;
	private: System::Windows::Forms::Panel^  pnlTopSeg;
	private: System::Windows::Forms::Panel^  pnlBotSeg;
	private: System::Windows::Forms::Panel^  pnlRightSeg;


	private: System::Windows::Forms::Panel^  pnlLeftSeg;














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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pnlWindow = (gcnew System::Windows::Forms::Panel());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->pnlTitle = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pnlTrack = (gcnew System::Windows::Forms::Panel());
			this->pnlBotTrack = (gcnew System::Windows::Forms::Panel());
			this->pnlRightTrack = (gcnew System::Windows::Forms::Panel());
			this->pnlLeftTrack = (gcnew System::Windows::Forms::Panel());
			this->pnlTopTrack = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->lblNameTrack = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->lblDesTrack = (gcnew System::Windows::Forms::Label());
			this->pbxTrack = (gcnew System::Windows::Forms::PictureBox());
			this->pnlSegment = (gcnew System::Windows::Forms::Panel());
			this->pnlBotSeg = (gcnew System::Windows::Forms::Panel());
			this->pnlRightSeg = (gcnew System::Windows::Forms::Panel());
			this->pnlLeftSeg = (gcnew System::Windows::Forms::Panel());
			this->pnlTopSeg = (gcnew System::Windows::Forms::Panel());
			this->pnlName1 = (gcnew System::Windows::Forms::Panel());
			this->lblNameSegment = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->lblDesSegment = (gcnew System::Windows::Forms::Label());
			this->pbxSegment = (gcnew System::Windows::Forms::PictureBox());
			this->pnlWindow->SuspendLayout();
			this->pnlTitle->SuspendLayout();
			this->panel6->SuspendLayout();
			this->pnlTrack->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxTrack))->BeginInit();
			this->pnlSegment->SuspendLayout();
			this->pnlName1->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxSegment))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 1);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 399);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(600, 1);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(599, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1, 398);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1, 398);
			this->panel4->TabIndex = 3;
			// 
			// pnlWindow
			// 
			this->pnlWindow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->pnlWindow->Controls->Add(this->Title);
			this->pnlWindow->Controls->Add(this->btnX);
			this->pnlWindow->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlWindow->Location = System::Drawing::Point(1, 1);
			this->pnlWindow->Name = L"pnlWindow";
			this->pnlWindow->Size = System::Drawing::Size(598, 32);
			this->pnlWindow->TabIndex = 4;
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::Color::White;
			this->Title->Location = System::Drawing::Point(11, 8);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(104, 15);
			this->Title->TabIndex = 6;
			this->Title->Text = L"Mean Shift Cluster";
			// 
			// btnX
			// 
			this->btnX->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnX.BackgroundImage")));
			this->btnX->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnX->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnX->FlatAppearance->BorderSize = 0;
			this->btnX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnX->Location = System::Drawing::Point(555, 0);
			this->btnX->Name = L"btnX";
			this->btnX->Size = System::Drawing::Size(43, 32);
			this->btnX->TabIndex = 5;
			this->btnX->UseVisualStyleBackColor = true;
			this->btnX->Click += gcnew System::EventHandler(this, &frmMain::btnX_Click);
			// 
			// pnlTitle
			// 
			this->pnlTitle->Controls->Add(this->panel5);
			this->pnlTitle->Controls->Add(this->label1);
			this->pnlTitle->Location = System::Drawing::Point(0, 18);
			this->pnlTitle->Name = L"pnlTitle";
			this->pnlTitle->Size = System::Drawing::Size(598, 36);
			this->pnlTitle->TabIndex = 8;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Gainsboro;
			this->panel5->Location = System::Drawing::Point(0, 35);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(598, 1);
			this->panel5->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(598, 36);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Applications Menu";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->pnlTrack);
			this->panel6->Controls->Add(this->pnlSegment);
			this->panel6->Controls->Add(this->pnlTitle);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(1, 33);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(598, 366);
			this->panel6->TabIndex = 5;
			// 
			// pnlTrack
			// 
			this->pnlTrack->Controls->Add(this->pnlBotTrack);
			this->pnlTrack->Controls->Add(this->pnlRightTrack);
			this->pnlTrack->Controls->Add(this->pnlLeftTrack);
			this->pnlTrack->Controls->Add(this->pnlTopTrack);
			this->pnlTrack->Controls->Add(this->panel12);
			this->pnlTrack->Controls->Add(this->panel13);
			this->pnlTrack->Controls->Add(this->pbxTrack);
			this->pnlTrack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pnlTrack->Location = System::Drawing::Point(302, 86);
			this->pnlTrack->Name = L"pnlTrack";
			this->pnlTrack->Size = System::Drawing::Size(200, 200);
			this->pnlTrack->TabIndex = 11;
			this->pnlTrack->Click += gcnew System::EventHandler(this, &frmMain::pnlTrack_Click);
			this->pnlTrack->MouseEnter += gcnew System::EventHandler(this, &frmMain::pnlTrack_MouseEnter);
			this->pnlTrack->MouseLeave += gcnew System::EventHandler(this, &frmMain::pnlTrack_MouseLeave);
			// 
			// pnlBotTrack
			// 
			this->pnlBotTrack->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlBotTrack->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlBotTrack->Location = System::Drawing::Point(2, 198);
			this->pnlBotTrack->Name = L"pnlBotTrack";
			this->pnlBotTrack->Size = System::Drawing::Size(196, 2);
			this->pnlBotTrack->TabIndex = 18;
			// 
			// pnlRightTrack
			// 
			this->pnlRightTrack->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlRightTrack->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnlRightTrack->Location = System::Drawing::Point(198, 2);
			this->pnlRightTrack->Name = L"pnlRightTrack";
			this->pnlRightTrack->Size = System::Drawing::Size(2, 198);
			this->pnlRightTrack->TabIndex = 17;
			// 
			// pnlLeftTrack
			// 
			this->pnlLeftTrack->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlLeftTrack->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlLeftTrack->Location = System::Drawing::Point(0, 2);
			this->pnlLeftTrack->Name = L"pnlLeftTrack";
			this->pnlLeftTrack->Size = System::Drawing::Size(2, 198);
			this->pnlLeftTrack->TabIndex = 16;
			// 
			// pnlTopTrack
			// 
			this->pnlTopTrack->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlTopTrack->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTopTrack->Location = System::Drawing::Point(0, 0);
			this->pnlTopTrack->Name = L"pnlTopTrack";
			this->pnlTopTrack->Size = System::Drawing::Size(200, 2);
			this->pnlTopTrack->TabIndex = 15;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->lblNameTrack);
			this->panel12->Location = System::Drawing::Point(3, 113);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(194, 26);
			this->panel12->TabIndex = 13;
			// 
			// lblNameTrack
			// 
			this->lblNameTrack->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblNameTrack->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNameTrack->Location = System::Drawing::Point(0, 0);
			this->lblNameTrack->Name = L"lblNameTrack";
			this->lblNameTrack->Size = System::Drawing::Size(194, 26);
			this->lblNameTrack->TabIndex = 12;
			this->lblNameTrack->Text = L"Video Tracking";
			this->lblNameTrack->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblNameTrack->Click += gcnew System::EventHandler(this, &frmMain::pnlTrack_Click);
			this->lblNameTrack->MouseEnter += gcnew System::EventHandler(this, &frmMain::pnlTrack_MouseEnter);
			this->lblNameTrack->MouseLeave += gcnew System::EventHandler(this, &frmMain::pnlTrack_MouseLeave);
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->lblDesTrack);
			this->panel13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel13->Location = System::Drawing::Point(3, 134);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(194, 26);
			this->panel13->TabIndex = 14;
			// 
			// lblDesTrack
			// 
			this->lblDesTrack->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblDesTrack->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDesTrack->ForeColor = System::Drawing::Color::Gray;
			this->lblDesTrack->Location = System::Drawing::Point(0, 0);
			this->lblDesTrack->Name = L"lblDesTrack";
			this->lblDesTrack->Size = System::Drawing::Size(194, 26);
			this->lblDesTrack->TabIndex = 12;
			this->lblDesTrack->Text = L"Object tracking in video";
			this->lblDesTrack->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblDesTrack->Click += gcnew System::EventHandler(this, &frmMain::pnlTrack_Click);
			this->lblDesTrack->MouseEnter += gcnew System::EventHandler(this, &frmMain::pnlTrack_MouseEnter);
			this->lblDesTrack->MouseLeave += gcnew System::EventHandler(this, &frmMain::pnlTrack_MouseLeave);
			// 
			// pbxTrack
			// 
			this->pbxTrack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbxTrack.Image")));
			this->pbxTrack->Location = System::Drawing::Point(66, 43);
			this->pbxTrack->Name = L"pbxTrack";
			this->pbxTrack->Size = System::Drawing::Size(64, 64);
			this->pbxTrack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbxTrack->TabIndex = 11;
			this->pbxTrack->TabStop = false;
			this->pbxTrack->Click += gcnew System::EventHandler(this, &frmMain::pnlTrack_Click);
			this->pbxTrack->MouseEnter += gcnew System::EventHandler(this, &frmMain::pnlTrack_MouseEnter);
			this->pbxTrack->MouseLeave += gcnew System::EventHandler(this, &frmMain::pnlTrack_MouseLeave);
			// 
			// pnlSegment
			// 
			this->pnlSegment->Controls->Add(this->pnlBotSeg);
			this->pnlSegment->Controls->Add(this->pnlRightSeg);
			this->pnlSegment->Controls->Add(this->pnlLeftSeg);
			this->pnlSegment->Controls->Add(this->pnlTopSeg);
			this->pnlSegment->Controls->Add(this->pnlName1);
			this->pnlSegment->Controls->Add(this->panel7);
			this->pnlSegment->Controls->Add(this->pbxSegment);
			this->pnlSegment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pnlSegment->Location = System::Drawing::Point(96, 86);
			this->pnlSegment->Name = L"pnlSegment";
			this->pnlSegment->Size = System::Drawing::Size(200, 200);
			this->pnlSegment->TabIndex = 10;
			this->pnlSegment->Click += gcnew System::EventHandler(this, &frmMain::pnlSegment_Click);
			this->pnlSegment->MouseEnter += gcnew System::EventHandler(this, &frmMain::Segment_MouseEnter);
			this->pnlSegment->MouseLeave += gcnew System::EventHandler(this, &frmMain::Segment_MouseLeave);
			// 
			// pnlBotSeg
			// 
			this->pnlBotSeg->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlBotSeg->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlBotSeg->Location = System::Drawing::Point(2, 198);
			this->pnlBotSeg->Name = L"pnlBotSeg";
			this->pnlBotSeg->Size = System::Drawing::Size(196, 2);
			this->pnlBotSeg->TabIndex = 18;
			// 
			// pnlRightSeg
			// 
			this->pnlRightSeg->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlRightSeg->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnlRightSeg->Location = System::Drawing::Point(198, 2);
			this->pnlRightSeg->Name = L"pnlRightSeg";
			this->pnlRightSeg->Size = System::Drawing::Size(2, 198);
			this->pnlRightSeg->TabIndex = 17;
			// 
			// pnlLeftSeg
			// 
			this->pnlLeftSeg->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlLeftSeg->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlLeftSeg->Location = System::Drawing::Point(0, 2);
			this->pnlLeftSeg->Name = L"pnlLeftSeg";
			this->pnlLeftSeg->Size = System::Drawing::Size(2, 198);
			this->pnlLeftSeg->TabIndex = 16;
			// 
			// pnlTopSeg
			// 
			this->pnlTopSeg->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlTopSeg->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTopSeg->Location = System::Drawing::Point(0, 0);
			this->pnlTopSeg->Name = L"pnlTopSeg";
			this->pnlTopSeg->Size = System::Drawing::Size(200, 2);
			this->pnlTopSeg->TabIndex = 15;
			// 
			// pnlName1
			// 
			this->pnlName1->Controls->Add(this->lblNameSegment);
			this->pnlName1->Location = System::Drawing::Point(3, 113);
			this->pnlName1->Name = L"pnlName1";
			this->pnlName1->Size = System::Drawing::Size(194, 26);
			this->pnlName1->TabIndex = 13;
			// 
			// lblNameSegment
			// 
			this->lblNameSegment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblNameSegment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNameSegment->Location = System::Drawing::Point(0, 0);
			this->lblNameSegment->Name = L"lblNameSegment";
			this->lblNameSegment->Size = System::Drawing::Size(194, 26);
			this->lblNameSegment->TabIndex = 12;
			this->lblNameSegment->Text = L"Segmentation";
			this->lblNameSegment->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblNameSegment->Click += gcnew System::EventHandler(this, &frmMain::pnlSegment_Click);
			this->lblNameSegment->MouseEnter += gcnew System::EventHandler(this, &frmMain::Segment_MouseEnter);
			this->lblNameSegment->MouseLeave += gcnew System::EventHandler(this, &frmMain::Segment_MouseLeave);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->lblDesSegment);
			this->panel7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel7->Location = System::Drawing::Point(3, 134);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(194, 26);
			this->panel7->TabIndex = 14;
			// 
			// lblDesSegment
			// 
			this->lblDesSegment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblDesSegment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDesSegment->ForeColor = System::Drawing::Color::Gray;
			this->lblDesSegment->Location = System::Drawing::Point(0, 0);
			this->lblDesSegment->Name = L"lblDesSegment";
			this->lblDesSegment->Size = System::Drawing::Size(194, 26);
			this->lblDesSegment->TabIndex = 12;
			this->lblDesSegment->Text = L"Segmentaion as Clustering";
			this->lblDesSegment->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblDesSegment->Click += gcnew System::EventHandler(this, &frmMain::pnlSegment_Click);
			this->lblDesSegment->MouseEnter += gcnew System::EventHandler(this, &frmMain::Segment_MouseEnter);
			this->lblDesSegment->MouseLeave += gcnew System::EventHandler(this, &frmMain::Segment_MouseLeave);
			// 
			// pbxSegment
			// 
			this->pbxSegment->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbxSegment.Image")));
			this->pbxSegment->Location = System::Drawing::Point(66, 43);
			this->pbxSegment->Name = L"pbxSegment";
			this->pbxSegment->Size = System::Drawing::Size(64, 64);
			this->pbxSegment->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbxSegment->TabIndex = 11;
			this->pbxSegment->TabStop = false;
			this->pbxSegment->Click += gcnew System::EventHandler(this, &frmMain::pnlSegment_Click);
			this->pbxSegment->MouseEnter += gcnew System::EventHandler(this, &frmMain::Segment_MouseEnter);
			this->pbxSegment->MouseLeave += gcnew System::EventHandler(this, &frmMain::Segment_MouseLeave);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(600, 400);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->pnlWindow);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->pnlWindow->ResumeLayout(false);
			this->pnlWindow->PerformLayout();
			this->pnlTitle->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->pnlTrack->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxTrack))->EndInit();
			this->pnlSegment->ResumeLayout(false);
			this->pnlName1->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxSegment))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void TurnOnSegment() {
			pnlTopSeg->BackColor = OnColor;
			pnlBotSeg->BackColor = OnColor;
			pnlLeftSeg->BackColor = OnColor;
			pnlRightSeg->BackColor = OnColor;
		}

		private: void TurnOffSegment() {
			pnlTopSeg->BackColor = OffColor;
			pnlBotSeg->BackColor = OffColor;
			pnlLeftSeg->BackColor = OffColor;
			pnlRightSeg->BackColor = OffColor;
		}

		private: void TurnOnTracking() {
			pnlTopTrack->BackColor = OnColor;
			pnlBotTrack->BackColor = OnColor;
			pnlLeftTrack->BackColor = OnColor;
			pnlRightTrack->BackColor = OnColor;
		}

		private: void TurnOffTracking() {
			pnlTopTrack->BackColor = OffColor;
			pnlBotTrack->BackColor = OffColor;
			pnlLeftTrack->BackColor = OffColor;
			pnlRightTrack->BackColor = OffColor;
		}

private: System::Void Segment_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	TurnOnSegment();
}

private: System::Void Segment_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	TurnOffSegment();
}

private: System::Void pnlTrack_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	TurnOnTracking();
}
private: System::Void pnlTrack_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	TurnOffTracking();
}
private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) {
	TurnOffSegment();
	TurnOffTracking();
}
private: System::Void btnX_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

private: System::Void pnlSegment_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	frmSegment^ frmSeg = gcnew frmSegment();
	frmSeg->ShowDialog();
	this->Show();
}

private: System::Void pnlTrack_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	frmTrack^ frmTrk = gcnew frmTrack();
	frmTrk->ShowDialog();
	this->Show();
}
};
}
