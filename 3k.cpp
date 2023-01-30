#include <iostream>
#include <clocale>

int** Create(int n, int m);            
void Input(int** M, int n, int m);   
void Print(int** M, int n, int m);   
int main()

{ int n, m;
    std :: cout << "Kol-vo strok matrix: \n";
    std :: cin >> n;
    std :: cout << "Kol-vo stlobcov matrix: \n";
    std :: cin >> m;
    
    int** array= Create(n, m);
    
   
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            array[i][j] = 1 + rand() % 70;
    Input(array, n, m);
    Print(array, n, m);

}
int** Create(int n, int m)
{ int** M = new int* [n];
    for (int i = 0; i < n; i++)
    {
        M[i] = new int[m];
    }
    return M;
}

void Input(int** M, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << "M[" << i << "][" << j << "]= \n";
            std::cin >> M[i][j]; 
                ;
        }

    }
}
void Print(int** M, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << M[i][j] << " \n";
        }
        std::cout << endl; 
    }
    
}