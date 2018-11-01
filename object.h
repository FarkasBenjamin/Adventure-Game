typedef struct targy{
    const char *leiras;
    const char *lenyeg;
    struct targy *helyszin;
} TARGY;

extern TARGY targyak[];

#define marsh           (targyak + 0)
#define castle          (targyak + 1)
#define blood           (targyak + 2)
#define sanity          (targyak + 3)
#define monster         (targyak + 4)
#define player          (targyak + 5)

#define targyak_vege    (targyak + 6)
