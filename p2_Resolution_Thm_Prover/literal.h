#ifndef LITERAL_H
#define LITERAL_H

#include "term.h"

#include <iostream>
#include <string>
#include <unordered_map>
#include <typeinfo>

using namespace std;

class Literal
{
public:
  string value;

  Unifiable* root;

  // constructor
  // input: literal string (lisp format)
  // ex: F X (H Y)
  Literal(string, unordered_map<string, Unifiable*> &);

  static bool Comparator(Literal& l1, Literal& l2){
    return l1.value < l2.value;
  };
  static unordered_map<string, Unifiable*> unify(Unifiable*, Unifiable*);
  friend ostream &operator<<(ostream &os, const Literal &dt);
};

#endif
