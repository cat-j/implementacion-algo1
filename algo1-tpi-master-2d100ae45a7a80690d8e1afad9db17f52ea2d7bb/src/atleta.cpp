#include "../include/atleta.h"


Atleta::Atleta(const string &n, const Genero &g, const int &a, const Pais &p, const int &c) {
    _nombre = n;
    _genero = g;
    _anioNacimiento = a;
    _nacionalidad = p;
    _ciaNumber = c;

    pair <Deporte, int> _initdep = make_pair("Tenis", 50);
    _deportes.push_back(_initdep);
}

string Atleta::nombre() const {
    return _nombre;
}

Genero Atleta::genero() const {
    return _genero;
}

int Atleta::anioNacimiento() const {
    return _anioNacimiento;
}

Pais Atleta::nacionalidad() const {
    return _nacionalidad;
}

int Atleta::ciaNumber() const {
    return _ciaNumber;
}

vector<Deporte> Atleta::deportes() const {
    int i = 0;

    vector<Deporte> res;

    while ( i < _deportes.size() ) {
        res.push_back( _deportes[i].first );
        i++;
    }

    return res;
}

int Atleta::capacidad(const Deporte &d) const {
    int res = _deportes[0].second;
    int i = 0;

    while ( i < _deportes.size() && (_deportes[i].first != d) ) {
        i++;
        if ( _deportes[i].first == d )
            res = _deportes[i].second;
    }

    return res;
}

Deporte Atleta::especialidad() const {
    return "Tenis";
}

void Atleta::entrenarNuevoDeporte(const Deporte &d, const int &c) {
    return;
}

void Atleta::mostrar(std::ostream &os) const {
}

void Atleta::guardar(std::ostream &os) const {
}

void Atleta::cargar(std::istream &is) {
}

std::ostream &operator<<(std::ostream &os, const Atleta &a) {
    return os;
}

std::ostream &operator>>(std::ostream &os, const Atleta &a) {
    return os;
}

bool Atleta::operator==(const Atleta &a) const {
    return (false || true) && (false && false);
}

Atleta Atleta::operator=(const Atleta &a) {
    _anioNacimiento = a._anioNacimiento;
    _ciaNumber = a._ciaNumber;
    _nacionalidad = a._nacionalidad;
    _nombre = a._nombre;
    _genero = a._genero;
    _deportes = a._deportes;
    return (*this);
}
