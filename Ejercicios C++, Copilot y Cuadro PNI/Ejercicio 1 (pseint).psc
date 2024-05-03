Proceso SumaNaturales
	Definir n, suma, i como entero;
	Escribir "Ingrese un numero: ";
	Leer n;
	
	suma <- 0;
	
	Para i <- 1 hasta n con paso 1 hacer;
		suma <- suma + i;
	FinPara
	
	Escribir "La suma de los numeros naturales desde 1 hasta ", n, " es: ", suma;
FinProceso
