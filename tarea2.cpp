//punto 2
int checkDate(Calendario calen){

    int r=1;
    int c1,c2,c3;
    c1=calen.anio%100;
    c2=calen.anio%400;
    c3=calen.anio%4;
    if(((calen.dia<1)||(calen.dia>31))||((calen.mes<1)||(calen.mes>12))||((calen.anio<0)||(calen.anio>127))){
        r=0;
        return r;
    }
    else{
        if((calen.mes==4)||(calen.mes==6)||(calen.mes==9)||(calen.mes==11)){
            if(calen.dia>30){
                r=0;
                return r;
            }
            else{
                return r;
            }
        }
        else if(calen.mes==2){
            if(((calen.anio)==0)||((c1==0)&&(c2==0))||((c3==0)&&(c1!=0))){
                if(calen.dia>29){
                    r=0;
                    return r;
                }
                else{
                    return r;
                }
            }
            else{
               if(calen.dia>28){
                    r=0;
                    return r;
                }
                else{
                    return r;
                }
            }
        }
        else{
            return r;
        }
    }
}
