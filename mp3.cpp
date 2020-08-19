#include <iostream>
#include <string>
using namespace std;

 struct cancion
{
    string artista;
    string titulo;
    float duracion;
};

int main()
  {
	struct cancion MP3;

   {cout <<"Ingrese nombre del artista: ";;
	cin >> MP3.artista;
		cin.sync();
	cout <<"\nIngrese nombre del titulo: ";
	cin >> MP3.titulo;
	cin.sync();
	cout << "\nIngrese el tamaño (KB): ";
	cin >> MP3.duracion;



       cout << "El nombre del artista es : " << MP3.artista << endl ;
       getline(cin,sync);
        cout << "la cancion se llama : " << MP3.titulo  << endl;
        getline(cin.sync);
        cout << "y su peso es: " << MP3.duracion << " KB " << endl;
}

    return 0;
}
