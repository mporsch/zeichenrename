using namespace System;
using namespace System::IO;
using namespace System::Collections;

public class suche
{
public:
	array<String^>^ readDirectory(String ^path)
	{
		array<String^>^ dirs;

		try     // Problem: CD-Laufwerke
		{		
			dirs = Directory::GetFiles(path);
		}
		
		catch(System::Exception^ e)
		{
			System::Windows::Forms::MessageBox::Show(e->Message);
			//dirs wird nicht erstellt!
		}

		return dirs;
	}

	array<String^>^ find(array<String^>^ gesamt)
	{
		int l = gesamt->Length;
		int n;
		int m=0;

		array<String^>^ gefunden;

		gefunden = gesamt;

		for (n=0;n<=l-1;n++)
		{
			if(gesamt[n]->Contains(".mp3"))
			{
				gefunden[m]=gesamt[n];
				m++;
			}
		}

		System::Array::Resize(gefunden, m); //Rest abschneiden
		
		return gefunden;
	}

	array<String^>^ filter(array<String^>^ alt, String ^path) //filtert die ordnerpfade aus den Pfaden ab
	{
		array<String^>^ neu;
		int l = path->Length;

		if (l!=3) l++; //weil "\" für laufwerk (c:\) immer mit dran, ansonsten nicht
		neu = alt;

		IEnumerator^ anzahl = alt->GetEnumerator();

		int n=0;
		while ( anzahl->MoveNext() )
		{
			String^ aktuell = safe_cast<String^>(anzahl->Current);
			neu[n] = aktuell->Substring(l);
			n++;
		}
		return neu;
	}
};