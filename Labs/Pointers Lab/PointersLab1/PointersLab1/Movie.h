#include <string>

using namespace std;

class Movie
{
	private:
		string *m_name; //ONLY HOLDING THE LOCATION, NOT THE ACTUAL DATA!
		string *m_rating;

	public:
		Movie();
		Movie(string name, string rating);

		string GetName();
		string GetRating();

		void SetName(string name);
		void SetRating(string rating);

		~Movie();
};