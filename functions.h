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

	array<String^>^ find(array<String^>^ gesamt, String^ filetype)
	{
		int l = gesamt->Length;
		int n;
		int m=0;

		array<String^>^ gefunden;

		gefunden = gesamt;

		for (n=0;n<=l-1;n++)
		{
			if(gesamt[n]->Contains(filetype))
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


public class umbenennen
{
	public:

	array<String^>^ veraendern(array<String^>^ dieAlten, String^ altZeichen, String^ neuZeichen, int menge)
	{
		array<String^>^ newnames;
		
		/* erstelltes Array auf die richtige Größe vorbereiten */
		newnames->Resize(newnames, menge);

		if (altZeichen=="")
			return dieAlten;

		for (int n = 0; n < menge; n++) {
			if(dieAlten[n]->Contains(altZeichen))
				newnames[n] = dieAlten[n]->Replace(altZeichen, neuZeichen);
			else
				newnames[n] = dieAlten[n]->Copy(dieAlten[n]);
		}
		return newnames;
	}

	array<String^>^ addNumbers(array<String^>^ dieAlten, int menge)
	{
		if (menge >= 100)
			return dieAlten;
		
		array<String^>^ newnames;
		
		/* erstelltes Array auf die richtige Größe vorbereiten */
		newnames->Resize(newnames, menge);

		for (int n = 0; n < menge; n++) {
			if (n < 9)
				newnames[n] = "0" + (n + 1) + "#" + dieAlten[n];
			else
				newnames[n] = (n + 1)+ "#" + dieAlten[n];
		}
		return newnames;
	}
};