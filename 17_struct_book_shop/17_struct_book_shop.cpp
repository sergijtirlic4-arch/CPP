#include <iostream>
using namespace std;

struct Book {
	unsigned short id;
    char title[50];
	char author[50];
	char publisher[50];
	char genre[50];
	int publication_year;
	float price;
};

void ChangePrice(Book* library, int size) {
    int id;
    cout << "Enter id: " << endl; cin >> id;
    if (id < 0 || id >= size) {
        cout << "Error id";
        return;
    }
    else {
        float new_price;
        cout << "Enter new price: "; cin >> library[id].price;
    }
}

void ChangeData(Book* library, int size) {
    int id;
    cout << "Enter id: " << endl; cin >> id;
    cout << "\n--- Editing Book: \"" << library[id].title << "\" ---\n";
    cout << "1. Change Title\n2. Change Author\n3. Change Publisher\n"
        << "4. Change Genre\n5. Change Year\n6. Change Price\n0. Cancel\nChoice: ";
    int choice;    
    cin >> choice;
    cin.ignore();
    if (id < 0 || id >= size) {
        cout << "Error id";
        return;
    }
    else
    {
        switch (choice) {
        case 1: cout << "Enter title: "; cin.getline(library[id].title, 50); break;
        case 2: cout << "Enter author: "; cin.getline(library[id].author, 50); break;
        case 3: cout << "Enter publisher: "; cin.getline(library[id].publisher, 50); break;
        case 4: cout << "Enter genre: "; cin.getline(library[id].genre, 50); break;
        case 5: cout << "Enter year: "; cin >> library[id].publication_year; break;
        case 6: cout << "Enter price: "; cin >> library[id].price; break;
        default: break;
        }
    }
}

void ShowAllBooks(Book* library, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "\nBook " << i + 1 << ": " << library[i].title << "\n";
        cout << "Author: " << library[i].author << "\n";
        cout << "Publisher: "<< library[i].publisher << "\n";
        cout << "Genre: "<< library[i].genre << "\n";
        cout << "Publication year: "<< library[i].publication_year << "\n";
        cout << "Price: " << library[i].price << "\n";
    }
}

void SearchByAuthor(Book* library, int size) {
    char author[50]{};
    cout << "Search by author: ";
    cin.getline(author, 50);
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (strcmp(library[i].author, author) == 0) {
            cout << "\nBook " << i + 1 << ": " << library[i].title << "\n";
            cout << "Author: " << library[i].author << "\n";
            cout << "Publisher: " << library[i].publisher << "\n";
            cout << "Genre: " << library[i].genre << "\n";
            cout << "Publication year: " << library[i].publication_year << "\n";
            cout << "Price: " << library[i].price << "\n";
            found = true;
        }
    }
    if (!found) cout << "Unknown autor\n";
}

void SearchByTitle(Book* library, int size) {
    char title[50]{};
    cout << "Search by title: ";
    cin.getline(title, 50);
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (strcmp(library[i].title, title) == 0) {
            cout << "\nBook " << i + 1 << ": " << library[i].title << "\n";
            cout << "Author: " << library[i].author << "\n";
            cout << "Publisher: " << library[i].publisher << "\n";
            cout << "Genre: " << library[i].genre << "\n";
            cout << "Publication year: " << library[i].publication_year << "\n";
            cout << "Price: " << library[i].price << "\n";
            found = true;
        }
    }
    if (!found) cout << "Unknown title\n";
}

void SearchByPublisher(Book* library, int size) {
    char publisher[50]{};
    cout << "Search by publisher: ";
    cin.getline(publisher, 50);
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (strcmp(library[i].publisher, publisher) == 0) {
            cout << "\nBook " << i + 1 << ": " << library[i].title << "\n";
            cout << "Author: " << library[i].author << "\n";
            cout << "Publisher: " << library[i].publisher << "\n";
            cout << "Genre: " << library[i].genre << "\n";
            cout << "Publication year: " << library[i].publication_year << "\n";
            cout << "Price: " << library[i].price << "\n";
            found = true;
        }
    }
    if (!found) cout << "Unknown publisher\n";
}

void SearchByGenre(Book* library, int size) {
    char genre[50]{};
    cout << "Search by genre: ";
    cin.getline(genre, 50);
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (strcmp(library[i].genre, genre) == 0) {
            cout << "\nBook " << i + 1 << ": " << library[i].title << "\n";
            cout << "Author: " << library[i].author << "\n";
            cout << "Publisher: " << library[i].publisher << "\n";
            cout << "Genre: " << library[i].genre << "\n";
            cout << "Publication year: " << library[i].publication_year << "\n";
            cout << "Price: " << library[i].price << "\n";
            found = true;
        }
    }
    if (!found) cout << "Unknown genre\n";
}

Book* AddBook(Book* library, int& size) {
    Book* new_library = new Book[size + 1];

    for (int i = 0; i < size; i++)
    {
        new_library[i] = library[i];
    }

    new_library[size].id = size;
    cout << "Enter title: ";
    cin.getline(new_library[size].title, 50);
    cout << "Enter author: ";
    cin.getline(new_library[size].author, 50);
    cout << "Enter publisher: ";
    cin.getline(new_library[size].publisher, 50);
    cout << "Enter genre: ";
    cin.getline(new_library[size].genre, 50);
    cout << "Enter publication year: ";
    cin >> new_library[size].publication_year;
    cout << "Enter price: ";
    cin >> new_library[size].price;

    delete[] library;
    size++;
    cout << "Book successfully added\n";
    return new_library;
}

Book* DeleteBook(Book* library, int& size) {
    Book* new_library = new Book[size - 1];
    int index;
    cout << "Enter book index to delete: "; cin >> index;

    if (index < 0 || index >= size) {
        cout << "Invalid index\n";
        return library;
    }


    for (int i = 0; i < index; i++)
    {
        new_library[i] = library[i];
    }

    for (int i = index + 1; i < size; i++)
    {
        new_library[i - 1] = library[i];
        new_library[i - 1].id = i - 1;
    }

    delete[] library;
    size--;
    cout << "Book successfully deleted\n";
    return new_library;
}
int main()
{
    int size = 10;
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

    int choice;
    do {
        cout << "\n================= MENU =================";
        cout << "\n1. Show all books";
        cout << "\n2. Edit book (ChangeData)";
        cout << "\n3. Change price";
        cout << "\n4. Search by author";
        cout << "\n5. Search by title";
        cout << "\n6. Search by publisher";
        cout << "\n7. Search by genre";
        cout << "\n8. Add new book";
        cout << "\n9. Delete book";
        cout << "\n0. Exit";
        cout << "\nYour choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1: ShowAllBooks(library, size); break;
        case 2: ChangeData(library, size); break;
        case 3: ChangePrice(library, size); break;
        case 4: SearchByAuthor(library, size); break;
        case 5: SearchByTitle(library, size); break;
        case 6: SearchByPublisher(library, size); break;
        case 7: SearchByGenre(library, size); break;
        case 8: library = AddBook(library, size); break;
        case 9: library = DeleteBook(library, size); break;
        case 0: cout << "Goodbye!\n"; break;
        default: cout << "Wrong choice. Try again.\n"; break;
        }
    } while (choice != 0);

    delete[] library;
}
