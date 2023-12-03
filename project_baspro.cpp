#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string decimal_binary(){
    int desimal,sisa;
    string binary = "";
    string binarry1 ="";
    cout << "Masukkan bilangan desimal : ";cin>> desimal; 
    if(desimal == 0){
        return "0";
    }
    while(desimal !=0){
        sisa = desimal %2;
        
        if(sisa == 0){
            binary += '0';
        }
        else{
            binary +='1';
        }
        desimal = desimal/2;
    }
    for(int i=binary.size();i>=0;i--){
        binarry1 += binary[i];
    }
    return binarry1;
}

int decimal_octal(){
    int desimal, sisa;
    int octal =0;
    int i=0;
    cout << "Masukkan bilangan desimal : "; cin >> desimal;
    while(desimal != 0){
        sisa = desimal % 8;
        if(sisa < 8){
            octal += sisa * pow(10,i);
        }
        desimal = desimal/8;
       i++;
    }
    return octal;
}

string decimal_hexadecimal(){
    int desimal, sisa;
    string hexa ="";
    string hexa1= "";
    cout  << "Masukkan bilangan decimal : "; cin >> desimal;
    while(desimal != 0){
        sisa = desimal % 16;
        
        if(sisa < 10){
            hexa += to_string(sisa); 
        }
        else if ( sisa >=10 && sisa <16)
        {
            if(sisa==10){
                hexa += 'A';
            }
            else if(sisa==11){
                hexa += 'B';
            }
            else if(sisa==12){
                hexa += 'C';
            }
            else if(sisa==13){
                hexa += 'D';
            }else if(sisa==14){
                hexa += 'E';
            }
            else{
                hexa += 'F';
            }
        }
        desimal = desimal/16;
        
    }
    for(int  i= hexa.size()-1;i>=0;i--){
        hexa1 += hexa[i];
    }
    return hexa1;
}


int binary_decimal(){
    string binary;
    string binary_terbalik = "";
    int decimal=0;
    cout << "Masukkan bilangan biner : "; cin >> binary;
    int digit_binary  = binary.size();
    for(int i=digit_binary-1;i>=0;i--){
        binary_terbalik += binary[i];
    }
    int i=0;
    while(digit_binary >=0){
        if(binary_terbalik[i]== '1')
            decimal += pow(2,i);
           
        digit_binary--;
        i++;
    }  
    return decimal;

}

int octal_decimal(){
    string octal;
    string octal_terbalik ="";
    int  decimal=0;
    cout << "Masukan bilangan octal : "; cin >> octal;
    int  digit_octal = octal.size();
    for(int i= digit_octal-1;i>=0;i--){
        octal_terbalik += octal[i];
    }
    int i=0;
    while (digit_octal>0)
    {
        decimal += (octal_terbalik[i]-'0')*pow(8,i);
        digit_octal--;
        i++;
    }
    return decimal;
    
}
int hexadecimal_decimal(){
    string hexa;
    string  hexa_terbalik = "";
    int decimal = 0;
    cout << "Masukan bilangan hexadecimal : " ; cin>> hexa;
    int digit_hexa = hexa.size();
    for(int  i= digit_hexa-1;i>=0;i--){
        hexa_terbalik += hexa[i];
    }
    int i=0;
    while(digit_hexa>0)
    {
        if(hexa_terbalik[i]=='A'){
            decimal += 10  *  pow(16,i);
        }
        else if(hexa_terbalik[i]=='B'){
            decimal += 11 * pow(16,i);
        }
        else if(hexa_terbalik[i]=='C'){
            decimal += 12 * pow(16,i);
        }
        else if(hexa_terbalik[i]=='D'){
            decimal += 13 * pow(16,i);
        }
        else if(hexa_terbalik[i]=='E'){
            decimal += 14 * pow(16,i);
        }
        else if(hexa_terbalik[i]=='F'){
            decimal += 15 * pow(16,i);
        }
        else{
            decimal += (hexa_terbalik[i]-'0') * pow(16,i);
        }
        i++;
        digit_hexa--;

    }
    return decimal;
}

int main(){


    int a = 1;
    int menu;

    do {
        cout << "kalkulator konversi sistem bilangan" << endl;   
        cout << "1.Decimal ke binary" << endl;
        cout  << "2.Decimal ke octal " << endl;
        cout  << "3.Decimal ke hexadecimal" << endl;
        cout << "4.Binary ke decimal" << endl;
        cout << "5.Octal ke decimal" << endl;
        cout  << "6.Hexadecimal ke decimal" << endl;
        cout  << "7.Exit" << endl;
        cout << "Pilih menu (1/2/3/4/5/6/7) : ";cin >> menu; 


        if(menu == 1){
           system("CLS");
           cout <<decimal_binary() << endl;
        }
        else if(menu ==2){
            system("CLS");
            cout  <<decimal_octal() << endl;
        }
        else if(menu==3){
            system("CLS");
            cout <<decimal_hexadecimal()<< endl;
        }
        else if (menu==4)
        {
            system("CLS");
            cout  << binary_decimal() << endl;
        }
        else if(menu==5){
            system("CLS");
            cout  << octal_decimal() << endl;
        }
        else  if(menu == 6){
            system("CLS");
            cout  << hexadecimal_decimal() << endl;
        }
        else  if(menu == 7 ){
            break;   
        }
        

    }
    while(a>0);

    return 0;
}