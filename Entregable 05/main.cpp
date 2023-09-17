#include <iostream>
#include <fstream>
#include <sstream>

#include "Lista.h"
#include "Consulta.h"

using namespace std;

#include "ArchivoPaciente.h"

int main () {

    Lista<Consulta> miListaDeConsultas;
    ArchivoPaciente miArchivo;
    string nameFile = "respaldo_consultas.file";

    //cout << "Dame el nombr del Archivo ==>  ";
    //fflush(stdin);
    //getline(cin, nameFile);

    miListaDeConsultas = miArchivo.importBackup(nameFile);

    system("cls");
    //miListaDeConsultas.imprimir(false);

    return 0;
}