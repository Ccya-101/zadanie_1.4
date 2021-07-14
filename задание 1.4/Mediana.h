#ifndef Mediana_H
#define Mediana_H

double SearchMediana(int *Massiv, int N){ 
    int SumEveryone = 0; 
    for(int i = 0; i < N; i++){ 
        for(int j = i+1; j < N; j++){ 
            if(Massiv[i] > Massiv[j]){ 
                int tmp = Massiv[j]; 
                Massiv[j] = Massiv[i]; 
                Massiv[i] = tmp; 
            }
        }
        SumEveryone += Massiv[i]; 
    } 
    int Mediana = 0; 
    if(N % 2 == 0){ 
        int k = N / 2 - 1; 
        Mediana = Massiv[k]; 
    }
    else{ 
        int k = N / 2;
        Mediana = Massiv[k];
    }
    return Mediana; 
}

#endif
