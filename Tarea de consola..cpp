#include <iostream>
#include <mysql.h>

int main()
int q_estado;
{
    MYSQL * conectar;
	mysql_row fila;
	mysql_res * resultado;


    conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "localhost", "usrempresa", "Abc123_456@", "empresa", 3306, NULL, 0);
	if (conectar) {
		cout << "conexion Exitosa";
		string puesto;
		cout << "ingrese producto";
		cin >> puesto;
			string insert = "insert into producto(producto)" values(" ' + producto + "')";
				const char* i = insert.c_str;
			q_estado = mysql_querry(conectar, i);
		if (!q_estado) {
			cout<< "ingreso exitoso"
			}
		else {
			cout << "conexion no exitosa";
			}
	
		string consulta = "select * from producto";
		const char* c = consulta.c_str();
		q_estado = mysql_query(conectar, c);
		if (!q_estado){
			resultado = mysqk_store_result(conectar);
			while(fila = mysql_fetch_row(resultado){
				cout << fila[0]<< "," << fila [1];
					}
		else {
		cout << "conexion no exitosa"; 
	}






	system("pause");
	return 0;

}







// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración
