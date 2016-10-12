#include "../include/jjoo.h"

#include <utility>
#include <algorithm>


JJOO::JJOO(const int &a, const vector<Atleta> &as, const vector<vector<Competencia> > &cs) {
  _anio = a;
  _jornadaActual = 1;

  int i = 0;
  while ( i < as.size() ) {
    _atletas.push_back( as[i] );
    i++;
  }

  // por ahi estamos usando memoria al pedo, pero me parece que es mas claro
  // deberiamos ver si se puede hacer push.back con un elemento Vector
  int j = 0;
  while ( j < cs.size() ) {
    _cronograma.push_back( cs[j] );
    j++;
  }
}

int JJOO::anio() const {
    return _anio;
}

vector<Atleta> JJOO::atletas() const {
    return _atletas;
}

int JJOO::cantDias() const {
    return _cronograma.size();
}

int JJOO::jornadaActual() const {
    return _jornadaActual;
}

vector<Competencia> JJOO::cronograma(const int &d) const {
    return _cronograma[d-1];
}

vector<Competencia> JJOO::competencias() const {
    vector<Competencia> res;
    int i = 0;

    while ( i < _cronograma.size() ) {
      int j = 0;
      vector<Competencia> actual = _cronograma[i];

      while ( j < actual.size() ) {
        res.push_back( actual[j] );
        j++;
      }

      i++;
    }

    return res;
}

vector<Competencia> JJOO::competenciasFinalizadasConOroEnPodio() const {
    vector<Competencia> ret;
    return ret;
}

vector<Atleta> JJOO::dePaseo() const {
    vector<Atleta> ret;
    return ret;
}

vector<pair<Pais, vector<int> > > JJOO::medallero() const {
    vector<pair<Pais, vector<int> > > ret;
    return ret;
}

int JJOO::boicotPorDisciplina(const Categoria &c, const Pais &p) {
    return 0;
}

vector<Atleta> JJOO::losMasFracasados(const Pais &p) const {
    vector<Atleta> ret;
    return ret;
}

void JJOO::liuSong(const Atleta &a, const Pais &p) {
    return;
}

Atleta JJOO::stevenBradbury() const {
    Atleta ret("Bob esponja", Masculino, 0, "Pais falso", 0);
    return ret;
}

bool JJOO::uyOrdenadoAsiHayUnPatron() const {
    return true;
}

vector<Pais> JJOO::sequiaOlimpica() const {
    vector<Pais> ret;
    return ret;
}

void JJOO::transcurrirDia() {
    return;
}

void JJOO::mostrar(std::ostream &os) const {
}

void JJOO::guardar(std::ostream &os) const {
}

void JJOO::cargar(std::istream &is) {
}

std::ostream &operator<<(std::ostream &os, const JJOO &j) {
    return os;
}

std::ostream &operator>>(std::ostream &os, const JJOO &j) {
    return os;
}

bool JJOO::operator==(const JJOO &j) const {
    return true;
}

JJOO JJOO::operator=(const JJOO &j) {
    _anio = j._anio;
    _atletas = j._atletas;
    _cronograma = j._cronograma;
    _jornadaActual = j._jornadaActual;
    return (*this);
}
