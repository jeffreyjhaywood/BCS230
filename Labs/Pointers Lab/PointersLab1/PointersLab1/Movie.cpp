#include "Movie.h"

Movie::Movie()
{
	m_name = new string;
	m_rating = new string;

	*m_name = "Avangers: Infinity War";
	*m_rating = "Awesome";
}

Movie::Movie(string newName, string newRating)
{
	*m_name = newName;
	*m_rating = newRating;
}



string Movie::GetName() { return *m_name; } // * Is called a dereference operator
string Movie::GetRating() { return *m_rating; }

void Movie::SetName(string name) { *m_name = name; }
void Movie::SetRating(string rating) { *m_rating = rating; }

Movie::~Movie()
{
	delete m_name;
	delete m_rating;
}
