#ifndef LISTADO_H
#define LISTADO_H


template<class UNDEFINED> class Listado {
private:
    int cantidad;
    int libre;
    UNDEFINED * v;
public:
    Listado( int cantidad = 19 ) : cantidad (cantidad), libre (0), v(new UNDEFINED [cantidad]) {

    }
    UNDEFINED get(int i){
        return v[i];
    }

    int size(){
        return libre;
    }

    int getCantidad ( ){
        return cantidad;
    }
    bool add ( UNDEFINED nuevo);

};

template <class UNEDEFINED > bool Listado <UNEDEFINED>::add(UNEDEFINED nuevo){
    if(libre < cantidad ){
        v[libre] = nuevo;
        libre++;
        return true;
    }
    return false;
}
#endif // LISTADO_H
