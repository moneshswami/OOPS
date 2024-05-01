#include <iostream>
#include <string>
using namespace std;

class media {
protected:
    string title;
    float price;

public:
    media() {
        title = " ";
        price = 0.0;
    }

    media(string t, float P) {
        title = t;
        price = P;
    }

    virtual void acceptInput() {
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }

    virtual void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class book : public media {
    int P_count;

public:
    book() {
        P_count = 0;
    }

    book(string t, float P, int pc) : media(t, P) {
        P_count = pc;
    }

    void acceptInput() override {
        media::acceptInput();
        cout << "Enter Page Count: ";
        cin >> P_count;
    }

    void display() override {
        media::display();
        cout << "Page Count: " << P_count << endl;
    }
};

class CD : public media {
    float time;

public:
    CD() {
        time = 0.0;
    }

    CD(string t, float p, float tim) : media(t, p) {
        time = tim;
    }

    void acceptInput() override {
        media::acceptInput();
        cout << "Enter Time in minutes: ";
        cin >> time;
    }

    void display() override {
        media::display();
        cout << "Time in minutes: " << time << endl;
    }
};

int main() {
    cout << "Enter Book information" << endl;
    book Bo;
    Bo.acceptInput();
    cout << endl << "Enter CD information" << endl;
    CD cd;
    cd.acceptInput();
    cout << endl << "Displaying Information" << endl;
    cout << "Book Information" << endl;
    Bo.display();
    cout << endl << "CD Information" << endl;
    cd.display();
    return 0;
}
