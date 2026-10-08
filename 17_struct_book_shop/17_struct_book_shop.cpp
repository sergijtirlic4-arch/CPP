#include <iostream>
using namespace std;

struct Book {
	unsigned short id;
    char titel[50];
	char autor[50];
	char publisher[50];
	char genre[50];
	int publication_year;
	float price;
};

void ChangData(Book* library, int size) {
    int id;
    cout << "Enter id: " << endl; cin >> id;
    if (id < 0 || id >= size) {
        cout << "Error id";
        return;
    }
}

int main()
{
    const int size = 10;
    Book* library = new Book[size] {
    {0, "The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons", "Classic Fiction", 1925, 14.99},
    {1, "To Kill a Mockingbird", "Harper Lee", "J. B. Lippincott & Co.", "Southern Gothic", 1960, 12.50},
    {2, "1984", "George Orwell", "Secker & Warburg", "Dystopian", 1949, 10.99},
    {3, "The Hobbit", "J.R.R. Tolkien", "George Allen & Unwin", "Fantasy", 1937, 15.75},
    {4, "Pride and Prejudice", "Jane Austen", "T. Egerton", "Romance", 1813, 9.99},
    {5, "The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company", "Coming-of-age", 1951, 11.25},
    {6, "Brave New World", "Aldous Huxley", "Chatto & Windus", "Science Fiction", 1932, 13.40},
    {7, "Moby-Dick", "Herman Melville", "Harper & Brothers", "Adventure", 1851, 16.00},
    {8, "Fahrenheit 451", "Ray Bradbury", "Ballantine Books", "Dystopian", 1953, 8.99},
    {9, "The Lord of the Rings", "J.R.R. Tolkien", "George Allen & Unwin", "Fantasy", 1954, 25.00}
    };




    delete[] library;
}
