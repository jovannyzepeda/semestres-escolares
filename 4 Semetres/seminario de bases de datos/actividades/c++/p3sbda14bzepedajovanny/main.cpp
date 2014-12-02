/* @Autor  Jovanny Zepeda
    Practica numero 1
    Practica1_SBDA
*/
///definicion de librerias
#include <iostream>
#include <cstdio>
#include <cstring>
#include<cstdlib>
#include<fstream>
///declaracion de constantes  simbolicas
#define iva 0.16*ingresototal
#define retencion_isr 0.1*ingresototal
#define retencion_iva 0.1*ingresototal
#define isr porcentaje_referencial*ganancia_bruta
#define gasto_iva 0.16*gastototal
using namespace std;
class honorarios{
public:
    float subtotal,total,ingreso[12],gasto[12],ganancia_bruta,ganancia_neta,isr_pagar,iva_pagar,gastototal,ingresototal,
          porcentaje_referencial,montos_brutos[3],porcentajes_isr[3];
    int elegir_mes,x,limite_tabla_isr;
    char mes_actual[30],arreglo_meses[12][30],enter;
    void elecciones();
    void captura_ingresos();
    void captura_gastos();
    void iniciacion_calendario_y_componentes();
    void datos_ingreso();
    void datos_gasto();
    void resultados();
    void incorrecto();
    float calculo_isr(float ingresos_brutos);
    void guardar();
}tabla;
void  honorarios::elecciones(){
        ///Establecimiento del mes
        system("clear");
                    cout<<"Establecer el mes de captura\n"
                        <<"1) Enero\n2) Febrero\n3) Marzo\n4) Abril\n5) Mayo\n6) Junio\n7) Julio\n8) Agosto"
                        <<"\n9) Septiembre\n10) Octubre\n11) Noviembre\n12) Diciembre\n"
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
}
void honorarios::captura_ingresos(){
                ///captura de ingreso
                cout<<"\n\nCaptura de ingresos:"
                    <<"\nDame el ingreso del mes de "<<mes_actual<<": ";
                cin>>ingreso[elegir_mes-1];
                cin.ignore();
                cout<<"\n\nPresiona entrar para continuar...\n";
                while((enter=getchar())!='\n');
                system("clear");
}
void honorarios::captura_gastos(){
///captura de gasto a partir del mes correspondiente
                cout<<"\n\nCaptura de gastos:"
                <<"\nDame el gasto del mes de "<<mes_actual<<": ";
                cin>>gasto[elegir_mes-1];
                cin.ignore();
                cout<<"\nPresiona entrar para continuar\n";
                while((enter=getchar())!='\n');
                system("clear");
}
void honorarios::iniciacion_calendario_y_componentes(){
            ///declaracion de constantes y arreglo de meses
            ///intento recuperacion de datos
    ifstream ingresos("ingresos.txt");
    if(ingresos.good()){
        while(!ingresos.eof()){
            if(!ingresos.eof()){
                ingresos.read((char*)&x,sizeof(x));
                ingresos.read((char*)&ingreso[x],sizeof(ingreso[x]));
            }
        }
        ingresos.close();
    }else
    for(x=0;x<12;x++)
            ingreso[x]=0;

    ifstream gastos("gastos.txt");
    if(gastos.good()){
        while(!gastos.eof()){
            if(!gastos.eof()){
                gastos.read((char*)&x,sizeof(x));
                gastos.read((char*)&gasto[x],sizeof(gasto[x]));
            }
        }
        gastos.close();
    }else
    for(x=0;x<12;x++)
            gasto[x]=0;

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
    montos_brutos[0]=0;
    montos_brutos[1]=10000.01;
    montos_brutos[2]=20000.01;
    porcentajes_isr[0]=0.11;
    porcentajes_isr[1]=0.15;
    porcentajes_isr[2]=0.20;
    limite_tabla_isr=3;

}
void honorarios::datos_ingreso(){
///mostrar datos de ingresos a partir de cada mes
                system("clear");
                cout<<"Mostrar lista de ingresos anual\n";
                for(x=0;x<12;x++)
                cout<<arreglo_meses[x]<<" = "<<ingreso[x]<<"\n";
                cin.ignore();
                cout<<"\nPresiona entrar para continuar...\n";
                while((enter=getchar())!='\n');
                system("clear");
}
void honorarios::datos_gasto(){
            ///mostrar datos de gastos por cada mes
                system("clear");
                for(x=0;x<12;x++)
                cout<<arreglo_meses[x]<<" = "<<gasto[x]<<"\n";
                cin.ignore();
                cout<<"\nPresiona entrar para continuar\n";
                while((enter=getchar())!='\n');
                system("clear");
}
void honorarios::resultados(){
                system("clear");
                    gastototal=0;
                    ingresototal=0;
                    ///sumatoria del total de gastos e ingresos del anio
                for(x=0;x<12;x++){
                    gastototal=gastototal+gasto[x];
                    ingresototal=ingresototal+ingreso[x];
                }
                ///operaciones de variables
                subtotal=iva+ingresototal;
                total=subtotal-(retencion_isr+retencion_iva);
                ganancia_bruta=ingresototal-gastototal;
                calculo_isr(ganancia_bruta);
                ganancia_neta=ganancia_bruta-isr;
                isr_pagar=isr-retencion_isr;
                iva_pagar=iva-(retencion_iva+gasto_iva);
    ///impresion de resultados obtenidos tras la realizacion de las operaciones
                cout<<"Calculo de impuestos anual\n***Tabla de Recibo de Honorarios***\n"
                    <<"Ingreso         "<<ingresototal<<"\t\t\tIva             "<<iva<<"\nSubtotal        "<<subtotal
                    <<"\t\t\tRetencion ISR   "<<retencion_isr<<"\nRetencion IVA   "<<retencion_iva
                    <<"\t\t\tTotal           "<<total<<"\n\n***Total de ganancias***\n"
                    <<"Ingreso         "<<ingresototal<<"\t\t\tGastos          "<<gastototal<<"\nGanancia Bruta  "
                    <<ganancia_bruta<<"\t\t\tISR             "<<isr<<"\nGanancia neta   "<<ganancia_neta <<"\n\n***Tabla ISR***\n"
                    <<"ISR             "<<isr<<"\t\t\tISR retenido     "<<retencion_isr<<"\nISR a pagar     "<<isr_pagar
                    <<"\n\n***Tabla IVA***\n"<<"IVA             "<<iva<<"\t\t\tGastos IVA      "<<gasto_iva<<"\nRetencion IVA   "
                    <<retencion_iva<<"\t\t\tIVA a pagar     "<<iva_pagar<<"\nPresiona entrar para terminar...";
                cin.ignore();
                while((enter=getchar())!='\n');
                system("clear");
}
void honorarios::incorrecto(){
///aplicable si se llega a presionar una opcion invalida
            cout<<"\nOpcion no valida\nPresione entrar para continuar...";
            cin.ignore();
            while((enter=getchar())!='\n');
             system("clear");
}
float honorarios::calculo_isr(float ingresos_brutos){
    int bandera_detencion=0;
        x=1;
    if(ingresos_brutos<=0)porcentaje_referencial=0;
    else
    while(bandera_detencion!=1){
        if(ingresos_brutos<montos_brutos[x]){
            porcentaje_referencial=porcentajes_isr[x-1];
            break;
        }else{
            x++;
            if(x>=limite_tabla_isr){
            porcentaje_referencial=porcentajes_isr[limite_tabla_isr-1];
            break;
            }
        }
    }
    return porcentaje_referencial;
}
void honorarios::guardar(){
    ofstream gastos("gastos.txt");
    ofstream ingresos("ingresos.txt");
             for(x=0;x<12;x++){
                gastos.write((char*)&x,sizeof(x));
                gastos.write((char*)&gasto[x],sizeof(gasto[x]));
                ingresos.write((char*)&x,sizeof(x));
                ingresos.write((char*)&ingreso[x],sizeof(ingreso[x]));
             }
             gastos.close();
             ingresos.close();
    cin.ignore();
    cout<<"\nDatos almacenados correctamente, Presiona entrar para continaur...\n";
    while((enter=getchar())!='\n');
    system("clear");
}
int main()
{       int opcion;
    tabla.iniciacion_calendario_y_componentes();
    /// Inicio del ciclo do - while
    do{
        ///Visualizacion del menu principal
        cout<<"CALCULO DE IMPUESTOS ANUAL"
            <<"\n\nMenu principal:"
            <<"\n1. Establecer mes de captura (mes actual es "<<tabla.mes_actual<<")"
            <<"\n2. Captura de Ingresos\n3. Captura de gastos\n4. Mostrar lista de ingresos anual"
            <<"\n5. Mostrar lista de gastos anual\n6. Calculo de impuestos anual\n7. Guardar el archivo\n8. Salir\n\nOpcion:  ";
        cin>>opcion;
        switch(opcion){
            case 1:
                    tabla.elecciones();
            break;
            case 2:
                    tabla.captura_ingresos();
            break;
            case 3:
                    tabla.captura_gastos();
            break;
            case 4:
                    tabla.datos_ingreso();
            break;
            case 5:
                    tabla.datos_gasto();
            break;
            case 6:
                    tabla.resultados();
            break;
            case 7:
                    tabla.guardar();
            break;
            case 8:
            break;
            default:
                    tabla.incorrecto();
        }

        }while(opcion!=8);
    return 0;
}
