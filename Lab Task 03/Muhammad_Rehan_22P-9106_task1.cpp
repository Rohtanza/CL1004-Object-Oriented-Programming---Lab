#include <iostream>
#include <string>
#define space "\n\n\n"
#define tab "\t\t\t"
using namespace std;
struct MovieName
{
    string Title, Director, YearReleased;
};
void createMovieData(MovieName *MovieDetials)
{

    cout << space << tab << "ENTER MOVIE DETIALS:\n"
         << tab << "Enter Movie Title: ",
        getline(cin, MovieDetials->Title);
    cout << tab << "Enter Movie Director: ", getline(cin, MovieDetials->Director);
    cout << tab << "Enter Movie Year of Released: ", getline(cin, MovieDetials->YearReleased);
}
void displayMovieData(MovieName *MovieDetials)
{
    cout
        << space << tab << "DISPLAYING MOVIE DETIALS:\ns"
        << tab << "Enter Movie Title: " << MovieDetials->Title << endl;
    cout << tab << "Enter Movie Director: " << MovieDetials->Director << endl;
    cout << tab << "Enter Movie Year of Released: " << MovieDetials->YearReleased << endl
         << space;
}
int main()
{
    MovieName MovieDetials;
    createMovieData(&MovieDetials);
    displayMovieData(&MovieDetials);
    return 0;
}
