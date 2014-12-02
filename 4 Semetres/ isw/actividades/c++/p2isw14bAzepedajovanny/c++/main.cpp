/* @Autor  Jovanny Zepeda
    Practica numero 2
    Practica1_SBDA
*/
///definicion de librerias
#include <iostream>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<fstream>
///declaracion de constantes  simbolicas
#define IVA 0.16
#define RETENCION 0.1
#define ISR 0.11
using namespace std;
void guardar(float ingreso[12],float gasto[12],char meses[12][30]){
                remove("gastos.txt");
                remove("ingresos.txt");
                int z;
                ofstream gastos("gastos.txt");
                ofstream ingresos("ingresos.txt");
                for(z=0;z<12;z++){
                gastos<<meses[z]<<"  :  "<<gasto[z]<<"\n";
                ingresos<<meses[z]<<"  :  "<<ingreso[z]<<"\n";
                }
                gastos.close();
                ingresos.close();
}
int main()
{
    ///declaracion de constantes y arreglo de meses
    float subtotal,total,ingreso[12],gasto[12],ganancia_bruta,ganancia_neta,isr_pagar,iva_pagar,gasto_iva,
    iva_generado,retencion_iva,retencion_isr,isr_generado;
    int opcion,elegir_mes,x;
    char mes_actual[30],arreglo_meses[12][30],enter;
    for(x=0;x<12;x++)
    {
    ingreso[x]=0;
    gasto[x]=0;
    }
    strcpy(mes_actual,"Enero");
    elegir_mes=1;
    strcpy(arreglo_meses[0],"Enero");
    strcpy(arreglo_meses[1],"Febrero");
    strcpy(arreglo_meses[2],"Marzo");
    strcpy(arreglo_meses[3],"Abril");
    strcpy(arreglo_meses[4],"mayo");
    strcpy(arreglo_meses[5],"Junio");
    strcpy(arreglo_meses[6],"Julio");
    strcpy(arreglo_meses[7],"Agosto");
    strcpy(arreglo_meses[8],"Septiembre");
    strcpy(arreglo_meses[9],"Octubre");
    strcpy(arreglo_meses[10],"Noviembre");
    strcpy(arreglo_meses[11],"Diciembre");
    /// Inicio del ciclo do - while
    do{
        ///Visualizacion del menu principal
        cout<<"CALCULO DE IMPUESTOS ANUAL"
            <<"\n\nMenu principal:"
            <<"\n1. Establecer mes de captura (mes actual es "<<mes_actual<<")"
            <<"\n2. Captura de Ingresos"
            <<"\n3. Captura de gastos"
            <<"\n4. Mostrar lista de ingresos anual"
            <<"\n5. Mostrar lista de gastos anual"
            <<"\n6. Calculo de impuestos anual"
            <<"\n7. Salir\n"
            <<"\nOpcion:  ";
        cin>>opcion;
        switch(opcion){
        ///Establecimiento del mes
            case 1:
                system("clear");
                cout<<"Establecer el mes de captura\n"
                    <<"1) Enero"
                    <<"\n2) Febrero"
                    <<"\n3) Marzo"
                    <<"\n4) Abril"
                    <<"\n5) Mayo"
                    <<"\n6) Junio"
                    <<"\n7) Julio"
                    <<"\n8) Agosto"
                    <<"\n9) Septiembre"
                    <<"\n10) Octubre"
                    <<"\n11) Noviembre"
                    <<"\n12) Diciembre\n"
                    <<"Elige el mes (1-12) : ";
                cin>>elegir_mes;
        ///validacion de numero de mes y copiado en caso de ser aceptado
                if(elegir_mes>0&&elegir_mes<13){
                    strcpy(mes_actual,arreglo_meses[elegir_mes-1]);

                    }
                else
                    cout<<"\nError mes incorrecto\n";
                cout<<"Se ha establecido el mes de captura en "<<mes_actual;
                cin.ignore();
                cout<<"\n\nPresiona entrar para continuar...";
                while((enter=getchar())!='\n');
                system("clear");
            break;
            case 2:
            ///captura de ingreso
                cout<<"\n\nCaptura de ingresos:"
                    <<"\nDame el ingreso del mes de "<<mes_actual<<": ";
                cin>>ingreso[elegir_mes-1];
                cin.ignore();
                cout<<"\n\nPresiona entrar para continuar...\n";
                while((enter=getchar())!='\n');
                system("clear");
            break;
            case 3:
            ///captura de gasto a partir del mes correspondiente
                cout<<"\n\nCaptura de gastos:"
                <<"\nDame el gasto del mes de "<<mes_actual<<": ";
                cin>>gasto[elegir_mes-1];
                cin.ignore();
                cout<<"\nPresiona entrar para continuar\n";
                while((enter=getchar())!='\n');
                system("clear");

            break;
            case 4:
            ///mostrar datos de ingresos a partir de cada mes
                system("clear");
                cout<<"Mostrar lista de ingresos anual\n";
                for(x=0;x<12;x++)
                cout<<arreglo_meses[x]<<" = "<<ingreso[x]<<"\n";
                cin.ignore();
                cout<<"\nPresiona entrar para continuar...\n";
                while((enter=getchar())!='\n');
                system("clear");
            break;
            case 5:
            ///mostrar datos de gastos por cada mes
                system("clear");
                for(x=0;x<12;x++)
                cout<<arreglo_meses[x]<<" = "<<gasto[x]<<"\n";
                cin.ignore();
                cout<<"\nPresiona entrar para continuar\n";
                while((enter=getchar())!='\n');
                system("clear");
            break;
            case 6:
            int gastototal,ingresototal;
                system("clear");
                    gastototal=0;
                    ingresototal=0;
                    ///sumatoria del total de gastos e ingresos del anio
                for(x=0;x<12;x++){
                    gastototal=gastototal+gasto[x];
                    ingresototal=ingresototal+ingreso[x];
                }
                ///operaciones de variables
                iva_generado=IVA*ingresototal;
                subtotal=iva_generado+ingresototal;
                retencion_isr=RETENCION*ingresototal;
                retencion_iva=RETENCION*ingresototal;
                total=subtotal-(retencion_isr+retencion_iva);
                ganancia_bruta=ingresototal-gastototal;
                isr_generado=ISR*ganancia_bruta;
                ganancia_neta=ganancia_bruta-isr_generado;
                isr_pagar=isr_generado-retencion_isr;
                gasto_iva=IVA*gastototal;
                iva_pagar=iva_generado-(retencion_iva+gasto_iva);
    ///impresion de resultados obtenidos tras la realizacion de las operaciones
                cout<<"Calculo de impuestos anual\n***Tabla de Recibo de Honorarios***\n";
                cout<<"Ingreso         "<<ingresototal;
                cout<<"\nIva             "<<iva_generado;
                cout<<"\nSubtotal        "<<subtotal;
                cout<<"\nRetencion ISR   "<<retencion_isr;
                cout<<"\nRetencion IVA   "<<retencion_iva;
                cout<<"\nTotal           "<<total;
                cout<<"\n***Total de ganancias***\n";
                cout<<"Ingreso         "<<ingresototal;
                cout<<"\nGastos          "<<gastototal;
                cout<<"\nGanancia Bruta  "<<ganancia_bruta;
                cout<<"\nISR             "<<isr_generado;
                cout<<"\nGanancia neta   "<<ganancia_neta;
                cout<<"\n***Tabla ISR***\n";
                cout<<"ISR             "<<isr_generado;
                cout<<"\nISR retenido     "<<retencion_isr;
                cout<<"\nISR a pagar     "<<isr_pagar;
                cout<<"\n***Tabla IVA***\n";
                cout<<"IVA             "<<iva_generado;
                cout<<"\nGastos IVA      "<<gasto_iva;
                cout<<"\nRetencion IVA   "<<retencion_iva;
                cout<<"\nIVA a pagar     "<<iva_pagar;
                guardar(ingreso,gasto,arreglo_meses);
                cout<<"\nPresiona entrar para terminar...";
                cin.ignore();
                while((enter=getchar())!='\n');
                system("clear");
            break;
            case 7:
            break;
            default:
            cout<<"\nOpcion no valida\nPresione entrar para continuar...";
            cin.ignore();
            while((enter=getchar())!='\n');
             system("clear");
        }

        }while(opcion!=7);
        cin.ignore();
        cout<<"\nPresiona enter para terminar...\n";
        while((enter=getchar())!='\n');
    return 0;
}
