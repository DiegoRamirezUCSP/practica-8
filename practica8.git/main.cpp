#include <iostream>

using namespace std;
int suma(int arr[],int tam){
    int res=0;
    int *ptr=arr;
    for(int i=0;i<tam;i++){
        res += *ptr++;
    }
    return res;
}

void invertir(int *arr,int tam){
    int *fin=arr + tam - 1;
    while(fin > arr){
        int temp = *arr;
        *arr++ = *fin;
        *fin-- = temp;
    }

}

void imprimir(int *arr, int tam){
 if(tam == 0)
        return;
 cout << *arr++ << " ";
 imprimir(arr, --tam);

}

bool palindrome(int *arr,int tam){
    int *fin=arr + tam - 1;
    while(fin > arr){
        if(*fin-- != *arr++){
            return false;
        }
        }
    return true;
}

int str_len(char *cad){
    int res = 0;
    while(*cad++!= '\0')
        res++;
    return res;
}

void str_cpy(char *cad1,char *cad2){
    int i = 0;
    while(*cad1 != '\0'){
        *cad2++ = *cad1++;
    }
}

int main(){
    char cadena1[]="la relig";
    char cadena2[220];

cout << str_len(cadena1) << endl;
int arr[]={312,12,55,55,12,312};
int *ptr = arr;
imprimir(arr,6);
cout << endl;
invertir(arr,6);
imprimir(arr,6);
cout << endl;
cout << palindrome(arr,6) << endl;
str_cpy(cadena1,cadena2);
cout << cadena2 << endl;
}
