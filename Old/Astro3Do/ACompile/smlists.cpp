#include "smlists.h"

char* LDataSource[] =
{
    "Unknown",
    "Bright Star Catalogue, 4th Ed., May 1982, Wayne H. Warren Jr."
};

char* LInfraredSource[] =
{
    "Not an infrared source",
    "Uncertain identification"
    "NASA Merged Infrared Catalogue, Schmitz, et al. 1978",
    "Engles et al. 1982",
};

char* LGreekAlphabet[] =
{
    "", "Alpha", "Bata", "Gamma", "Delta", "Epsilon", "Zeta", "Eta", 
	"Theta", "Iota", "Kappa", "Lambda", "Mu", "Nu", "Xi", "Omicron",
	"Pi", "Rho", "Sigma", "Tau", "Upsilon", "Phi", "Chi", "Psi", "Omega"
};


char* LMagnitudeCode[] =
{
    "No data",
    "V on UBV (Johnson) system",
    "HR magnitudes reduced to the UBV system",
    "H = original HR magnitude"
};


char* LParallaxType[] =
{
    "No data",
    "Dynamical",
    "Trigonometric"
};

char* LRiSystem[] =
{
    "No data",
    "Johnson system",
    "Eggen, on Kron system",
    "Cousins system"
};
			   
TConstellation LConstellation[] =
{
	"",		"",				"",
	"AND",	"Andromeda",	"Princess of Ethiopia",
	"ANT",	"Antlia",		"Air Pump",
	"APS",	"Apus",			"Bird of Paradise",
	"AQL",	"Aquila",		"Eagle",
	"AQR",	"Aquarius",		"Water Bearer",
	"ARA",	"Ara",			"Altar",
	"ARI",	"Aries",		"Ram",
	"AUR",	"Auriga",		"Charioteer",
	"BOO",	"Bootes",		"Bear Driver",
	"CAE",	"Caelum",		"Sculptor's Chisel",
	"CAM",	"Camelopardalis", "Giraffe",
	"CAP",	"Capricornus",	"Sea Goat",
	"CAR",	"Carina",		"Keel of Argo Navis",
	"CAS",	"Cassiopeia",	"Queen of Ethiopia",
	"CEN",	"Centaurus",	"Centaur",
	"CEP",	"Cepheus",		"King of Ethiopia",
	"CET",	"Cetus",		"Sea Monster",
	"CHA",	"Chamaeleon",	"Chameleon",
	"CIR",	"Circinus",		"Compasses",
	"CMA",	"Canis",		"Major	Greater Dog",
	"CMI",	"Canis",		"Minor	Lesser Dog",
	"CNC",	"Cancer",		"Crab",
	"COL",	"Columba",		"Dove of Noah",
	"COM",	"Coma Berenices", "Berenice's Hair",
	"CRA",	"Corona Australis", "Southern Crown",
	"CRB",	"Corona Borealis", "Northern Crown",
	"CRT",	"Crater",		"Cup",
	"CRU",	"Crux",			"Southern Cross",
	"CRV",	"Corvus",		"Crow/Raven",
	"CVN",	"Canes Venatici", "Hunting Dogs",
	"CYG",	"Cygnus",		"Swan",
	"DEL",	"Delphinus",	"Dolphin",
	"DOR",	"Dorado",		"Swordfish",
	"DRA",	"Draco",		"Dragon",
	"EQU",	"Equuleus",		"Foal",
	"ERI",	"Eridanus",		"River",
	"FOR",	"Fornax",		"Laboratory Furnace",
	"GEM",	"Gemini",		"Twins",
	"GRU",	"Grus",			"Crane",
	"HER",	"Hercules",		"Hercules",
	"HOR",	"Horologium",	"Clock",
	"HYA",	"Hydra",		"Water Serpent",
	"HYI",	"Hydrus",		"Water Snake",
	"IND",	"Indus",		"American Indian",
	"LAC",	"Lacerta",		"Lizard",
	"LEO",	"Leo",			"Lion",
	"LEP",	"Lepus",		"Hare",
	"LIB",	"Libra",		"Beam Balance",
	"LMI",	"Leo Minor",    "Lion Cub",
	"LUP",	"Lupus",		"Wolf",
	"LYN",	"Lynx",			"Lynx",
	"LYR",	"Lyra",			"Lyre",
	"MEN",	"Mensa",		"Table Mountain",
	"MIC",	"Microscopium",	"Microscope",
	"MON",	"Monoceros",	"Unicorn",
	"MUS",	"Musca",		"Fly",
	"NOR",	"Norma",		"Carpenter's Square",
	"OCT",	"Octans",		"Octant",
	"OPH",	"Ophiuchus",	"Serpent Holder",
	"ORI",	"Orion",		"Great Hunter",
	"PAV",	"Pavo",			"Peacock",
	"PEG",	"Pegasus",		"Winged Horse",
	"PER",	"Perseus",		"Hero",
	"PHE",	"Phoenix",		"Phoenix",
	"PIC",	"Pictor",		"Painter's Easel",
	"PSA",	"Pisces Austrinus", "Southern Fish",
	"PSC",	"Pisces",		"Fishes",
	"PUP",	"Puppis",		"Stern of Argo Navis",
	"PYX",	"Pyxis",		"Compass Box of Argo",
	"RET",	"Reticulum",	"Net",
	"SCL",	"Sculptor",		"Sculptor's Workshop",
	"SCO",	"Scorpius",		"Scorpion",
	"SCT",	"Scutum",		"Shield of John Sobieski",
	"SER",	"Serpens",		"Serpent",
	"SEX",	"Sextans",		"Sextant",
	"SGE",	"Sagitta",		"Arrow",
	"SGR",	"Sagittarius",	"Archer",
	"TAU",	"Taurus",		"Bull",
	"TEL",	"Telescopium",	"Telescope",
	"TRA",	"Triangulum Australe", "Southern Triangle",
	"TRI",	"Triangulum",	"Triangle",
	"TUC",	"Tucana",		"Toucan",
	"UMA",	"Ursa Major",	"Greater Bear",
	"UMI",	"Ursa Minor",	"Lesser Bear",
	"VEL",	"Vela",			"Sail of Argo Navis",
	"VIR",	"Virgo",		"Maiden",
	"VOL",	"Volans",		"Flying Fish",
	"VUL",	"Vulpecula",	"Fox",
	NULL,		NULL,		NULL
};
