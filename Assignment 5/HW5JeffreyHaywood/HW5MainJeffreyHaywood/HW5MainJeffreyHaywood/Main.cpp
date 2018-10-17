#include "Artist.h"
#include "AlbumTime.h"
#include "Song.h"
#include "Album.h"
#include <string>
#include <iostream>
#include <fstream>

int main()
{
	//Calls default constructor
	Artist a;
	//Calls copy constructor
	Artist a2(a);
	//Calls SetName
	a.SetName("Momoland");
	//Calls SetCountry
	a.SetCountry("S. Korea");
	//Calls GetName
	std::cout << a.GetName() << std::endl;
	//Calls GetCountry
	std::cout << a.GetCountry() << std::endl;
	//Calls operator= overload
	a = a2;
	//Calls ostream operator overload
	std::cout << a << std::endl;

	//Calls default constructor
	Time t;
	//Calls copy constructor
	Time t2(t);
	//Calls SetMinutes
	t.SetMinutes(5);
	//Calls SetSeconds
	t.SetSeconds(30);
	//Calls GetMinutes
	std::cout << t.GetMinutes() << std::endl;
	//Calls GetSeconds
	std::cout << t.GetSeconds() << std::endl;
	//Calls operator= overload
	t = t2;
	//Calls ostream operator overload
	std::cout << t << std::endl;

	//Calls default constructor
	Song s;
	//Calls copy constructor
	Song s2(s);
	//Calls SetTitle
	s.SetTitle("Bboom Bboom");
	//Calls SetTime
	s.SetTime(t);
	//Calls GetTitle
	std::cout << s.GetTitle() << std::endl;
	//Calls GetTime()
	std::cout << s.GetTime().GetMinutes() << std::endl;
	std::cout << s.GetTime().GetSeconds() << std::endl;
	//Calls operator= overload
	s = s2;
	//Calls ostream operator overload
	std::cout << s << std::endl;

	//Calls default constructor
	Album al;
	//Calls copy constructor
	Album al2(al);
	//Calls SetTitle
	al.SetTitle("Momo");
	//Calls GetTitle
	std::cout << al.GetTitle() << std::endl;
	//Calls CalcTotalTime
	std::cout << al.CalcTotalTime().GetMinutes() << std::endl;
	std::cout << al.CalcTotalTime().GetSeconds() << std::endl;
	//Calls operator= overload
	al = al2;
	//Calls ostream operator overload
	std::cout << al << std::endl;
	//Calls Read
	al.Read("AlbumInput.txt");
	//Calls Write
	al.Write("AlbumOutput.txt");
	//Calls Display
	al.Display();

	return 0;
}
