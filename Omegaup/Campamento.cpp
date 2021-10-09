#include "campamento.h"

// Main
//	int consulta(int r, int c)
//	void respuesta(int r, int c)

void ticket(int r, int c, int boleto) {
    int actr=1,actc=c;
    int act=consulta(actr,actc);
	     while(act!=boleto){
            if(act<boleto){
                     actr++;
            }
            if(act>boleto ){
                actc--;
            }
                 if(actr>=1 && actr<=r && actc>=1 &&  actc<=c){
                    act=consulta(actr,actc);
                 }else break;

	     }
	     if(consulta(actr,actc)==boleto){
	     respuesta(actr,actc);}
	     else{
            respuesta(0,0);
	     }
}
