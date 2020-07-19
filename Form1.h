#pragma once


namespace zeichenrename {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	///
	/// Warnung: Wenn Sie den Namen dieser Klasse ändern, müssen Sie auch
	///          die Ressourcendateiname-Eigenschaft für das Tool zur Kompilierung verwalteter Ressourcen ändern,
	///          das allen RESX-Dateien zugewiesen ist, von denen diese Klasse abhängt.
	///          Anderenfalls können die Designer nicht korrekt mit den lokalisierten Ressourcen
	///          arbeiten, die diesem Formular zugewiesen sind.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnDown;
	private: System::Windows::Forms::Button^  btnUp;
	private: System::Windows::Forms::CheckBox^  cbAddNumbers;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbOldString;
	private: System::Windows::Forms::TextBox^  tbNewString;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnRename;

	
	private:
		/// <summary>
		/// Erforderliche Designervariable.

		array<String^>^ gNewNames;
		array<String^>^ gOldNames;
		array<String^>^ gIntermediateNames;
		int gNumFiles;
		String^ gFilePath;

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbOldString = (gcnew System::Windows::Forms::TextBox());
			this->tbNewString = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnRename = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnDown = (gcnew System::Windows::Forms::Button());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->cbAddNumbers = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(14, 39);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(295, 324);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 18);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"alte Dateinamen";
			// 
			// tbOldString
			// 
			this->tbOldString->Location = System::Drawing::Point(320, 171);
			this->tbOldString->Margin = System::Windows::Forms::Padding(4);
			this->tbOldString->Name = L"tbOldString";
			this->tbOldString->Size = System::Drawing::Size(220, 22);
			this->tbOldString->TabIndex = 2;
			this->tbOldString->TextChanged += gcnew System::EventHandler(this, &Form1::tbOldString_TextChanged);
			// 
			// tbNewString
			// 
			this->tbNewString->Location = System::Drawing::Point(320, 226);
			this->tbNewString->Margin = System::Windows::Forms::Padding(4);
			this->tbNewString->Name = L"tbNewString";
			this->tbNewString->Size = System::Drawing::Size(220, 22);
			this->tbNewString->TabIndex = 3;
			this->tbNewString->TextChanged += gcnew System::EventHandler(this, &Form1::tbNewString_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(317, 151);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"zu ändernde Zeichenkette";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(317, 206);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"einzufügende Zeichenkette";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(548, 39);
			this->listBox2->Margin = System::Windows::Forms::Padding(4);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(295, 324);
			this->listBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(545, 18);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"neue Dateinamen";
			// 
			// btnRename
			// 
			this->btnRename->Enabled = false;
			this->btnRename->Location = System::Drawing::Point(369, 330);
			this->btnRename->Margin = System::Windows::Forms::Padding(4);
			this->btnRename->Name = L"btnRename";
			this->btnRename->Size = System::Drawing::Size(128, 33);
			this->btnRename->TabIndex = 9;
			this->btnRename->Text = L"Umbenennen";
			this->btnRename->UseVisualStyleBackColor = true;
			this->btnRename->Click += gcnew System::EventHandler(this, &Form1::btnRename_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(320, 91);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(220, 30);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Ordner auswählen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(320, 63);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(220, 22);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L".mp3";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(317, 42);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Filter";
			// 
			// btnSave
			// 
			this->btnSave->Enabled = false;
			this->btnSave->Location = System::Drawing::Point(320, 282);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(103, 33);
			this->btnSave->TabIndex = 13;
			this->btnSave->Text = L"Merken";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// btnReset
			// 
			this->btnReset->Enabled = false;
			this->btnReset->Location = System::Drawing::Point(437, 282);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(103, 33);
			this->btnReset->TabIndex = 14;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// btnDown
			// 
			this->btnDown->Location = System::Drawing::Point(162, 366);
			this->btnDown->Name = L"btnDown";
			this->btnDown->Size = System::Drawing::Size(52, 23);
			this->btnDown->TabIndex = 15;
			this->btnDown->Text = L"Down";
			this->btnDown->UseVisualStyleBackColor = true;
			this->btnDown->Click += gcnew System::EventHandler(this, &Form1::btnDown_Click);
			// 
			// btnUp
			// 
			this->btnUp->Location = System::Drawing::Point(104, 366);
			this->btnUp->Name = L"btnUp";
			this->btnUp->Size = System::Drawing::Size(52, 23);
			this->btnUp->TabIndex = 16;
			this->btnUp->Text = L"Up";
			this->btnUp->UseVisualStyleBackColor = true;
			this->btnUp->Click += gcnew System::EventHandler(this, &Form1::btnUp_Click);
			// 
			// cbAddNumbers
			// 
			this->cbAddNumbers->AutoSize = true;
			this->cbAddNumbers->Location = System::Drawing::Point(320, 255);
			this->cbAddNumbers->Name = L"cbAddNumbers";
			this->cbAddNumbers->Size = System::Drawing::Size(197, 21);
			this->cbAddNumbers->TabIndex = 17;
			this->cbAddNumbers->Text = L"Nummerierung hinzufügen";
			this->cbAddNumbers->UseVisualStyleBackColor = true;
			this->cbAddNumbers->CheckedChanged += gcnew System::EventHandler(this, &Form1::cbAddNumbers_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 402);
			this->Controls->Add(this->cbAddNumbers);
			this->Controls->Add(this->btnUp);
			this->Controls->Add(this->btnDown);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnRename);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbNewString);
			this->Controls->Add(this->tbOldString);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Datei-Umbenenner";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
			 {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();

			 if ( result == System::Windows::Forms::DialogResult::OK )
				 gFilePath = folderBrowserDialog1->SelectedPath;
			 else
				 return;

			 folderUpdate();
		 }
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 folderUpdate();
		 }
	private: System::Void tbOldString_TextChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 filenameUpdate();
		 }
	private: System::Void tbNewString_TextChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 filenameUpdate();
		 }

		void filenameUpdate()
		{
			if ((tbOldString->Text == "" && !cbAddNumbers->Checked) || gNumFiles == 0)
				 goto filenameFail;

			 umbenennen dasda;

			 gNewNames = dasda.veraendern(gIntermediateNames, tbOldString->Text, tbNewString->Text, gNumFiles);

			 if (cbAddNumbers->Checked)
				 gNewNames = dasda.addNumbers(gNewNames, gNumFiles);

			 IEnumerator^ files = gNewNames->GetEnumerator();
			 listBox2->BeginUpdate();
			 listBox2->Items->Clear();
			 String^ fileName;
			 while ( files->MoveNext() )
			 {
				 fileName = safe_cast<String^>(files->Current);
				 listBox2->Items->Add( fileName );
			 }
			 listBox2->EndUpdate();

			 btnSave->Enabled = true;
			 btnRename->Enabled = true;
			 
			 return;

filenameFail:
			 listBox2->Items->Clear();
			 btnRename->Enabled = false;
			 btnSave->Enabled = false;
			 return;
		}

		void folderUpdate()
		{
			if (!gFilePath)
				goto folderFail;
			
			suche ziel;
			array<String^>^ ordnerinhalt = ziel.readDirectory(gFilePath);
			
			/* bei Fehler beim auslesen des Ordners oder keine Dateien gefunden */
			if (!ordnerinhalt)
				goto folderFail;

			/* Dateinamen in gewünschtes Format schneiden */
			ordnerinhalt = ziel.filter(ordnerinhalt, gFilePath);
			ordnerinhalt = ziel.find(ordnerinhalt, textBox3->Text);

			gOldNames = ordnerinhalt;

			IEnumerator^ files = ordnerinhalt->GetEnumerator();
			int n=0;
			listBox1->BeginUpdate();
			listBox1->Items->Clear();
			while ( files->MoveNext() ) {
				String^ fileName = safe_cast<String^>(files->Current);
				listBox1->Items->Add( fileName );
				n++;
			}
			gNumFiles = n;
			listBox1->EndUpdate();

			if (gNumFiles == 0)
				goto folderFail;
			
			/* IntermediateNames als Grundlage für Bearbeitung speichern */
			gIntermediateNames->Resize(gIntermediateNames, gNumFiles);
			gOldNames->Copy(gOldNames, gIntermediateNames, gNumFiles);

			if (gNumFiles)
				 gIntermediateNames->Copy(gOldNames, gIntermediateNames, gNumFiles);
			
			filenameUpdate();

			return;

folderFail:
			//System::Windows::Forms::MessageBox::Show("keine mp3s gefunden");
			gNumFiles = 0;
			filenameUpdate();
			
			btnRename->Enabled = false;
			btnReset->Enabled = false;
			btnSave->Enabled = false;
			return;
		}

private: System::Void btnRename_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 for (int i=0; i<gNumFiles; i++)
				 System::IO::File::Move(gFilePath + "\\" + gOldNames[i], gFilePath + "\\" + gNewNames[i]);
				//System::Windows::Forms::MessageBox::Show(gFilePath + "\\" + gOldNames[i] + " -> " + gFilePath + "\\" + gNewNames[i]);

			 folderUpdate();
		 }
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 gIntermediateNames->Copy(gNewNames, gIntermediateNames, gNumFiles);

			 tbNewString->Clear();
			 cbAddNumbers->Checked = false;
			 btnReset->Enabled = true;
		 }
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if (gNumFiles)
				 gIntermediateNames->Copy(gOldNames, gIntermediateNames, gNumFiles);

			 filenameUpdate();
		 }
private: System::Void btnDown_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 int pos = listBox1->SelectedIndex;

			 if (pos == -1 || pos >= gNumFiles - 1)
				return;

			 String^ swap;

			 /* String Arrays */
			 swap = gOldNames[pos];
			 gOldNames[pos] = gOldNames[pos + 1];
			 gOldNames[pos + 1] = swap;
			 
			 swap = gIntermediateNames[pos];
			 gIntermediateNames[pos] = gIntermediateNames[pos + 1];
			 gIntermediateNames[pos + 1] = swap;

			 filenameUpdate();
			 
			 /* Listbox */
			 swap = listBox1->SelectedItem->ToString();
			 listBox1->Items->RemoveAt(pos);
			 listBox1->Items->Insert(pos + 1, swap);
			 listBox1->SetSelected(pos + 1, true);
		 }
private: System::Void btnUp_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 int pos = listBox1->SelectedIndex;

			 if (pos <= 0)
				return;
			 
			 String^ swap;

			 /* String Arrays */
			 swap = gOldNames[pos];
			 gOldNames[pos] = gOldNames[pos - 1];
			 gOldNames[pos - 1] = swap;
			 
			 swap = gIntermediateNames[pos];
			 gIntermediateNames[pos] = gIntermediateNames[pos - 1];
			 gIntermediateNames[pos - 1] = swap;

			 filenameUpdate();
			 
			 /* Listbox */
			 swap = listBox1->SelectedItem->ToString();
			 listBox1->Items->RemoveAt(pos);
			 listBox1->Items->Insert(pos - 1, swap);
			 listBox1->SetSelected(pos - 1, true);
		 }
private: System::Void cbAddNumbers_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 filenameUpdate();
		 }
};
}