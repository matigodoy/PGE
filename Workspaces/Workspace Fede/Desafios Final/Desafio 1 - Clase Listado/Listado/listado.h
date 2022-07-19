#ifndef LISTADO_H
#define LISTADO_H

template <class T> class Listado{
private:
    int cantidad;
    int libre;
    T * v;

public:
    Listado(int cantidad = 10) : cantidad(cantidad), libre(libre), v(new T[cantidad]) {}
    T get(int i){
        return v[i];
    }
    int size(){
        return libre;
    }
    int getCantidad(){
        return cantidad;
    }
    bool add(T nuevo){
        if(libre < cantidad){
            v[libre] = nuevo;
            libre ++;
            return true;
        }
        return false;
    }
};

#endif // LISTADO_H
