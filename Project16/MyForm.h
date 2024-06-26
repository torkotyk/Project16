#pragma once

namespace Project16 {

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
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^ newToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ saveToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ printToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ cutToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ copyToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ pasteToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ helpToolStripButton;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåðåãëÿäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàíåë³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ðÿäîêÑòàíóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàíåëü²íñòðóìåíò³âToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòâîðèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ â³äêðèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåðåãòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïðàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîï³þâàòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèð³çàòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîðìàòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ øðèôòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äèçàéíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîâ³äêàToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèð³çàòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîï³þâàòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ øðèôòToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèä³ëèòèÂñåToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->printToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòâîðèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêðèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåðåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåðåãëÿäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåë³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ðÿäîêÑòàíóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåëü²íñòðóìåíò³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîï³þâàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèð³çàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîðìàòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øðèôòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äèçàéíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->âèð³çàòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîï³þâàòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øðèôòToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèä³ëèòèÂñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(21) {
				this->newToolStripButton,
					this->openToolStripButton, this->saveToolStripButton, this->printToolStripButton, this->toolStripSeparator, this->cutToolStripButton,
					this->copyToolStripButton, this->pasteToolStripButton, this->toolStripSeparator1, this->helpToolStripButton, this->toolStripSeparator3,
					this->toolStripButton1, this->toolStripButton2, this->toolStripButton3, this->toolStripSeparator2, this->toolStripButton4, this->toolStripButton5,
					this->toolStripButton6, this->toolStripSeparator4, this->toolStripButton7, this->toolStripButton8
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(652, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// newToolStripButton
			// 
			this->newToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripButton.Image")));
			this->newToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripButton->Name = L"newToolStripButton";
			this->newToolStripButton->Size = System::Drawing::Size(29, 24);
			this->newToolStripButton->Text = L"&New";
			this->newToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::ñòâîðèòèToolStripMenuItem_Click);
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(29, 24);
			this->openToolStripButton->Text = L"&Open";
			this->openToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::â³äêðèòèToolStripMenuItem_Click);
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripButton.Image")));
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(29, 24);
			this->saveToolStripButton->Text = L"&Save";
			this->saveToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::çáåðåãòèToolStripMenuItem_Click);
			// 
			// printToolStripButton
			// 
			this->printToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->printToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripButton.Image")));
			this->printToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printToolStripButton->Name = L"printToolStripButton";
			this->printToolStripButton->Size = System::Drawing::Size(29, 24);
			this->printToolStripButton->Text = L"&Print";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// cutToolStripButton
			// 
			this->cutToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripButton.Image")));
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(29, 24);
			this->cutToolStripButton->Text = L"C&ut";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripButton.Image")));
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(29, 24);
			this->copyToolStripButton->Text = L"&Copy";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripButton.Image")));
			this->pasteToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripButton->Name = L"pasteToolStripButton";
			this->pasteToolStripButton->Size = System::Drawing::Size(29, 24);
			this->pasteToolStripButton->Text = L"&Paste";
			this->pasteToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// helpToolStripButton
			// 
			this->helpToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->helpToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpToolStripButton.Image")));
			this->helpToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpToolStripButton->Name = L"helpToolStripButton";
			this->helpToolStripButton->Size = System::Drawing::Size(29, 24);
			this->helpToolStripButton->Text = L"He&lp";
			this->helpToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripButton_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"Âèð³âíþâàííÿ ïî ë³âîìó êðàþ\r\n";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 24);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"Âèð³âíþâàííÿ ïî öåíòðó\r\n";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 24);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"Âèð³âíþâàííÿ ïî ïðàâîìó êðàþ\r\n";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(29, 24);
			this->toolStripButton4->Text = L"Æèðíèé";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 24);
			this->toolStripButton5->Text = L"Êóðñèâ";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(29, 24);
			this->toolStripButton6->Text = L"Ï³äêðåñëåííÿ";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(29, 24);
			this->toolStripButton7->Text = L"Ïîâòîðèòè";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(29, 24);
			this->toolStripButton8->Text = L"Ñêàñóâàòè";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 596);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(652, 26);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 20);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ôàéëToolStripMenuItem,
					this->ïåðåãëÿäToolStripMenuItem, this->ïðàâêàToolStripMenuItem, this->ôîðìàòToolStripMenuItem, this->äèçàéíToolStripMenuItem,
					this->äîâ³äêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(652, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñòâîðèòèToolStripMenuItem,
					this->â³äêðèòèToolStripMenuItem, this->çáåðåãòèToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñòâîðèòèToolStripMenuItem
			// 
			this->ñòâîðèòèToolStripMenuItem->Name = L"ñòâîðèòèToolStripMenuItem";
			this->ñòâîðèòèToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->ñòâîðèòèToolStripMenuItem->Text = L"Ñòâîðèòè";
			this->ñòâîðèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòâîðèòèToolStripMenuItem_Click);
			// 
			// â³äêðèòèToolStripMenuItem
			// 
			this->â³äêðèòèToolStripMenuItem->Name = L"â³äêðèòèToolStripMenuItem";
			this->â³äêðèòèToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->â³äêðèòèToolStripMenuItem->Text = L"Â³äêðèòè";
			this->â³äêðèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::â³äêðèòèToolStripMenuItem_Click);
			// 
			// çáåðåãòèToolStripMenuItem
			// 
			this->çáåðåãòèToolStripMenuItem->Name = L"çáåðåãòèToolStripMenuItem";
			this->çáåðåãòèToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->çáåðåãòèToolStripMenuItem->Text = L"Çáåðåãòè";
			this->çáåðåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåðåãòèToolStripMenuItem_Click);
			// 
			// ïåðåãëÿäToolStripMenuItem
			// 
			this->ïåðåãëÿäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ïàíåë³ToolStripMenuItem });
			this->ïåðåãëÿäToolStripMenuItem->Name = L"ïåðåãëÿäToolStripMenuItem";
			this->ïåðåãëÿäToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->ïåðåãëÿäToolStripMenuItem->Text = L"Ïåðåãëÿä";
			// 
			// ïàíåë³ToolStripMenuItem
			// 
			this->ïàíåë³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ðÿäîêÑòàíóToolStripMenuItem,
					this->ïàíåëü²íñòðóìåíò³âToolStripMenuItem
			});
			this->ïàíåë³ToolStripMenuItem->Name = L"ïàíåë³ToolStripMenuItem";
			this->ïàíåë³ToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->ïàíåë³ToolStripMenuItem->Text = L"Ïàíåë³";
			// 
			// ðÿäîêÑòàíóToolStripMenuItem
			// 
			this->ðÿäîêÑòàíóToolStripMenuItem->CheckOnClick = true;
			this->ðÿäîêÑòàíóToolStripMenuItem->Name = L"ðÿäîêÑòàíóToolStripMenuItem";
			this->ðÿäîêÑòàíóToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->ðÿäîêÑòàíóToolStripMenuItem->Text = L"Ðÿäîê ñòàíó";
			this->ðÿäîêÑòàíóToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ðÿäîêÑòàíóToolStripMenuItem_CheckedChanged);
			// 
			// ïàíåëü²íñòðóìåíò³âToolStripMenuItem
			// 
			this->ïàíåëü²íñòðóìåíò³âToolStripMenuItem->CheckOnClick = true;
			this->ïàíåëü²íñòðóìåíò³âToolStripMenuItem->Name = L"ïàíåëü²íñòðóìåíò³âToolStripMenuItem";
			this->ïàíåëü²íñòðóìåíò³âToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->ïàíåëü²íñòðóìåíò³âToolStripMenuItem->Text = L"Ïàíåëü ³íñòðóìåíò³â";
			this->ïàíåëü²íñòðóìåíò³âToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ïàíåëü²íñòðóìåíò³âToolStripMenuItem_CheckedChanged);
			// 
			// ïðàâêàToolStripMenuItem
			// 
			this->ïðàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->êîï³þâàòèToolStripMenuItem,
					this->âèð³çàòèToolStripMenuItem, this->âñòàâèòèToolStripMenuItem
			});
			this->ïðàâêàToolStripMenuItem->Name = L"ïðàâêàToolStripMenuItem";
			this->ïðàâêàToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->ïðàâêàToolStripMenuItem->Text = L"Ïðàâêà";
			// 
			// êîï³þâàòèToolStripMenuItem
			// 
			this->êîï³þâàòèToolStripMenuItem->Name = L"êîï³þâàòèToolStripMenuItem";
			this->êîï³þâàòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->êîï³þâàòèToolStripMenuItem->Text = L"Êîï³þâàòè";
			this->êîï³þâàòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// âèð³çàòèToolStripMenuItem
			// 
			this->âèð³çàòèToolStripMenuItem->Name = L"âèð³çàòèToolStripMenuItem";
			this->âèð³çàòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âèð³çàòèToolStripMenuItem->Text = L"Âèð³çàòè";
			this->âèð³çàòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// âñòàâèòèToolStripMenuItem
			// 
			this->âñòàâèòèToolStripMenuItem->Name = L"âñòàâèòèToolStripMenuItem";
			this->âñòàâèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âñòàâèòèToolStripMenuItem->Text = L"Âñòàâèòè";
			this->âñòàâèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// ôîðìàòToolStripMenuItem
			// 
			this->ôîðìàòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->øðèôòToolStripMenuItem });
			this->ôîðìàòToolStripMenuItem->Name = L"ôîðìàòToolStripMenuItem";
			this->ôîðìàòToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->ôîðìàòToolStripMenuItem->Text = L"Ôîðìàò";
			// 
			// øðèôòToolStripMenuItem
			// 
			this->øðèôòToolStripMenuItem->Name = L"øðèôòToolStripMenuItem";
			this->øðèôòToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->øðèôòToolStripMenuItem->Text = L"Øðèôò";
			this->øðèôòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::øðèôòToolStripMenuItem_Click);
			// 
			// äèçàéíToolStripMenuItem
			// 
			this->äèçàéíToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôîíToolStripMenuItem });
			this->äèçàéíToolStripMenuItem->Name = L"äèçàéíToolStripMenuItem";
			this->äèçàéíToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->äèçàéíToolStripMenuItem->Text = L"Äèçàéí";
			// 
			// ôîíToolStripMenuItem
			// 
			this->ôîíToolStripMenuItem->Name = L"ôîíToolStripMenuItem";
			this->ôîíToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->ôîíToolStripMenuItem->Text = L"Ôîí";
			this->ôîíToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôîíToolStripMenuItem_Click);
			// 
			// äîâ³äêàToolStripMenuItem
			// 
			this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
			this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
			// 
			// richTextBox1
			// 
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 55);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(652, 541);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->âèð³çàòèToolStripMenuItem1,
					this->êîï³þâàòèToolStripMenuItem1, this->âñòàâèòèToolStripMenuItem1, this->øðèôòToolStripMenuItem1, this->âèä³ëèòèÂñåToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(168, 124);
			// 
			// âèð³çàòèToolStripMenuItem1
			// 
			this->âèð³çàòèToolStripMenuItem1->Name = L"âèð³çàòèToolStripMenuItem1";
			this->âèð³çàòèToolStripMenuItem1->Size = System::Drawing::Size(167, 24);
			this->âèð³çàòèToolStripMenuItem1->Text = L"Âèð³çàòè";
			this->âèð³çàòèToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// êîï³þâàòèToolStripMenuItem1
			// 
			this->êîï³þâàòèToolStripMenuItem1->Name = L"êîï³þâàòèToolStripMenuItem1";
			this->êîï³þâàòèToolStripMenuItem1->Size = System::Drawing::Size(167, 24);
			this->êîï³þâàòèToolStripMenuItem1->Text = L"Êîï³þâàòè";
			this->êîï³þâàòèToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// âñòàâèòèToolStripMenuItem1
			// 
			this->âñòàâèòèToolStripMenuItem1->Name = L"âñòàâèòèToolStripMenuItem1";
			this->âñòàâèòèToolStripMenuItem1->Size = System::Drawing::Size(167, 24);
			this->âñòàâèòèToolStripMenuItem1->Text = L"Âñòàâèòè";
			this->âñòàâèòèToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// øðèôòToolStripMenuItem1
			// 
			this->øðèôòToolStripMenuItem1->Name = L"øðèôòToolStripMenuItem1";
			this->øðèôòToolStripMenuItem1->Size = System::Drawing::Size(167, 24);
			this->øðèôòToolStripMenuItem1->Text = L"Øðèôò";
			this->øðèôòToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::øðèôòToolStripMenuItem_Click);
			// 
			// âèä³ëèòèÂñåToolStripMenuItem
			// 
			this->âèä³ëèòèÂñåToolStripMenuItem->Name = L"âèä³ëèòèÂñåToolStripMenuItem";
			this->âèä³ëèòèÂñåToolStripMenuItem->Size = System::Drawing::Size(167, 24);
			this->âèä³ëèòèÂñåToolStripMenuItem->Text = L"Âèä³ëèòè âñå";
			this->âèä³ëèòèÂñåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèä³ëèòèÂñåToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 622);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void copyToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Copy();
	}
	private: System::Void pasteToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Paste();
	}
	private: System::Void cutToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Cut();
	}
	private: System::Void helpToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Âèêîíàëà ñòóäåíòêà ãðóïè 3ÑÎÌ Òàðàíþê Íàä³ÿ", "Ïðî àâòîðà");
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
		toolStripStatusLabel1->Visible = true;
		toolStripStatusLabel1->Text = "Âèð³âíþâàííÿ ïî ë³âîìó êðàþ";
	}
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
		toolStripStatusLabel1->Visible = true;
		toolStripStatusLabel1->Text = "Âèð³âíþâàííÿ ïî öåíòðó";
	}
	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
		toolStripStatusLabel1->Visible = true;
		toolStripStatusLabel1->Text = "Âèð³âíþâàííÿ ïî ïðàâîìó êðàþ";
	}
	private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectionFont->Bold)
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Bold);
		else
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Bold);
		toolStripStatusLabel1->Visible = true;
		toolStripStatusLabel1->Text = "Æèðíèé";
	}
	private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectionFont->Bold) richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & FontStyle::Italic);
		else
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Italic);
		toolStripStatusLabel1->Visible = true;
		toolStripStatusLabel1->Text = "Êóðñèâ";
	}
	private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectionFont->Bold) richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & FontStyle::Underline);
		else
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Underline);
		toolStripStatusLabel1->Visible = true;
		toolStripStatusLabel1->Text = "Ï³äêðåñëåíèé";
	}
	private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Redo();
		toolStripStatusLabel1->Visible = true;
		toolStripStatusLabel1->Text = "Ïîâòîðèòè";
	}
	private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Undo();
		toolStripStatusLabel1->Visible = true;
		toolStripStatusLabel1->Text = "Ïîâåðíóòè";
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		statusStrip1->Items[1]->Text = DateTime::Now.ToLongDateString();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		statusStrip1->Visible = false;
		toolStrip1->Visible = false;
	}
	private: System::Void ðÿäîêÑòàíóToolStripMenuItem_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		bool prap;
		if (ðÿäîêÑòàíóToolStripMenuItem->Checked)
			prap = true;
		else
			prap = false;
		if (prap == true)
		{
			statusStrip1->Visible = true;
		}
		else
		{
			statusStrip1->Visible - false;
		}
	}
	private: System::Void ïàíåëü²íñòðóìåíò³âToolStripMenuItem_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		bool prap;
		if (ïàíåëü²íñòðóìåíò³âToolStripMenuItem->Checked)
			prap = true;
		else
			prap == false;
		if (prap == true)
		{
			toolStrip1->Visible = true;
		}
		else
		{
			toolStrip1->Visible - false;
		}
	}
	private: System::Void ñòâîðèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
		toolStripStatusLabel1->Text = "Ñâîðåííÿ";
		richTextBox1->BackColor = Color::White;
	}

	private: System::Void øðèôòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();
		richTextBox1->SelectionFont = fontDialog1->Font;
		toolStripStatusLabel1->Text = "Çì³íà øðèôòó";
	}
	private: System::Void â³äêðèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::Text::Encoding^ kod = System::Text::Encoding::GetEncoding(1251);
			auto read = gcnew IO::StreamReader(openFileDialog1->FileName, kod);
			richTextBox1->Text = read->ReadToEnd();
		}
		this->Text += (openFileDialog1->FileName);
		toolStripStatusLabel1->Text = "Â³äêðèòòÿ òåêñòó";
	}
	private: System::Void çáåðåãòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->FileName = openFileDialog1->FileName;
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			auto file_zap = gcnew IO::StreamWriter(saveFileDialog1->FileName, false,
				System::Text::Encoding::GetEncoding(1251));
			file_zap->Write(richTextBox1->Text);
			file_zap->Close();
			richTextBox1->Modified = false;
		}
		toolStripStatusLabel1->Text = "Çáåðåæåííÿ";
	}
	private: System::Void ôîíToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->Color = richTextBox1->BackColor;
		if (colorDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) richTextBox1->BackColor = colorDialog1->Color;
	}
	private: System::Void âèä³ëèòèÂñåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectAll();
		toolStripStatusLabel1->Text = "Âèä³ëèòè óâåñü òåêñò";
	}

	};
}