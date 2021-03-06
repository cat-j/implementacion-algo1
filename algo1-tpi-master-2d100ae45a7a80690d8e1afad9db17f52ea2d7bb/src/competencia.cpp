#include "../include/competencia.h"


Competencia::Competencia(const Deporte &d, const Genero &g, const vector<Atleta> &as) {
  _categoria = make_pair(d,g);
  _finalizada = false;

  int i = 0;
  while ( i < as.size() ) {
    _participantes.push_back( as[i] );
    i++;
  }
}

Categoria Competencia::categoria() const {
    return _categoria;
}

vector<Atleta> Competencia::participantes() const {
    return _participantes;
}

bool Competencia::finalizada() const {
    return _finalizada;
}

vector<Atleta> Competencia::ranking() const {
    return vector<Atleta>();
}

vector<Atleta> Competencia::lesTocoControlAntiDoping() const {
    vector<Atleta> ret;

    return ret;
}

bool Competencia::leDioPositivo(const Atleta &a) const {
    return false;
}

void Competencia::finalizar(const vector<int> &posiciones, const vector<pair<int, bool> > &control) {
    return;
}

void Competencia::linfordChristie(const int &n) {
    return;
}

bool Competencia::gananLosMasCapaces() const {
    return true;
}

void Competencia::sancionarTramposos() {
    return;
}

void Competencia::mostrar(std::ostream &os) const {
}

void Competencia::guardar(std::ostream &os) const {
}

void Competencia::cargar(std::istream &is) {
}

std::ostream &operator<<(std::ostream &os, const Competencia &c) {
    return os;
}

std::ostream &operator>>(std::ostream &os, const Competencia &c) {
    return os;
}

bool Competencia::operator==(const Competencia &c) const {
    return true && (true || false);
}

Competencia Competencia::operator=(const Competencia &c) {
    _categoria = c._categoria;
    _participantes = c._participantes;
    _finalizada = c._finalizada;
    _ranking = c._ranking;
    _lesTocoControlAntiDoping = c._lesTocoControlAntiDoping;
    return (*this);
}
