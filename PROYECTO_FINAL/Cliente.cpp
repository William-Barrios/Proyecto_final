#include "Cliente.h"

Cliente::Cliente(){
<<<<<<< HEAD
<<<<<<< HEAD
    dni = " ";
}

void Cliente::registrarse_cli(){
=======
    dni = " ";
}

bool Cliente::registrarse_cli(){
>>>>>>> 2a3bc346442c75b57baac00506d4960b90b35eca
    ofstream escritura;
    ifstream verificador;
    string auxCodigo;
    bool coincidencia=false;
    verificador.open("clientes.txt",ios::in);
    escritura.open("clientes.txt",ios::out | ios::app);
    if(escritura.is_open()&&verificador.is_open())
    {
        cout<<"<----- Registrarse ----->";
        fflush(stdin);
        system("cls");
        cout<<"Ingrese su contrasena: ";
        cin >> auxCodigo;
        if(auxCodigo == "")
            do
            {
                cout<<"Contrasena no v\240lido!, intentalo nuevamente: ";
                cin >> auxCodigo;
            }
            while(auxCodigo == "");
        do
        {
            verificador.seekg(0);
            getline(verificador,contrasena);
            while(!verificador.eof())
            {
                getline(verificador,usuario);
                getline(verificador,direccion);
                getline(verificador,telefono);
                getline(verificador,dni);

                if(contrasena == auxCodigo)
                {
                    coincidencia=true;
                    cout<<"Ya existe un cliente con esa clave!" << endl;
                    //cout<<"El cliente con esa clave es: "<< usuario << endl;  //se elimina esta dado que revela contrase�a de otro usuario
                    cout<<"Ingresa una clave diferente!: ";
                    cin >> auxCodigo;
                    if(auxCodigo == "")
                        do
                        {
                            cout << "\nCodigo de cliente no v\240lido!, intentalo nuevamente: ";
                            cin >> auxCodigo;
                        }
                        while(auxCodigo == "");
                    break;
                }

                getline(verificador,contrasena);
            }

            if(verificador.eof()&& auxCodigo != contrasena)
                coincidencia=false;

        }
        while(coincidencia==true);
        system("cls");
        contrasena = auxCodigo;
        cout<<"<----- Registrarse como Cliente ----->" << endl;
        cout<<"Contrasena: ";
        cout<< contrasena << endl;
        fflush(stdin);
        cout<<"Ingresa tu Nombre de Usuario: ";
        cin >> usuario;
        fflush(stdin);
        cout<<"Ingresa tu Direccion: ";
        getline(cin,direccion);
        fflush(stdin);
        cout<<"Ingresa tu N\243mero de Telefono: ";
        cin >> telefono;
        fflush(stdin);
		cout<<"Ingresa tu DNI: ";
        cin >> dni;

        escritura << contrasena <<"\n"<< usuario <<"\n"<< direccion <<"\n"<< telefono <<"\n"<< dni << endl;

        cout<<"El registro se ha completado correctamente." << endl;
<<<<<<< HEAD

        return false;
    }
    else
    {
        return true;
    }

    escritura.close();
    verificador.close();
	system("pause");
}

void Cliente::loguearse_cli(){
    cout << "<----- LogIn ----->" << endl;
    cout << "Usuario: ";
    cin >> usuaux;
    cout << "Contrasena: ";
    cin >> contraux;
    ifstream Cli_lec("clientes.txt", ios::in);
    Cli_lec >> contrasena;
    Cli_lec >> usuario;
    while(!Cli_lec.eof() && !encontrado){
        Cli_lec.ignore(10000, '\n');
        getline(Cli_lec,direccion);
        Cli_lec >> telefono;
        Cli_lec >> dni;
        if (usuario == usuaux && contrasena == contraux){
            int op;
            do{
                op = menu_cli();
                switch(op){
                    case 1:
						pedido.registrar_pedido(dni);
                        break;
                }
            }while(op != 2);
            encontrado = true;
        }
        Cli_lec >> contrasena;
        Cli_lec >> usuario;
    }
    if (!encontrado){
        cout << "El usuario y/o contrasena no es correcto..." << endl;
    }
    Cli_lec.close();
    system("pause");
=======
=======
>>>>>>> 2a3bc346442c75b57baac00506d4960b90b35eca

        return false;
    }
    else
    {
        return true;
    }

    escritura.close();
    verificador.close();
	system("pause");
}

void Cliente::loguearse_cli(){
    system("cls");
<<<<<<< HEAD
    log.loguearse_cli();
>>>>>>> dev
=======
    cout << "<----- LogIn ----->" << endl;
    cout << "Usuario: ";
    cin >> usuaux;
    cout << "Contrasena: ";
    cin >> contraux;
    ifstream Cli_lec("clientes.txt", ios::in);
    Cli_lec >> contrasena;
    Cli_lec >> usuario;
    while(!Cli_lec.eof() && !encontrado){
        Cli_lec.ignore(10000, '\n');
        getline(Cli_lec,direccion);
        Cli_lec >> telefono;
        Cli_lec >> dni;
        if (usuario == usuaux && contrasena == contraux){
            int op;
            do{
                op = menu_cli();
                switch(op){
                    case 1:
						pedido.registrar_pedido(dni);
                        break;
                }
            }while(op != 2);
            encontrado = true;
        }
        Cli_lec >> contrasena;
        Cli_lec >> usuario;
    }
    if (!encontrado){
        cout << "El usuario y/o contrasena no es correcto..." << endl;
    }
    Cli_lec.close();
    system("pause");
>>>>>>> 2a3bc346442c75b57baac00506d4960b90b35eca
}

void Cliente::Eliminar_registro(){
	
    system("cls");
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 2a3bc346442c75b57baac00506d4960b90b35eca
    ifstream Lectura("clientes.txt", ios::in);
    ofstream aux("Auxiliar.txt", ios::out);
    if (Lectura.is_open()){
        cout << "Colocar DNI: ";
        cin >> dniaux;
        Lectura >> contrasena;
        Lectura >> usuario;
        while(!Lectura.eof()){
            Lectura.ignore(10000, '\n');
            getline(Lectura,direccion);
            Lectura >> telefono;
            Lectura >> dni;
            if (dni == dniaux){
                cout << "Contrasena: " << contrasena <<"\n"<< "Usuario: " << usuario <<"\n"<< "Direccion: " << direccion <<"\n"<< "Telefono: " << telefono <<"\n"<< "DNI: " << dni << endl;
                cout << "\t!!!! Registro Eliminado !!!!" << endl;
            } else {
                aux << contrasena <<"\n"<< usuario <<"\n"<< direccion <<"\n"<< telefono <<"\n"<< dni << endl;
            }
            Lectura >> contrasena;
            Lectura >> usuario;
        }
        Lectura.close();
        aux.close();
<<<<<<< HEAD
        system("pause");
=======
>>>>>>> 2a3bc346442c75b57baac00506d4960b90b35eca
    }else{
        cout << "Error" << endl;
    }

    remove("clientes.txt");
    rename("Auxiliar.txt", "clientes.txt");
<<<<<<< HEAD
=======
    log.eliminar();
>>>>>>> dev
=======
    system("pause");
}

int Cliente::cont_cli(){
	system("cls");
    int i = 0;
    ifstream lectura;
    lectura.open("clientes.txt", ios::in);
    if (lectura.is_open())
    {
        getline(lectura, contrasena);
        while (!lectura.eof())
        {
			i++;
			for (int k = 0; k < 5; k++){
				getline(lectura, usuario);
			}
			getline(lectura, contrasena);
		}
	}
	lectura.close();
	return i;
>>>>>>> 2a3bc346442c75b57baac00506d4960b90b35eca
}


void Cliente::Mostrar_registro(){
    system("cls");
<<<<<<< HEAD
<<<<<<< HEAD
	int i=0;
    ifstream lectura;
    lectura.open("clientes.txt",ios::in);
    if(lectura.is_open())
    {
        cout<<"\t\t\t\t***Listado de todos los Usuarios (Clientes)***\t\t\t\t\n\n";
        getline(lectura,contrasena);
        while(!lectura.eof())
        {
            i++;
            getline(lectura,usuario);
            getline(lectura,direccion);
			getline(lectura,telefono);
            getline(lectura,dni);
            cout<<"Nombre: "<<usuario<<endl;
			cout<<"Direccion: "<<direccion<<endl;
			cout<<"Telefono: "<<telefono<<endl;
            cout << "--------------------------" << endl;
            getline(lectura,contrasena);
        }

        if(i==1){
            cout<<"Hay un solo usuario(cliente) registrado \n\n";
        }
        else{
            cout<<"Hay un total de "<< i <<" Usuarios(clientes) registrados \n\n";
        }
    }
    else
    {
        cout << "No hay registros!!!" << endl;
    }
    lectura.close();
=======
    log.mostrar();
>>>>>>> dev
=======
    int n = 0;
	int tamano = cont_cli();
	
	regc=new string*[tamano];              // Uso de punteros con obs para poder almacenar los obstaculos
    for(int i=0;i<tamano;i++){
        regc[i]=new string[5];
    }
	//string reg [tamano][5];
    
	ifstream lectura;
    lectura.open("clientes.txt", ios::in);
    if (lectura.is_open())
    {
		lectura.seekg(0);
        cout << "\t\t\t\t***Listado de todos los clientes***\t\t\t\t\n\n";
        getline(lectura, contrasena);
        while (!lectura.eof())
        {
            
            getline(lectura, usuario);
            getline(lectura, direccion);
            getline(lectura, telefono);
            getline(lectura, dni);
            
			
			regc [n][0] = contrasena;
			
			regc [n][1] = usuario;
		
			regc [n][2] = direccion;
			
			regc [n][3] = telefono;
			
			regc [n][4] = dni;
			/*
			cout << "Id: " << id << endl;
            cout << "Nombre: " << tipo << endl;
            cout << "Marca: " << marca << endl;
            cout << "Precio: S/" << precio << endl;
            cout << "Cantidad: " << cantidad << endl;
            cout << "--------------------------" << endl;*/
            getline(lectura, contrasena);
			n++;
			delete []regc;
        }
		
		for (int x = 0; x < tamano; x++){
			for (int k = 0; k < 5; k++){
				if (k==0){
					cout << "Id: " <<regc [x][k] << endl;
				}
				if (k==1){
					cout << "Nombre: " <<regc [x][k] << endl;
				}
				if (k==2){
					cout << "Marca: " <<regc [x][k] << endl;
				}
				if (k==3){
					cout << "Precio: S/" <<regc [x][k] << endl;
				}
				if (k==4){
					cout << "Cantidad: " <<regc [x][k] << endl;
				}
				
			}
			cout << "--------------------------" << endl;
		
		}
        if (tamano == 1) {
            cout << "Hay un solo cliente registrado en este programa\n\n";
        }
        else {
            cout << "Hay un total de " << tamano << " clientes registrados en programa\n\n";
        }
        lectura.close();
        system("pause");
       
    }
    else
    {
        lectura.close();
        system("pause");
    }
}

int Cliente::menu_cli(){
    int num;
    system("cls");
    cout << "<<-------Bienvenido "<< usuario << "------->>" << endl;
    cout << "1. Realizar Pedido" << endl;
    cout << "2. Salir" << endl;
    cout << "Opcion: ";
    cin >> num;
    return num;
>>>>>>> 2a3bc346442c75b57baac00506d4960b90b35eca
}
