#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Arr
{
private:
    int **value;
    int m,n;
    int param;

    void FillArray();
    void ViewArray();
    int MinValue();
    int MaxValue();

public:
    Arr();
    ~Arr();
    bool Menu();
};



int main()
{

    Arr array;

    while(array.Menu());

}

Arr::Arr()
{
    cout << "Podaj liczbę wierszy: ";
    cin >> n;
    cout << "Podaj liczbę kolumn: ";
    cin >> m;

    // Alocate memory for MxN tab
    ////////////////////////////////
    value = new int*[n];
    for(int i=0; i < n; i++)
    {
        value[i] = new int[m];

        // Fill with 0's
        for (int j=0; j<m; j++)
        {
            value [i][j] = 0;
        }
    }
}

Arr::~Arr()
{
    // Free alocate memory
    ////////////////////////////////
    for(int i=0; i < n; i++)
    {
       delete [] value[i];
    }
    delete [] value;
}

void Arr::FillArray()
{
    // Randomizin'
    srand(time(NULL));

    param = 0;
    cout << "Podaj parametr gornego limitu: ";
    cin >> param;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            value[i][j] = (rand()%(param+1));
        }
    }
}

void Arr::ViewArray()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << value[i][j] << "\t";
        }
        cout << endl;
    }   
}


int Arr::MinValue()
{
    int min = param;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(value[i][j] < min)
                min = value[i][j];
        }
    }
    return min;
}


int Arr::MaxValue()
{
    int max = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(value[i][j] > max)
                max = value[i][j];
        }
    }
    return max;
}

bool Arr::Menu()
{
    system("clear");
    int choose;
    cout << "==================================" << endl;
    cout << "\t\tMENU" << endl;
    cout << "==================================" << endl;
    cout << "1. Wypełnij losowymi liczbami" << endl;
    cout << "2. Wyswiel" << endl;
    cout << "3. Znajdz najminejsza wartosc" << endl;
    cout << "4. Znajdz najwieksza wartosc" << endl;
    cout << "0. Wyjdz"<< endl;
    cout << "==================================" << endl;
    cout << "Twoj wybor: ";
    cin >> choose;


    switch (choose)
    {
        case 1:
            Arr::FillArray();
            getchar();
            getchar();
            break;
        case 2:
            Arr::ViewArray();
            getchar();
            getchar();
            break;
        case 3:
            cout << Arr::MinValue() << endl;
            getchar();
            getchar();
            break;
        case 4:
            cout << Arr::MaxValue() << endl;
            getchar();
            getchar();
            break;
        case 0:
            cout << "Do wiedzenia!" << endl;
            break;
        default:
            cout << "Nie ma takiej opcji - wybierz ponownie!"<<endl;
            getchar();
            getchar();
    }

    return (bool)choose;
} 
