#pragma once

namespace Naparzanie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  lbl_output;
	public: System::Windows::Forms::ImageList^  imageList1;
	private:

	private: System::Windows::Forms::Button^  btn_start;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  poziomTrudnosciToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statystykiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wyjscieToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  wyjscieToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lbl_hits;
	private: System::Windows::Forms::Label^  lbl_miss;
	private: System::Windows::Forms::Label^  lbl_points;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ToolStripMenuItem^  latwyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sredniToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  trudnyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mASAKRAToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pb_pause;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  txt_box;
	private: System::Windows::Forms::Button^  btn_exitt;




	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_output = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btn_start = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->graToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->poziomTrudnosciToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->latwyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sredniToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trudnyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mASAKRAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statystykiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjscieToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjscieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbl_hits = (gcnew System::Windows::Forms::Label());
			this->lbl_miss = (gcnew System::Windows::Forms::Label());
			this->lbl_points = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->pb_pause = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txt_box = (gcnew System::Windows::Forms::TextBox());
			this->btn_exitt = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_pause))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &Game::timer_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(102, 205);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"A";
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Game::Mouse_clik);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(479, 205);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 150);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"A";
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Game::Mouse_clik);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(888, 205);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(150, 150);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"A";
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Game::Mouse_clik);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(102, 449);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(150, 150);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"A";
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Game::Mouse_clik);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(479, 449);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(150, 150);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"A";
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Game::Mouse_clik);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(888, 449);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(150, 150);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"A";
			this->pictureBox6->Visible = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Game::Mouse_clik);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(288, 331);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(150, 150);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"A";
			this->pictureBox7->Visible = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Game::Mouse_clik);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Location = System::Drawing::Point(696, 331);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(150, 150);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"A";
			this->pictureBox8->Visible = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Game::Mouse_clik);
			// 
			// lbl_output
			// 
			this->lbl_output->AutoSize = true;
			this->lbl_output->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_output->Location = System::Drawing::Point(343, 109);
			this->lbl_output->Name = L"lbl_output";
			this->lbl_output->Size = System::Drawing::Size(129, 51);
			this->lbl_output->TabIndex = 8;
			this->lbl_output->Tag = L"X";
			this->lbl_output->Text = L"label1";
			this->lbl_output->Visible = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"error.png");
			this->imageList1->Images->SetKeyName(1, L"ok.png");
			this->imageList1->Images->SetKeyName(2, L"pause.png");
			this->imageList1->Images->SetKeyName(3, L"play.png");
			// 
			// btn_start
			// 
			this->btn_start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_start->Location = System::Drawing::Point(479, 373);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(150, 48);
			this->btn_start->TabIndex = 9;
			this->btn_start->Text = L"START";
			this->btn_start->UseVisualStyleBackColor = true;
			this->btn_start->Visible = false;
			this->btn_start->Click += gcnew System::EventHandler(this, &Game::btn_start_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->graToolStripMenuItem,
					this->wyjscieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1149, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Tag = L"X";
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// graToolStripMenuItem
			// 
			this->graToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->poziomTrudnosciToolStripMenuItem,
					this->statystykiToolStripMenuItem, this->wyjscieToolStripMenuItem2
			});
			this->graToolStripMenuItem->Name = L"graToolStripMenuItem";
			this->graToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->graToolStripMenuItem->Tag = L"X";
			this->graToolStripMenuItem->Text = L"Gra";
			// 
			// poziomTrudnosciToolStripMenuItem
			// 
			this->poziomTrudnosciToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->latwyToolStripMenuItem,
					this->sredniToolStripMenuItem, this->trudnyToolStripMenuItem, this->mASAKRAToolStripMenuItem
			});
			this->poziomTrudnosciToolStripMenuItem->Name = L"poziomTrudnosciToolStripMenuItem";
			this->poziomTrudnosciToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->poziomTrudnosciToolStripMenuItem->Tag = L"X";
			this->poziomTrudnosciToolStripMenuItem->Text = L"Poziom Trudnosci";
			// 
			// latwyToolStripMenuItem
			// 
			this->latwyToolStripMenuItem->Name = L"latwyToolStripMenuItem";
			this->latwyToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->latwyToolStripMenuItem->Text = L"Latwy";
			this->latwyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::latwyToolStripMenuItem_Click);
			// 
			// sredniToolStripMenuItem
			// 
			this->sredniToolStripMenuItem->Name = L"sredniToolStripMenuItem";
			this->sredniToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->sredniToolStripMenuItem->Text = L"Sredni";
			this->sredniToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::sredniToolStripMenuItem_Click);
			// 
			// trudnyToolStripMenuItem
			// 
			this->trudnyToolStripMenuItem->Name = L"trudnyToolStripMenuItem";
			this->trudnyToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->trudnyToolStripMenuItem->Text = L"Trudny";
			this->trudnyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::trudnyToolStripMenuItem_Click);
			// 
			// mASAKRAToolStripMenuItem
			// 
			this->mASAKRAToolStripMenuItem->Name = L"mASAKRAToolStripMenuItem";
			this->mASAKRAToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->mASAKRAToolStripMenuItem->Text = L"MASAKRA";
			this->mASAKRAToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::mASAKRAToolStripMenuItem_Click);
			// 
			// statystykiToolStripMenuItem
			// 
			this->statystykiToolStripMenuItem->Name = L"statystykiToolStripMenuItem";
			this->statystykiToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->statystykiToolStripMenuItem->Tag = L"X";
			this->statystykiToolStripMenuItem->Text = L"Historia";
			this->statystykiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::statystykiToolStripMenuItem_Click);
			// 
			// wyjscieToolStripMenuItem2
			// 
			this->wyjscieToolStripMenuItem2->Name = L"wyjscieToolStripMenuItem2";
			this->wyjscieToolStripMenuItem2->Size = System::Drawing::Size(170, 22);
			this->wyjscieToolStripMenuItem2->Tag = L"X";
			this->wyjscieToolStripMenuItem2->Text = L"Wyjscie";
			this->wyjscieToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Game::wyjscieToolStripMenuItem2_Click);
			// 
			// wyjscieToolStripMenuItem
			// 
			this->wyjscieToolStripMenuItem->Name = L"wyjscieToolStripMenuItem";
			this->wyjscieToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->wyjscieToolStripMenuItem->Tag = L"X";
			this->wyjscieToolStripMenuItem->Text = L"Autor";
			this->wyjscieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::wyjscieToolStripMenuItem_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(370, 140);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(387, 376);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"A";
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Game::pictureBox9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 35);
			this->label1->TabIndex = 12;
			this->label1->Tag = L"X";
			this->label1->Text = L"Trafienia:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(217, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 35);
			this->label2->TabIndex = 13;
			this->label2->Tag = L"X";
			this->label2->Text = L"Bledy:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(368, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 35);
			this->label3->TabIndex = 14;
			this->label3->Tag = L"X";
			this->label3->Text = L"Punkty:";
			// 
			// lbl_hits
			// 
			this->lbl_hits->AutoSize = true;
			this->lbl_hits->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_hits->ForeColor = System::Drawing::Color::DarkRed;
			this->lbl_hits->Location = System::Drawing::Point(144, 6);
			this->lbl_hits->Name = L"lbl_hits";
			this->lbl_hits->Size = System::Drawing::Size(31, 33);
			this->lbl_hits->TabIndex = 15;
			this->lbl_hits->Tag = L"X";
			this->lbl_hits->Text = L"0";
			// 
			// lbl_miss
			// 
			this->lbl_miss->AutoSize = true;
			this->lbl_miss->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_miss->ForeColor = System::Drawing::Color::DarkRed;
			this->lbl_miss->Location = System::Drawing::Point(310, 5);
			this->lbl_miss->Name = L"lbl_miss";
			this->lbl_miss->Size = System::Drawing::Size(31, 33);
			this->lbl_miss->TabIndex = 16;
			this->lbl_miss->Tag = L"X";
			this->lbl_miss->Text = L"0";
			// 
			// lbl_points
			// 
			this->lbl_points->AutoSize = true;
			this->lbl_points->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_points->ForeColor = System::Drawing::Color::DarkRed;
			this->lbl_points->Location = System::Drawing::Point(491, 4);
			this->lbl_points->Name = L"lbl_points";
			this->lbl_points->Size = System::Drawing::Size(31, 33);
			this->lbl_points->TabIndex = 17;
			this->lbl_points->Tag = L"X";
			this->lbl_points->Text = L"0";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(639, 44);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(415, 27);
			this->progressBar1->TabIndex = 19;
			this->progressBar1->Tag = L"X";
			this->progressBar1->Value = 100;
			this->progressBar1->Visible = false;
			// 
			// pb_pause
			// 
			this->pb_pause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pb_pause->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_pause.Image")));
			this->pb_pause->Location = System::Drawing::Point(1072, 27);
			this->pb_pause->Name = L"pb_pause";
			this->pb_pause->Size = System::Drawing::Size(65, 60);
			this->pb_pause->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pb_pause->TabIndex = 20;
			this->pb_pause->TabStop = false;
			this->pb_pause->Tag = L"X";
			this->pb_pause->Visible = false;
			this->pb_pause->Click += gcnew System::EventHandler(this, &Game::pb_pause_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lbl_points);
			this->panel1->Controls->Add(this->lbl_miss);
			this->panel1->Controls->Add(this->lbl_hits);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(23, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(582, 53);
			this->panel1->TabIndex = 21;
			this->panel1->Tag = L"X";
			this->panel1->Visible = false;
			// 
			// txt_box
			// 
			this->txt_box->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->txt_box->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_box->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->txt_box->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_box->Dock = System::Windows::Forms::DockStyle::Top;
			this->txt_box->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_box->Location = System::Drawing::Point(0, 24);
			this->txt_box->Multiline = true;
			this->txt_box->Name = L"txt_box";
			this->txt_box->ReadOnly = true;
			this->txt_box->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_box->Size = System::Drawing::Size(1149, 99);
			this->txt_box->TabIndex = 22;
			this->txt_box->Visible = false;
			// 
			// btn_exitt
			// 
			this->btn_exitt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_exitt->Location = System::Drawing::Point(1051, 93);
			this->btn_exitt->Name = L"btn_exitt";
			this->btn_exitt->Size = System::Drawing::Size(75, 23);
			this->btn_exitt->TabIndex = 23;
			this->btn_exitt->Text = L"Zamknij";
			this->btn_exitt->UseVisualStyleBackColor = true;
			this->btn_exitt->Visible = false;
			this->btn_exitt->Click += gcnew System::EventHandler(this, &Game::btn_exitt_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1149, 634);
			this->Controls->Add(this->btn_exitt);
			this->Controls->Add(this->txt_box);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pb_pause);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->btn_start);
			this->Controls->Add(this->lbl_output);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"A";
			this->Text = L"BeQuick";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_pause))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		///ZMIENNE
		Random^ roll = gcnew Random();
		int roll_info;
		char info, which_one;
		int points, hits, missed;
		int which_level;

		int difficulty_level;

		//STATYSTYKA
		String^ fileName = "stat.txt";
		
		
		//CZY WYBRANY STOPIEN TRUDNOSCI
		bool if_diff_choose = false;

		//obrazki
		Image^ final_pic;

		//TRUDNY I SREDNI PICS
		Image^ first_half_pic;
		Image^ second_half_pic;
		
		//MASAKRA PICS
		Image^ M_first_pic;
		Image^ M_second_pic;
		Image^ M_third_pic;
		
		//DO SPRAWDZENIA PIC
		Image^ to_check;

private: Void clear_screen()
{
	for each(Control^ obrazki in this->Controls)
	{
		obrazki->Visible = false;
		if (obrazki->Tag == "X")
		{
			obrazki->Visible = true;
		}
	}
}

private: Void roll_pictures()
{
	try
	{
		//DEFINIUJEMY OBIEKTY DO GRY
		Image^ duck = duck->FromFile("..//Gfx//duck.png");
		Image^ boy = boy->FromFile("..//Gfx//boy.png");
		Image^ girl = girl->FromFile("..//Gfx//girl.png");
		Image^ bear = bear->FromFile("..//Gfx//bear.png");
		Image^ lupa = lupa->FromFile("..//Gfx//lupa.png");
		Image^ gcirc = gcirc->FromFile("..//Gfx//greencir.png");
		Image^ redsq = redsq->FromFile("..//Gfx//redsq.png");
		Image^ romb = romb->FromFile("..//Gfx//romb.png");

		//ZMIENNE WEWNETRZNE FUNKCJI
		int pop, first_half, second_half;
		int first_hardcore, second_hardcore, third_hardcore;

		//TABELA OBIEKTOW TYPU IMAGE
		array<Image^>^ temp = gcnew array<Image^>(8) { bear, girl, boy, lupa, gcirc, redsq, romb, duck  };

		///POZIOMY
		//LATWY
		pop = roll->Next(0, 8);

		//TRUDNY I SREDNI LEVEL
		first_half = roll->Next(0, 4);
		second_half = roll->Next(4, 8);
		first_half_pic = temp[first_half];
		second_half_pic = temp[second_half];

		//MASAKRA LEVEL
		first_hardcore = roll->Next(0, 3);
		second_hardcore = roll->Next(3, 6);
		third_hardcore = roll->Next(6, 8);
		M_first_pic = temp[first_hardcore];
		M_second_pic = temp[second_hardcore];
		M_third_pic = temp[third_hardcore];

		//OBRAZEK DO SPRAWDZENIA
		final_pic = temp[pop];

		//SWITCH DO WYNIKOW
		switch (which_one)
		{
		case 'M':
			to_check = temp[0];
			break;
		case 'K':
			to_check = temp[5];
			break;
		case 'B':
			to_check = temp[2];
			break;
		case 'L':
			to_check = temp[3];
			break;
		case 'Z':
			to_check = temp[4];
			break;
		case 'O':
			to_check = temp[6];
			break;
		case 'D':
			to_check = temp[1];
			break;
		case 'Q':
			to_check = temp[7];
			break;
		}
		//BUTON START UKRYWANIE
		btn_start->Visible = false;

		//CZYSZCZENIE EKRANU
		clear_screen();

		//WARUNKI WYBORU POZIOMU TRUDNOSCI
		switch (which_level)
		{
		case 1:
			one_section();
			break;
		case 2:
			two_sections();
			break;
		case 3:
			two_sections();
			break;
		case 4:
			extreme_level();
			break;
		}
	}
	catch (Exception^ output)
	{
		timer->Enabled = false;
		MessageBox::Show("Problem z plikiem  " + output->Message + "  lub inny krtyczny blad!", "UWAGA!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//MessageBox::Show(output->Message);
	}
	
	
}

//GRA Z WYSWIETLANYM JEDNYM OBRAZKIEM
private: Void one_section()
{	
	int roll_picture;
	roll_picture = roll->Next(1, 9);

	switch (roll_picture)
	{
	case 1:
		pictureBox1->Visible = true;
		pictureBox1->Image = final_pic;
		break;

	case 2:
		pictureBox2->Visible = true;
		pictureBox2->Image = final_pic;
		break;
	case 3:
		pictureBox3->Image = final_pic;
		pictureBox3->Visible = true;
		break;
	case 4:
		pictureBox4->Image = final_pic;
		pictureBox4->Visible = true;
		break;

	case 5:
		pictureBox5->Image = final_pic;
		pictureBox5->Visible = true;
		break;

	case 6:
		pictureBox6->Image = final_pic;
		pictureBox6->Visible = true;
		break;

	case 7:
		pictureBox7->Visible = true;
		pictureBox7->Image = final_pic;
		break;


	case 8:
		pictureBox8->Visible = true;
		pictureBox8->Image = final_pic;
		break;
	}
}

private: Void two_sections()
{
	int first_roll, second_roll;

	first_roll = roll->Next(1, 4);
	second_roll = roll->Next(1, 4);

	switch (first_roll)
	{
	case 1:
		pictureBox1->Visible = true;
		pictureBox1->Image = first_half_pic;
		break;

	case 2:
		pictureBox2->Visible = true;
		pictureBox2->Image = first_half_pic;
		break;
	case 3:
		pictureBox3->Image = first_half_pic;
		pictureBox3->Visible = true;
		break;
	case 4:
		pictureBox4->Image = first_half_pic;
		pictureBox4->Visible = true;
		break;
	}
		
	switch (second_roll)
	{
	case 1:
		pictureBox5->Image = second_half_pic;
		pictureBox5->Visible = true;
		break;

	case 2:
		pictureBox6->Image = second_half_pic;
		pictureBox6->Visible = true;
		break;

	case 3:
		pictureBox7->Visible = true;
		pictureBox7->Image = second_half_pic;
		break;

	case 4:
		pictureBox8->Visible = true;
		pictureBox8->Image = second_half_pic;
		break;
	}
		
}

private: Void extreme_level()
{
	int roll_first, roll_second, roll_third;

	roll_first = roll->Next(1, 4);
	roll_second = roll->Next(1, 4);
	roll_third = roll->Next(1, 3);

	switch (roll_first)
	{
	case 1:
		pictureBox5->Visible = true;
		pictureBox5->Image = M_first_pic;
		break;
	case 2:
		pictureBox7->Visible = true;
		pictureBox7->Image = M_first_pic;
		break;
	case 3:
		pictureBox3->Image = M_first_pic;
		pictureBox3->Visible = true;
		break;
	}
		
	switch (roll_second)
	{
	case 1:
		pictureBox4->Image = M_second_pic;
		pictureBox4->Visible = true;
		break;

	case 2:
		pictureBox1->Image = M_second_pic;
		pictureBox1->Visible = true;
		break;

	case 3:
		pictureBox6->Visible = true;
		pictureBox6->Image = M_second_pic;
		break;
	}

	switch(roll_third)
	{
	case 1:
		pictureBox2->Visible = true;
		pictureBox2->Image = M_third_pic;
		break;
	case 2:
		pictureBox8->Visible = true;
		pictureBox8->Image = M_third_pic;
		break;
	}
	
}

private: Void roll_information()
{
	roll_info = roll->Next(1, 9);
	switch (roll_info)
	{
	case 1:
		lbl_output->Text = "Traf brazowego Misia!";
		which_one = 'M';
		break;
	case 2:
		lbl_output->Text = "Traf czerwony kwadrat!";
		which_one = 'K';
		break;
	case 3:
		lbl_output->Text = "Traf niebieskiego chlopca!";
		which_one = 'B';
		break;
	case 4:
		lbl_output->Text = "Traf Lupe!";
		which_one = 'L';
		break;
	case 5:
		lbl_output->Text = "Traf zielone kolo!";
		which_one = 'Z';
		break;
	case 6:
		lbl_output->Text = "Traf niebieski Romb!";
		which_one = 'O';
		break;
	case 7:
		lbl_output->Text = "Traf rozowa dziewczynke!";
		which_one = 'D';
		break;
	case 8:
		lbl_output->Text = "Traf zolta kaczuszke!";
		which_one = 'Q';
		break;
	}
}
		
private: Void labels_manage()
{
	lbl_hits->Text = "" + hits;
	lbl_miss->Text = "" + missed;
	lbl_points->Text = "" + points;
}

//JESLI TRAFIENIE
private: Void win(System::Object^ _sender)
{
	hits++;
	points += 10;
	((PictureBox^)_sender)->Image = imageList1->Images[1];
	roll_information();
	labels_manage();
}

//JESLI NIE TRAFIENIE
private: Void loss(System::Object^ _sender)
{
	missed++;
	points -= 5;
	((PictureBox^)_sender)->Image = imageList1->Images[0];
	labels_manage();
}

//FUNCJA KLIKANIE MYSZKA
private: System::Void Mouse_clik(System::Object^  sender, System::EventArgs^  e)
{
	switch (which_level)
	{
	case 1:
		if (((PictureBox^)sender)->Image == to_check)
		{
			win(sender);
		}
		else
		{
			loss(sender);
		}
		break;

	case 2:
		if (((PictureBox^)sender)->Image == to_check)
		{
			win(sender);
		}
		else
		{
			loss(sender);
		}
		break;

	case 3:
		if (((PictureBox^)sender)->Image == to_check)
		{
			win(sender);
		}
		else
		{
			loss(sender);
		}
		break;

	case 4:
		if (((PictureBox^)sender)->Image == to_check)
		{
			win(sender);
		}
		else
		{
			loss(sender);
		}
		break;
	}
}

//GAME LOAD
private: System::Void Game_Load(System::Object^  sender, System::EventArgs^  e)
{
}

//TIMER!!!
private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	poziomTrudnosciToolStripMenuItem->Visible = false;
	statystykiToolStripMenuItem->Visible = false;

	switch (difficulty_level)
	{
	case 1:
		timer->Interval = 1000;
		break;
	case 2:
		timer->Interval = 900;
		break;
	case 3:
		timer->Interval = 800;
		break;
	case 4:
		timer->Interval = 700;
		break;
	}

	roll_pictures();

	//PO ZAKONCZENIU PROGRESS BAR
	progressBar1->Enabled = true;
	progressBar1->Value -= 1;
	if (progressBar1->Value == 0)
	{
		timer->Enabled = false;
		end_game();
	}

}
//STATYSTKA FUNKCJA
private: Void Stats()
{
	try
	{
		//DODAJEMY
		StreamWriter^ sw = File::AppendText(fileName);
		String^ jaki;

		switch (difficulty_level)
		{
		case 1:
			jaki = "Latwy";
			break;
		case 2:
			jaki = "Sredni";
			break;
		case 3:
			jaki = "Trudny";
			break;
		case 4:
			jaki = "Masakra";
			break;
		}

		sw->WriteLine(DateTime::Now + "\tZdobyte Punkty: " + points + "\t\tTrafienia: " + hits + "\tChybienia: " + missed + "\tPoziom trudnosci: " + jaki);
		sw->Close();
	}
	catch (Exception^ co_jest)
	{
		MessageBox::Show(co_jest->Message);
	}
	
}

//KONIEC GRY
private: Void end_game()
{
	//IMPLEMENTACJA STATYSTYKI
	Stats();

	lbl_output->Visible = false;

	if (MessageBox::Show("Zdobyles: " + points + " punktow po " + hits + " trafieniach. Chybiles " + missed + " razy.", "KONIEC GRY", MessageBoxButtons::RetryCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Retry)
	{
		lbl_output->Visible = false;
		poziomTrudnosciToolStripMenuItem->Visible = true;
		statystykiToolStripMenuItem->Visible = true;
		lbl_hits->Text = "0";
		lbl_miss->Text = "0";
		lbl_points->Text = "0";
		pb_pause->Enabled = false;
		clear_checked_menu();
		if_diff_choose = false;

		for each(Control^ controll in this->Controls)
		{
			if (controll->Tag == "A")
			{
				controll->Visible = false;
			}
		}
		progressBar1->Value = 100;
		points = 0;
		hits = 0;
		//clear_screen();
		pictureBox9->Visible = true;
	}
	else
	{
		this->Close();
	}

}

//WYJSCIE Z PROGRAMU
private: System::Void wyjscieToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MessageBox::Show("Wyjscie z gry?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Close();
	}
}

//START GUZIK
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txt_box->Visible = false;
	btn_exitt->Visible = false;
	txt_box->Text = "";
	statystykiToolStripMenuItem->Checked = false;

	if (if_diff_choose == true)
	{
		lbl_output->Visible = true;
		panel1->Visible = true;
		progressBar1->Visible = true;
		pb_pause->Visible = true;

		//funkcje
		timer->Enabled = true;
		pictureBox9->Visible = false;
		roll_information();
	}
	else
	{
		MessageBox::Show("Prosze wybrac z menu GRA stopien trudnosci...","BeQuick",MessageBoxButtons::OK,MessageBoxIcon::Information);
	}

}

//KONTROLKI MENU
private: Void clear_checked_menu()
{
	latwyToolStripMenuItem->Checked = false;
	sredniToolStripMenuItem->Checked = false;
	trudnyToolStripMenuItem->Checked = false;
	mASAKRAToolStripMenuItem->Checked = false;

	which_level = 1;
	
	difficulty_level = 1;
}
private: System::Void latwyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if_diff_choose = true;
	clear_checked_menu();
	latwyToolStripMenuItem->Checked = true;
	difficulty_level = 1;
	which_level = 1;
}

private: System::Void sredniToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if_diff_choose = true;
	clear_checked_menu();
	which_level = 2;
	sredniToolStripMenuItem->Checked = true;
	difficulty_level = 2;
}
private: System::Void trudnyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if_diff_choose = true;
	clear_checked_menu();
	which_level = 3;
	trudnyToolStripMenuItem->Checked = true;
	difficulty_level = 3;
}
private: System::Void mASAKRAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if_diff_choose = true;
	clear_checked_menu();
	which_level = 4;
	mASAKRAToolStripMenuItem->Checked = true;
	difficulty_level = 4;
}

private: System::Void btn_start_Click(System::Object^  sender, System::EventArgs^  e)
{
	//operacje
	lbl_output->Visible = true;
	timer->Enabled = true;

	roll_information();

	//losowanie obrazka

}
	private: System::Void pb_pause_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (timer->Enabled == true)
		{
			timer->Enabled = false;
			pb_pause->Image = imageList1->Images[3];
			for each(Control^ contr in this->Controls)
			{
				contr->Enabled = false;
			}
			pb_pause->Enabled = true;
			menuStrip1->Enabled = true;
		}
		else
		{
			pb_pause->Image = imageList1->Images[2];
			timer->Enabled = true;
			for each(Control^ contr in this->Controls)
			{
				contr->Enabled = true;
			}
		}
	}

private: System::Void mouse_enter(System::Object^  sender, System::EventArgs^  e)
{
}


private: System::Void statystykiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (txt_box->Visible == false)
	{
		txt_box->BringToFront();
		statystykiToolStripMenuItem->Checked = true;
		btn_exitt->Visible = true;
		btn_exitt->BringToFront();
		txt_box->Visible = true;
		StreamReader^ sw = File::OpenText(fileName);
		String^ s = "";
		while (s = sw->ReadLine())
		{
			txt_box->Text += s + "\r\n";
		}
		sw->Close();
	}
	else
	{
		statystykiToolStripMenuItem->Checked = false;
		txt_box->Visible = false;
		txt_box->Text = "";
		btn_exitt->Visible = false;
	}


}
private: System::Void btn_exitt_Click(System::Object^  sender, System::EventArgs^  e) 
{
	statystykiToolStripMenuItem->Checked = false;
	btn_exitt->Visible = false;
	txt_box->Visible = false;
	txt_box->Text = "";
}
private: System::Void wyjscieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("BeQuick ver1.0.0\nAutor: Krzysztof Trzyna\nworks130@gmail.com\nDev: C++/CLR\nScunthorpe 2017 UK","BeQuick GAME",MessageBoxButtons::OK,MessageBoxIcon::Information);
}
};
}
