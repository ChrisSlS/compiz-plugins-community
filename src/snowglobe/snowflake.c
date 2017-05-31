#include "snowglobe-internal.h"

//points are of the form (y,z,x).
//model made using Blender and generated using script.


static const GLfloat null_shininess[] = {96.078431};
static const GLfloat null_ambient[] = {0.500000,0.500000,0.500000,1.000000};
static const GLfloat null_diffuse[] = {0.640000,0.640000,0.640000,1.000000};
static const GLfloat null_specular[] = {0.500000,0.500000,0.500000,1.000000};

static const float P0000[3] = {0.250425, 0.2489755, -0.0};
static const float P0001[3] = {0.4994005, 0.0, 0.0};
static const float P0002[3] = {0.4324935, -0.0, -0.2497005};
static const float P0003[3] = {0.2168745, 0.2489755, -0.1252125};
static const float P0004[3] = {0.2168745, -0.2489755, -0.1252125};
static const float P0005[3] = {0.250425, -0.2489755, 0.0};
static const float P0006[3] = {0.2497005, -0.0, -0.4324935};
static const float P0007[3] = {0.1252125, 0.2489755, -0.2168745};
static const float P0008[3] = {0.1252125, -0.2489755, -0.2168745};
static const float P0009[3] = {0.0, -0.0, -0.4994005};
static const float P0010[3] = {0.0, 0.2489755, -0.250425};
static const float P0011[3] = {0.0, -0.2489755, -0.250425};
static const float P0012[3] = {-0.2497005, -0.0, -0.4324935};
static const float P0013[3] = {-0.1252125, 0.2489755, -0.2168745};
static const float P0014[3] = {-0.1252125, -0.2489755, -0.2168745};
static const float P0015[3] = {-0.4324935, -0.0, -0.2497005};
static const float P0016[3] = {-0.2168745, 0.2489755, -0.1252125};
static const float P0017[3] = {-0.2168745, -0.2489755, -0.1252125};
static const float P0018[3] = {-0.4994005, 0.0, 0.0};
static const float P0019[3] = {-0.250425, 0.2489755, -0.0};
static const float P0020[3] = {-0.250425, -0.2489755, 0.0};
static const float P0021[3] = {-0.4324935, 0.0, 0.2497005};
static const float P0022[3] = {-0.2168745, 0.2489755, 0.1252125};
static const float P0023[3] = {-0.2168745, -0.2489755, 0.1252125};
static const float P0024[3] = {-0.2497005, 0.0, 0.4324935};
static const float P0025[3] = {-0.1252125, 0.2489755, 0.2168745};
static const float P0026[3] = {-0.1252125, -0.2489755, 0.2168745};
static const float P0027[3] = {0.0, 0.0, 0.4994005};
static const float P0028[3] = {0.0, 0.2489755, 0.250425};
static const float P0029[3] = {0.0, -0.2489755, 0.250425};
static const float P0030[3] = {0.2497005, 0.0, 0.4324935};
static const float P0031[3] = {0.1252125, 0.2489755, 0.2168745};
static const float P0032[3] = {0.1252125, -0.2489755, 0.2168745};
static const float P0033[3] = {0.4324935, 0.0, 0.2497005};
static const float P0034[3] = {0.2168745, 0.2489755, 0.1252125};
static const float P0035[3] = {0.2168745, -0.2489755, 0.1252125};

static const float N0000[3] = {0.450545, 0.892727, 0.0};
static const float N0001[3] = {1.0, 0.0, 0.0};
static const float N0002[3] = {0.866024, 0.0, -0.499985};
static const float N0003[3] = {0.390179, 0.892727, -0.225257};
static const float N0004[3] = {0.450545, -0.892727, 0.0};
static const float N0005[3] = {0.390179, -0.892727, -0.225257};
static const float N0006[3] = {0.499985, 0.0, -0.866024};
static const float N0007[3] = {0.225257, 0.892727, -0.390179};
static const float N0008[3] = {0.225257, -0.892727, -0.390179};
static const float N0009[3] = {0.0, 0.0, -1.0};
static const float N0010[3] = {0.0, 0.892727, -0.450545};
static const float N0011[3] = {0.0, -0.892727, -0.450545};
static const float N0012[3] = {-0.499985, 0.0, -0.866024};
static const float N0013[3] = {-0.225257, 0.892727, -0.390179};
static const float N0014[3] = {-0.225257, -0.892727, -0.390179};
static const float N0015[3] = {-0.866024, 0.0, -0.499985};
static const float N0016[3] = {-0.390179, 0.892727, -0.225257};
static const float N0017[3] = {-0.390179, -0.892727, -0.225257};
static const float N0018[3] = {-1.0, 0.0, 0.0};
static const float N0019[3] = {-0.450545, 0.892727, 0.0};
static const float N0020[3] = {-0.450545, -0.892727, 0.0};
static const float N0021[3] = {-0.866024, 0.0, 0.499985};
static const float N0022[3] = {-0.390179, 0.892727, 0.225257};
static const float N0023[3] = {-0.390179, -0.892727, 0.225257};
static const float N0024[3] = {-0.499985, 0.0, 0.866024};
static const float N0025[3] = {-0.225257, 0.892727, 0.390179};
static const float N0026[3] = {-0.225257, -0.892727, 0.390179};
static const float N0027[3] = {0.0, 0.0, 1.0};
static const float N0028[3] = {0.0, 0.892727, 0.450545};
static const float N0029[3] = {0.0, -0.892727, 0.450545};
static const float N0030[3] = {0.499985, 0.0, 0.866024};
static const float N0031[3] = {0.225257, 0.892727, 0.390179};
static const float N0032[3] = {0.225257, -0.892727, 0.390179};
static const float N0033[3] = {0.866024, 0.0, 0.499985};
static const float N0034[3] = {0.390179, 0.892727, 0.225257};
static const float N0035[3] = {0.390179, -0.892727, 0.225257};

void DrawSnowflake(int wire) {

GLenum capQuads = wire ? GL_LINE_LOOP : GL_QUADS;
glBegin(capQuads);
glNormal3fv(N0000);
glVertex3fv(P0000);
glNormal3fv(N0001);
glVertex3fv(P0001);
glNormal3fv(N0002);
glVertex3fv(P0002);
glNormal3fv(N0003);
glVertex3fv(P0003);
glNormal3fv(N0001);
glVertex3fv(P0001);
glNormal3fv(N0004);
glVertex3fv(P0005);
glNormal3fv(N0005);
glVertex3fv(P0004);
glNormal3fv(N0002);
glVertex3fv(P0002);
glNormal3fv(N0006);
glVertex3fv(P0006);
glNormal3fv(N0007);
glVertex3fv(P0007);
glNormal3fv(N0003);
glVertex3fv(P0003);
glNormal3fv(N0002);
glVertex3fv(P0002);
glNormal3fv(N0008);
glVertex3fv(P0008);
glNormal3fv(N0006);
glVertex3fv(P0006);
glNormal3fv(N0002);
glVertex3fv(P0002);
glNormal3fv(N0005);
glVertex3fv(P0004);
glNormal3fv(N0009);
glVertex3fv(P0009);
glNormal3fv(N0010);
glVertex3fv(P0010);
glNormal3fv(N0007);
glVertex3fv(P0007);
glNormal3fv(N0006);
glVertex3fv(P0006);
glNormal3fv(N0011);
glVertex3fv(P0011);
glNormal3fv(N0009);
glVertex3fv(P0009);
glNormal3fv(N0006);
glVertex3fv(P0006);
glNormal3fv(N0008);
glVertex3fv(P0008);
glNormal3fv(N0012);
glVertex3fv(P0012);
glNormal3fv(N0013);
glVertex3fv(P0013);
glNormal3fv(N0010);
glVertex3fv(P0010);
glNormal3fv(N0009);
glVertex3fv(P0009);
glNormal3fv(N0014);
glVertex3fv(P0014);
glNormal3fv(N0012);
glVertex3fv(P0012);
glNormal3fv(N0009);
glVertex3fv(P0009);
glNormal3fv(N0011);
glVertex3fv(P0011);
glNormal3fv(N0015);
glVertex3fv(P0015);
glNormal3fv(N0016);
glVertex3fv(P0016);
glNormal3fv(N0013);
glVertex3fv(P0013);
glNormal3fv(N0012);
glVertex3fv(P0012);
glNormal3fv(N0017);
glVertex3fv(P0017);
glNormal3fv(N0015);
glVertex3fv(P0015);
glNormal3fv(N0012);
glVertex3fv(P0012);
glNormal3fv(N0014);
glVertex3fv(P0014);
glNormal3fv(N0018);
glVertex3fv(P0018);
glNormal3fv(N0019);
glVertex3fv(P0019);
glNormal3fv(N0016);
glVertex3fv(P0016);
glNormal3fv(N0015);
glVertex3fv(P0015);
glNormal3fv(N0020);
glVertex3fv(P0020);
glNormal3fv(N0018);
glVertex3fv(P0018);
glNormal3fv(N0015);
glVertex3fv(P0015);
glNormal3fv(N0017);
glVertex3fv(P0017);
glNormal3fv(N0021);
glVertex3fv(P0021);
glNormal3fv(N0022);
glVertex3fv(P0022);
glNormal3fv(N0019);
glVertex3fv(P0019);
glNormal3fv(N0018);
glVertex3fv(P0018);
glNormal3fv(N0023);
glVertex3fv(P0023);
glNormal3fv(N0021);
glVertex3fv(P0021);
glNormal3fv(N0018);
glVertex3fv(P0018);
glNormal3fv(N0020);
glVertex3fv(P0020);
glNormal3fv(N0024);
glVertex3fv(P0024);
glNormal3fv(N0025);
glVertex3fv(P0025);
glNormal3fv(N0022);
glVertex3fv(P0022);
glNormal3fv(N0021);
glVertex3fv(P0021);
glNormal3fv(N0026);
glVertex3fv(P0026);
glNormal3fv(N0024);
glVertex3fv(P0024);
glNormal3fv(N0021);
glVertex3fv(P0021);
glNormal3fv(N0023);
glVertex3fv(P0023);
glNormal3fv(N0027);
glVertex3fv(P0027);
glNormal3fv(N0028);
glVertex3fv(P0028);
glNormal3fv(N0025);
glVertex3fv(P0025);
glNormal3fv(N0024);
glVertex3fv(P0024);
glNormal3fv(N0029);
glVertex3fv(P0029);
glNormal3fv(N0027);
glVertex3fv(P0027);
glNormal3fv(N0024);
glVertex3fv(P0024);
glNormal3fv(N0026);
glVertex3fv(P0026);
glNormal3fv(N0030);
glVertex3fv(P0030);
glNormal3fv(N0031);
glVertex3fv(P0031);
glNormal3fv(N0028);
glVertex3fv(P0028);
glNormal3fv(N0027);
glVertex3fv(P0027);
glNormal3fv(N0032);
glVertex3fv(P0032);
glNormal3fv(N0030);
glVertex3fv(P0030);
glNormal3fv(N0027);
glVertex3fv(P0027);
glNormal3fv(N0029);
glVertex3fv(P0029);
glNormal3fv(N0033);
glVertex3fv(P0033);
glNormal3fv(N0034);
glVertex3fv(P0034);
glNormal3fv(N0031);
glVertex3fv(P0031);
glNormal3fv(N0030);
glVertex3fv(P0030);
glNormal3fv(N0035);
glVertex3fv(P0035);
glNormal3fv(N0033);
glVertex3fv(P0033);
glNormal3fv(N0030);
glVertex3fv(P0030);
glNormal3fv(N0032);
glVertex3fv(P0032);
glNormal3fv(N0001);
glVertex3fv(P0001);
glNormal3fv(N0000);
glVertex3fv(P0000);
glNormal3fv(N0034);
glVertex3fv(P0034);
glNormal3fv(N0033);
glVertex3fv(P0033);
glNormal3fv(N0004);
glVertex3fv(P0005);
glNormal3fv(N0001);
glVertex3fv(P0001);
glNormal3fv(N0033);
glVertex3fv(P0033);
glNormal3fv(N0035);
glVertex3fv(P0035);
glNormal3fv(N0011);
glVertex3fv(P0011);
glNormal3fv(N0008);
glVertex3fv(P0008);
glNormal3fv(N0017);
glVertex3fv(P0017);
glNormal3fv(N0014);
glVertex3fv(P0014);
glNormal3fv(N0008);
glVertex3fv(P0008);
glNormal3fv(N0005);
glVertex3fv(P0004);
glNormal3fv(N0020);
glVertex3fv(P0020);
glNormal3fv(N0017);
glVertex3fv(P0017);
glNormal3fv(N0005);
glVertex3fv(P0004);
glNormal3fv(N0004);
glVertex3fv(P0005);
glNormal3fv(N0023);
glVertex3fv(P0023);
glNormal3fv(N0020);
glVertex3fv(P0020);
glNormal3fv(N0004);
glVertex3fv(P0005);
glNormal3fv(N0035);
glVertex3fv(P0035);
glNormal3fv(N0026);
glVertex3fv(P0026);
glNormal3fv(N0023);
glVertex3fv(P0023);
glNormal3fv(N0035);
glVertex3fv(P0035);
glNormal3fv(N0032);
glVertex3fv(P0032);
glNormal3fv(N0029);
glVertex3fv(P0029);
glNormal3fv(N0026);
glVertex3fv(P0026);
glNormal3fv(N0010);
glVertex3fv(P0010);
glNormal3fv(N0013);
glVertex3fv(P0013);
glNormal3fv(N0016);
glVertex3fv(P0016);
glNormal3fv(N0007);
glVertex3fv(P0007);
glVertex3fv(P0007);
glNormal3fv(N0016);
glVertex3fv(P0016);
glNormal3fv(N0019);
glVertex3fv(P0019);
glNormal3fv(N0003);
glVertex3fv(P0003);
glNormal3fv(N0022);
glVertex3fv(P0022);
glNormal3fv(N0000);
glVertex3fv(P0000);
glNormal3fv(N0003);
glVertex3fv(P0003);
glNormal3fv(N0019);
glVertex3fv(P0019);
glNormal3fv(N0000);
glVertex3fv(P0000);
glNormal3fv(N0022);
glVertex3fv(P0022);
glNormal3fv(N0025);
glVertex3fv(P0025);
glNormal3fv(N0034);
glVertex3fv(P0034);
glVertex3fv(P0034);
glNormal3fv(N0025);
glVertex3fv(P0025);
glNormal3fv(N0028);
glVertex3fv(P0028);
glNormal3fv(N0031);
glVertex3fv(P0031);
glEnd ();
}

void
initDrawSnowflake()
{
    glRotatef(180.0, 0.0, 1.0, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glEnable(GL_CULL_FACE);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_RESCALE_NORMAL);

    glDisable(GL_COLOR_MATERIAL);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, null_shininess);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, null_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, null_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, null_specular);
}

void
finDrawSnowflake()
{
    glDisable(GL_CULL_FACE);
}
