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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	
	private:
		/// <summary>
		/// Erforderliche Designervariable.

		array<String^>^ neueNamen;
		array<String^>^ alteNamen;

		int anzahl;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(16, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(147, 212);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"alte Dateinamen";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(169, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(169, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(165, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(166, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"zu ändernde Zeichenkette";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(166, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"einzufügende Zeichenkette";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(207, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 26);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Ersetzen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->Location = System::Drawing::Point(340, 31);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(147, 212);
			this->listBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(337, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"neue Dateinamen";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(207, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 27);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Umbenennen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(169, 31);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 24);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Ordner auswählen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 266);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"mp3-Umbenenner";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
			 {
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 String ^alt = textBox1->Text;
			 String ^neu = textBox2->Text;

			 array<String^>^ oldnames=alteNamen;
			 array<String^>^ newnames;

			 int m = anzahl;

			 umbenennen dasda;

			 newnames = dasda.veraendern(oldnames, alt, neu, m);

			 neueNamen = newnames;

			 IEnumerator^ files = newnames->GetEnumerator();
			 listBox2->BeginUpdate();
			 listBox2->Items->Clear();
			 while ( files->MoveNext() )
			 {
				 String^ fileName = safe_cast<String^>(files->Current);
				 listBox2->Items->Add( fileName );
			 }
			 listBox2->EndUpdate();

			 button2->Enabled = true;

			 //if (!alterName) return;


			 /*static string newname[30]; 
			 newp = &newname[0];
			 string altstr, neustr;
			 int n,l,m,w,k;
			 
			 listBox2->Items->Clear();

			 altstr = gc2std(alt);
			 neustr = gc2std(neu);
			 k=altstr.length();

			 for (n=0; n<*anzahl;n++)
			 {
				newname[n]= *(oldp+n);
				l=newname[n].length();
				for (m=0;m<=l;m++)
				{
					w=newname[n].find(altstr,ios::cur);
					if (w!=-1)
					{
							  newname[n].erase(w,k);
							  newname[n].insert(w,neustr);
					}
				}
				listBox2->Items->Add( gcnew String((newname[n]).c_str()) );
				button2->Enabled = true;
			 }*/

		 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 array<String^>^ newnames = neueNamen;
			 array<String^>^ oldnames = alteNamen;


			 int n = anzahl;
			 int i;

			 for (i=0; i<=n; i++)
			 {
				 System::IO::File::Move(oldnames[i],newnames[i]);
			 }

			 /*string rename[30];
			 int n;
			 char nstring[100];

			 ofstream dings("do.bat");
			 for (n=0; n<*anzahl;n++)
			 {
				 rename[n]= "rename \"" +  *(oldp+n) +  "\" " + "\"" + *(newp+n) + "\"";
				 
				 //strcpy_s(nstring, rename[n].c_str());
				 //strcat_s(nstring, " (char *)");
				 //system(nstring);
				 dings << rename[n];
				 dings << char(10);
			 }
			 system("mach.bat");
			 system("del mach.bat");
			 system("del buffer.txt");*/
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 suche ziel;

			 String ^pfad;

			 System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();

			 if ( result == System::Windows::Forms::DialogResult::OK )
			 {
				 pfad = folderBrowserDialog1->SelectedPath;
			 }
			 else return;

			 array<String^>^ ordnerinhalt = ziel.readDirectory(pfad);

			 if (!ordnerinhalt) return; //bei Fehler beim auslesen des Ordners oder keine Dateien gefunden
			 
			 ordnerinhalt = ziel.filter(ordnerinhalt, pfad);

			 ordnerinhalt = ziel.find(ordnerinhalt);

			 alteNamen = ordnerinhalt;
			 
			 int n=0;

			 listBox1->BeginUpdate();
			 listBox1->Items->Clear();

			 IEnumerator^ files = ordnerinhalt->GetEnumerator();
			 while ( files->MoveNext() )
			 {
				 String^ fileName = safe_cast<String^>(files->Current);
				 listBox1->Items->Add( fileName );
				 n++;
			 }

			 anzahl=n;
			 
			 listBox1->EndUpdate();

			 if (ordnerinhalt->Length==0)
			 {
				 System::Windows::Forms::MessageBox::Show("keine mp3s gefunden");
				 return;
			 }
			 
			 button1->Enabled = true;
		 }
};
}


//zur konvertierung String -> string
/*string gc2std(System::String^ s)  
	{  
		using System::IntPtr;  
  		using System::Runtime::InteropServices::Marshal;  
		IntPtr ip = Marshal::StringToHGlobalAnsi(s);  
		std::string ss = static_cast<const char*>(ip.ToPointer());  
		Marshal::FreeHGlobal(ip);  
		return ss;  
	}*/  