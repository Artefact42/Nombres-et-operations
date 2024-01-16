typedef enum {
    PLUS,
    MOINS,
    FOIS,
    PUISSANCE
} operation;

typedef enum {
    PO,
    PF
} priorite;

typedef enum {
    PI,
    E,
    LN,
    COS,
    SIN,
    TAN,
    ACOS,
    ASIN,
    ATAN,
    HCOS,
    HSIN,
    HTAN
} special;

typedef struct {
    int type;
    union {
        int entier;
        special special;
        priorite priorite;
        operation operation;
    } u;
} brique;

typedef struct {
    brique* contenu;
    int taille;
} reel;

reel creer_reel(int nb);

void afficher_reel(reel r);
