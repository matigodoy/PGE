#ifndef LISTADO_H
#define LISTADO_H


template <class UNDEFINED> class Listado{ // AL DE LA CLASE INDEFINIDA SE LE PUEDE ANOTAR EN VEZ DE CLASE COMO typename
private:
    int maxSize;
    UNDEFINED * v;
    int libre;

public:

    Listado(int maxSize = 10 );

    UNDEFINED get( int i )const;
    bool add(UNDEFINED contenido);
    int getMaxSize();
    int size();


    void clear();
    bool pop_back();
    bool eliminar(int aux);
    bool insertar(int aux,UNDEFINED contenido);
};

template <class UNDEFINED> Listado<UNDEFINED>:: Listado (int maxSize) : maxSize (maxSize),
                                                v(new UNDEFINED [maxSize]),
                                                libre (0){}

template < class UNDEFINED > bool Listado<UNDEFINED>::add(UNDEFINED contenido){
    if (maxSize <= libre)
        return false;
    v[libre]= contenido;
    libre ++;
    return true;
}

template  <class UNDEFINED>  UNDEFINED Listado<UNDEFINED>::get(int i)const{
    return v[i];
}

template < class UNDEFINED > int Listado<UNDEFINED>::getMaxSize(){
    return this->maxSize;
}

template < class UNDEFINED > int Listado<UNDEFINED>::size(){
    return libre;
}

template  <class UNDEFINED> void Listado<UNDEFINED>::clear(){
    libre = 0;
}

template <class UNDEFINED> bool Listado<UNDEFINED>::pop_back()
{
    if(libre > 0){
       libre--;
       return true;
    }
    return false;
}

template<class UNDEFINED> bool Listado<UNDEFINED>::eliminar(int aux)
{
    if (aux > libre || aux < 0){
        return false;
    }else{
        for(int i= aux; i<libre ; i++){
            v[i] = v[i+1];
        }
        libre--;
        return true;
    }
}

template<class UNDEFINED> bool Listado<UNDEFINED>::insertar(int aux, UNDEFINED contenido)
{
    if (aux > maxSize || aux < 0 || libre >= maxSize ){
        return false;
    }
    else if(aux > libre && aux < maxSize ){
        this->add(contenido);
        return true;
    }else{
        for(int i = libre ; i > aux-1 ; i--){
            v[i + 1] = v[i];
        }
        v[aux] = contenido;
        libre ++;
        return true;
    }
}

#endif // LISTADO_H

