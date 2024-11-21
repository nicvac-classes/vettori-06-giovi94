#include <iostream>
using namespace std;

int main() {
    int  n;
    cout<<"quanti atleti ci sono nella gara ? "
    cin>>n;
    int nomi[n],nazionali[n];
    float tempi[n];
    for (i=0;i<=n-1;i++ ) {
        cout<<"inserire nomi degli atleti"<<endl;
        cin>>nomi[i];
        cout<<"inserire nazionale dell atleta"<<endl;
        cin>>nazionali[i];
        cout<<"inserire tempo dell atleta"<<endl;
        cin>>tempi[i];
    }
    for (i=0;i<=n-1;i++ ) {
        cout<<"i nomi degli atleti sono"<<nomi[i]<<"la nazionale degli atleti è"<<nazionali[i]<<" e hanno fatto tempo"<<tempi[i]<<endl;
    }
    cout<<"ricerca dell atleta vincitore"<<endl;
    double min,iMin;
    min=0;
    min=tempi[0];
    for ( i=0;i<=n-1;i++) {
        if (tempi[i]<min ) {
            iMin=i;
            min=tempi[i];
        }
    }
    cout<<"l atleta vincitore è"<<nomi[i]<<"della nazionale"<<nazionali[i]<<"e ha fatto come minor tempo"<<tempi[i]<<endl;
    return 0;
 
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
