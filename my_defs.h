#ifndef MYDEFS
#define MYDEFS

// State of particle
enum Status { SOLID, LIQUID};

static const float AMBIENT_T = 1.0;
static const float diff_T = 0.5;
static const float MIN_T = 0.0;
static const float MAX_T = 1.0;
static const float K_W = 0.00000001;
static const float K_ICE = 0.000002;
static const float heat_conduct = 0.001;
static const float heat_cap = 15;

#endif MYDEFS