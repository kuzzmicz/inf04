#include <iostream>
/*************************
*nazwa klasy: film
*pola: title - tytul filmu, zmienna typu std::string
*      rentedFilms - liczba wypozyczen, zmienna typu int
*metody: 
*        film (konstruktor) -  inicjalizuje pola wartoscia pusta lub 0
*        setTitle, void (brak wartosci zwracanych) - ustawia tytul
*        getTitle, std::string - pobiera tytul
*        getRentedFilms, int - pobiera liczbe wypozyczen
*        incrementRentedFilms, void (brak wartosci zwracanych) - realizuje inkrementacje liczby wypozyczen
*informacje: klasa Film zawiera w sobie chronione pola title i rentedFilms i publiczne metody:
*konstruktor, setTitle, getTitle, getRentedFilms i incrementRentedFilms. Klasa zostala przetestowana pod wzgledem
* dzialania wszytskich metod i inicjalizacji obiektu
*autor: kuzzmicz
*************************/
class film{
protected:
    std::string title;
    int rentedFilms;

public:
    film() {
        title = "";
        rentedFilms = 0;
    }
    void setTitle(std::string x) {
        title = x;
    }

    std::string getTitle() {
        return title;
    }

    int getRentedFilms() {
        return rentedFilms;
    }
    
    void incrementRentedFilms() {
        rentedFilms++;
    }
};
int main()
{
    film firstFilm;
    //Test inicjalizacji obiektu + stan przed zastosowaniem metod
    std::cout << "The title is: " << firstFilm.getTitle() << ", how many films have been rented: " << firstFilm.getRentedFilms() << std::endl;
    //Test dzialania metody setTitle
    firstFilm.setTitle("Requiem for a dream");
    //Test dzialania metody incrementRentedFilms
    firstFilm.incrementRentedFilms();
    firstFilm.incrementRentedFilms();
    firstFilm.incrementRentedFilms();
    //Wyswietlanie zawartosci pol po zastosowaniu metod + test dzialania metody getTitle
    std::cout << "The title is: " << firstFilm.getTitle() << ", how many films have been rented: " << firstFilm.getRentedFilms() << std::endl;
}
