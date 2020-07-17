
public class umbenennen
{
	public:

	array<String^>^ veraendern(array<String^>^ dieAlten, String^ altZeichen, String^ neuZeichen, int menge)
	{
		int n;

		if (altZeichen=="") return dieAlten;

		for (n=0;n<=menge-1;n++)
		{
			if(dieAlten[n]->Contains(altZeichen))
			{
				dieAlten[n] = dieAlten[n]->Replace(altZeichen, neuZeichen);
			}
		}

		return dieAlten;
	}
};