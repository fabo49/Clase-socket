/**
  * Universidad de Costa Rica
  * Escuela de Ciencias de la Computacion e Informatica
  * Laboratorio de Redes de Computadoras
  * Laboratorio 4: Sockets, cliente y servidor
  * @author Fabian Rodriguez Obando
  * B25695
  * II Semestre 2015
  */

#include "Socket.h"
#include <iostream>

using namespace std;
int main(int argc, char *argv[ ]){

    Socket s;
    char buffer[512];

    s.Connect( argv[2], 9876 ); // Same port as server
    s.Write( argv[1], 80 );		// Send first program argument to server
    s.Read( buffer, 512 );		// Read the answer sent back from server

}
