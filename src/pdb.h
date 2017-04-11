#include <stdlib.h>
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include <cmath>
#include <ctype.h>
#include <iomanip>
#include <vector>

struct Atom {
    string atom_type;
    int atom_number;
    string element;
    string type;
    int residue_number;
    double x_coord;
    double y_coord;
    double z_coord;
    double ligand_distance;
    double score;
};

extern vector<Atom > pdb;
extern vector<int> strip_index;
static int number_of_atoms;

bool read_pdb ( string pdbfilename, int & size );
bool write_pdb ( string pdboutname, string stripcommand );
