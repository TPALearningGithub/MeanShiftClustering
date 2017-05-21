#pragma once
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <vector>
#include <opencv2\video\tracking.hpp>
#include <opencv2\objdetect\objdetect.hpp>
#include <msclr\marshal_cppstd.h>



namespace UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	using namespace std;

	/// <summary>
	/// Summary for frmTrack
	/// </summary>
	public ref class frmTrack : public System::Windows::Forms::Form
	{
		int count = 0;
	VideoCapture *capture = new VideoCapture();
	bool canDraw = false, isRunning = false;
	int x = 0, y = 0, windowWidth = 0, windowHeight = 0;
	Mat *frame = new Mat();
	Rect *track_window = new Rect();
	Mat *roi_hist = new Mat();
	TermCriteria *term_crit = new TermCriteria(TermCriteria::EPS | TermCriteria::COUNT, 10, 1);
	// parameter
	int const _vmin = 30, _vmax = 255, _smin = 30;


	public:
		frmTrack(void)
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
		~frmTrack()
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
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Label^  Title;
	private: System::Windows::Forms::Button^  btnX;
	private: System::Windows::Forms::Panel^  panel5;

	private: System::Windows::Forms::Button^  btnBrowse;
	private: System::Windows::Forms::PictureBox^  pbxInput;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  op;
	private: System::Windows::Forms::Timer^  TimerVideo;
	private: System::ComponentModel::IContainer^  components;

	protected:










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmTrack::typeid));
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnBrowse = (gcnew System::Windows::Forms::Button());
			this->pbxInput = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->op = (gcnew System::Windows::Forms::OpenFileDialog());
			this->TimerVideo = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxInput))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->btnBrowse);
			this->panel6->Controls->Add(this->pbxInput);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(1, 33);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(598, 366);
			this->panel6->TabIndex = 17;
			// 
			// btnBrowse
			// 
			this->btnBrowse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnBrowse->BackColor = System::Drawing::Color::Gainsboro;
			this->btnBrowse->FlatAppearance->BorderSize = 0;
			this->btnBrowse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBrowse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBrowse->Location = System::Drawing::Point(459, 293);
			this->btnBrowse->Name = L"btnBrowse";
			this->btnBrowse->Size = System::Drawing::Size(85, 32);
			this->btnBrowse->TabIndex = 16;
			this->btnBrowse->Text = L"Browse";
			this->btnBrowse->UseVisualStyleBackColor = false;
			this->btnBrowse->Click += gcnew System::EventHandler(this, &frmTrack::btnBrowse_Click);
			// 
			// pbxInput
			// 
			this->pbxInput->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pbxInput->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pbxInput->Location = System::Drawing::Point(55, 56);
			this->pbxInput->Name = L"pbxInput";
			this->pbxInput->Size = System::Drawing::Size(489, 231);
			this->pbxInput->TabIndex = 15;
			this->pbxInput->TabStop = false;
			this->pbxInput->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmTrack::pbxInput_Paint);
			this->pbxInput->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmTrack::pbxInput_MouseDown);
			this->pbxInput->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmTrack::pbxInput_MouseMove);
			this->pbxInput->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmTrack::pbxInput_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(55, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Choose your video";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 33);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1, 366);
			this->panel4->TabIndex = 15;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(599, 33);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1, 366);
			this->panel3->TabIndex = 14;
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
			this->panel2->TabIndex = 13;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 32);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 1);
			this->panel1->TabIndex = 12;
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
			this->btnBack->Click += gcnew System::EventHandler(this, &frmTrack::btnBack_Click);
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::Color::White;
			this->Title->Location = System::Drawing::Point(56, 9);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(85, 15);
			this->Title->TabIndex = 6;
			this->Title->Text = L"Video Tracking";
			// 
			// btnX
			// 
			this->btnX->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnX.BackgroundImage")));
			this->btnX->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnX->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnX->FlatAppearance->BorderSize = 0;
			this->btnX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnX->Location = System::Drawing::Point(550, 0);
			this->btnX->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnX->Name = L"btnX";
			this->btnX->Size = System::Drawing::Size(50, 32);
			this->btnX->TabIndex = 5;
			this->btnX->UseVisualStyleBackColor = true;
			this->btnX->Click += gcnew System::EventHandler(this, &frmTrack::btnX_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel5->Controls->Add(this->btnBack);
			this->panel5->Controls->Add(this->Title);
			this->panel5->Controls->Add(this->btnX);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(600, 32);
			this->panel5->TabIndex = 16;
			// 
			// op
			// 
			this->op->Filter = L"All Videos Files |*.mp4; *.wmv; *.3g2; *.3gp; *.3gp2; *.3gpp; *.amv; *.asf;  *.av"
				L"i; *.bin; *.cue; *.divx; *.dv; *.flv; *.gxf; *.iso; *.m1v; *.m2v; *.m2t; *.m2ts;"
				L" *.m4v;";
			// 
			// TimerVideo
			// 
			this->TimerVideo->Interval = 50;
			this->TimerVideo->Tick += gcnew System::EventHandler(this, &frmTrack::TimerVideo_Tick);
			// 
			// frmTrack
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(600, 400);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel5);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmTrack";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmTrack";
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxInput))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void btnX_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void btnBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
	if (op->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Reset video.
		TimerVideo->Stop();
		isRunning = false;
		// Get Video Capture from file
		char *fileName = (char*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(op->FileName).ToPointer();
		capture = new VideoCapture(fileName);
		// Read first frame
		capture->read(*frame);
		// Resize Video-window
		this->Width += frame->cols - pbxInput->Width;
		this->Height += frame->rows - pbxInput->Height;
		int x = (Screen::PrimaryScreen->Bounds.Width - this->Width) / 2;
		int y = (Screen::PrimaryScreen->Bounds.Height - this->Height) / 2;
		this->Location = System::Drawing::Point(x, y);
		pbxInput->Width = frame->cols;
		pbxInput->Height = frame->rows;
		// Show first frame
		pbxInput->Image = gcnew System::Drawing::Bitmap(frame->cols, frame->rows, frame->step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) frame->data);
	}
}
private: System::Void TimerVideo_Tick(System::Object^  sender, System::EventArgs^  e) {
	// get next frame
	capture->read(*frame);
	// tracking object in track_window
	if (frame->data)
	{
		Mat hsv;
		cvtColor(*frame, hsv, COLOR_BGR2HSV);
		Mat dst;
		int channels[] = { 0 };
		float range[] = { 0, 180 };
		const float* ranges[] = { range };
		calcBackProject(&hsv, 1, channels, *roi_hist, dst, ranges, 1);
		meanShift(dst, *track_window, *term_crit);

		rectangle(*frame, *track_window, 255, 2);

		// Show tracked frame
		pbxInput->Image = gcnew System::Drawing::Bitmap(frame->cols, frame->rows, frame->step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) frame->data);
		pbxInput->Refresh();
	}
	// end video.
	else 
	{
		TimerVideo->Stop();
		isRunning = false;
	}
}

private: std::string ToStdString(System::String^ str) {
	return msclr::interop::marshal_as<std::string>(str);
}
private: System::Void pbxInput_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (canDraw)
	{
		windowWidth = e->X - x;
		windowHeight = e->Y - y;
		pbxInput->Refresh();
	}
}
private: System::Void pbxInput_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (!isRunning && pbxInput->Image != nullptr)
	{
		canDraw = true;
		x = e->X;
		y = e->Y;
	}
}
private: System::Void pbxInput_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (canDraw)
	{
		canDraw = false;
		isRunning = true;
		track_window = new Rect(x, y, windowWidth, windowHeight);

		Mat roi = frame->clone()(*track_window);
		Mat hsv_roi, mask;
		cvtColor(roi, hsv_roi, COLOR_BGR2HSV);
		inRange(hsv_roi, Scalar(0, _smin, _vmin), Scalar(180, 255, _vmax),mask);

		int channels[] = { 0 }, histSize[] = { 180 };
		float range[] = { 0, 180 };
		const float* ranges[] = { range };
		calcHist(&hsv_roi, 1, channels, mask, *roi_hist, 1, histSize, ranges);
		normalize(*roi_hist, *roi_hist, 0, 255, NORM_MINMAX);

		rectangle(*frame, *track_window, 255, 2);
		// Show tracked frame
		pbxInput->Image = gcnew System::Drawing::Bitmap(frame->cols, frame->rows, frame->step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) frame->data);
		TimerVideo->Start();
	}
}

private: System::Void pbxInput_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	if (canDraw)
	{
		e->Graphics->DrawRectangle(gcnew Pen(Color::Red, 2.0f), x, y, windowWidth, windowHeight);
	}
}

};
}
