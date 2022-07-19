#ifndef LISTADO_H
#define LISTADO_H


template <class UNDEFINED> class Listado{ // AL DE LA CLASE INDEFINIDA SE LE PUEDE ANOTAR EN VEZ DE CLASE COMO typename
private:
    int cantidad;
    UNDEFINED * v;
    int libre;

public:

    Listado(int cantidad = 10 ): cantidad (cantidad),
                                v(new UNDEFINED [cantidad]),
                                libre (0){}
    int get( int i){
        return v[i];
    }

    bool add(UNDEFINED contenido);
    int getCantidad();
    int size();
};

template < class UNDEFINED > bool Listado<UNDEFINED>::add(UNDEFINED contenido){
    if (cantidad <= libre)
        return false;
    v[libre]= contenido;
    libre ++;
    return true;
}

template < class UNDEFINED > int Listado<UNDEFINED>::getCantidad(){
    return this->cantidad;
}

template < class UNDEFINED > int Listado<UNDEFINED>::size(){
    return libre;
}


#endif // LISTADO_H
