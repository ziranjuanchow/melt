#ifndef MYDEFS
#define MYDEFS
#include <math.h>

#define OBJECT_PATH "voxel/cube_25.voxels"  
//#define OBJECT_PATH "voxel/cube_80_v20.voxels"
//#define OBJECT_PATH "voxel/dragon_40.voxels"
//#define OBJECT_PATH "voxel/happy_30.voxels"
//#define OBJECT_PATH "voxel/triangle_30.voxels"

// State of particle
enum Status { SOLID, LIQUID};

static const float AMBIENT_T = 300; //283; //373;
static const float C_ICE = 0.5;
static const float C_WATER = 0.1;
static const float MIN_T = 253;
static const float MAX_T = 373;
static const float ICE_T = 273;
static const float K_WATER = 1.0;//0.01 ;//71.97;
static const float K_ICE = 20.0; //* 10000;//75.64;rr
static const float MASS_H2O =  0.0008; //2.99;// * pow(10.0, -23);
static const float VISC_WATER = 0.2;
static const float EFFECTIVE_RADIUS = 0.0043; //0.0053 //1.1/2;  // 0.01
static const float INT_STIFF_ICE = 0.01;  // 0.5
static const float INT_STIFF_WATER = 0.15; 
static const float EXT_STIFF = 3000;
static const float P_PRADIUS = 1.1; // 1.1;

static const float THERMAL_CONDUCTIVITY_ICE = 0.00267;//2.18;// in watts per meter kelvin
static const float THERMAL_CONDUCTIVITY_WATER = 0.00267;//0.58;// in watts perr meter kelvin
static const float THERMAL_CONDUCTIVITY = 0.00267; //IUDN
static const float HEAT_CAPACITY_ICE = 1.0; // 2.11; // units: kJ/kg-K
static const float HEAT_CAPACITY_WATER = 1.0; //4.181; // units: kJ/kg-K

// Parameter for the ice-water particle
static const float ICE_WATER = -0.5;
static const float BOUND_LIQUID = 280;

// Init fluid system

// start of the container
static const float VOLMIN_X = -2;
static const float VOLMIN_Y = -2;
static const float VOLMIN_Z = 0;

// end of the container
static const float VOLMAX_X = 40;//40;//20;
static const float VOLMAX_Y = 20;//20;//20;
static const float VOLMAX_Z = 40;//40;

// start of the voxel space
static const float INITMIN_X = 2;//-30;
static const float INITMIN_Y = 2;//-30;
static const float INITMIN_Z = 2;

// end of the voxel space
static const float INITMAX_X = 80;
static const float INITMAX_Y = 80;
static const float INITMAX_Z = 80;

// rendering radius for voxel space
static const float RENDER_GRID_DIV = 1;

// Init fluid system with OBJ
#define ADJUST_SCALE 1.8;//1.521587  // Adjust number /density of loaded particles
#define ADJUST_OFFSET_X 2//-30
#define ADJUST_OFFSET_Y 2//-10
#define ADJUST_OFFSET_Z 2//-30

// Marching cube
static const double MARCH_THRESHOLD = 0.001;
static const double MARCH_RESO = 800;

static const double INERTIA_FACTOR = 1E20;

#endif MYDEFS