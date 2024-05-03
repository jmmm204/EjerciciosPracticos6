Proceso PromedioSeccion
    Definir suma, nota, promedio, i como Real;
	
    suma <- 0;
	
    Para i <- 1 Hasta 10 Con Paso 1 Hacer
        Escribir "Ingrese la nota del estudiante ", i, ":";
        Leer nota;
        suma <- suma + nota;
    FinPara
	
    promedio <- suma / 10;
	
    Escribir "El promedio general de la sección es: ", promedio;
	
FinProceso
