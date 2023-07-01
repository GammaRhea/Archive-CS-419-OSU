

// *******************
// VERTEX BUFFER DATA:
// *******************

#ifdef DEFINITION
struct vertex
{
	glm::vec3	position;
	glm::vec3	normal;
	glm::vec3	color;
	glm::vec2	texCoord;
};
#endif

//PHI is the Golden Ratio, it approximates to 1.62 for normal vector calculation
const double PHI = { (1. + sqrt(5.)) / 2. };

struct vertex VertexData[] =
{
	// If you're confused on my numbering scheme here, its because I based my faces on this sketchfab model:
	// https://sketchfab.com/3d-models/d20-3d-printing-w20-3d-druck-freekostenlos-939aef38e6934d9688e1c6fa73e714c7
	// Its a pretty standard d20 die, but I couldn't find mine irl, so I used this as a reference.
	// Fun Fact, Icosahedron's employ the Golden Ratio

	// For 01/16/23 Isocahedron's geometry is done, calculate the normals and change the texture then turn it in

	// 01/16/23 Normals are done, jsut need to change the texture
	// Texture Done, Source of the Texture: https://pbs.twimg.com/media/EZTM6tfWsAAEv-y.jpg

	// tri #1
	{
		{ -1., 0., -PHI },
		{ 0., -1.24, -3.24 },
		{ 1., 0., 0. },
		{ 0., 0. }
	},

	{
		{ 1., 0., -PHI },
		{ 0., -1.24, -3.24 },
		{ 1., 0., 0. },
		{ 1., 0. }
	},

	{
		{ 0., -PHI, -1. },
		{ 0., -1.24, -3.24 },
		{ 1., 0., 0. },
		{ 0.5, 1. }
	},

	// tri #2
	{
		{ 0., PHI, 1. },
		{ 2.0044, 2.0044, 2.0044 },
		{ 0., 1., 0. },
		{ 0., 0. }
	},

	{
		{ 1., 0., PHI },
		{ 2.0044, 2.0044, 2.0044 },
		{ 0., 1., 0. },
		{ 1., 0. }
	},

	{
		{ PHI, 1., 0. },
		{ 2.0044, 2.0044, 2.0044 },
		{ 0., 1., 0. },
		{ 0.5, 1. }
	},

	// tri #3
	{
		{ -1., 0., -PHI },
		{ -3.24, 0., -1.24 },
		{ 1., 1., 0.09 },
		{ 0., 0. }
	},

	{
		{ -PHI, -1., 0. },
		{ -3.24, 0., -1.24 },
		{ 1., 1., 0.09 },
		{ 1., 0. }
	},

	{
		{ -PHI, 1., 0. },
		{ -3.24, 0., -1.24 },
		{ 1., 1., 0.09 },
		{ 0.5, 1. }
	},

	// tri #4
	{
		{ 1., 0., PHI },
		{ 2.0044, -2.0044, 2.0044 },
		{ 0., 0., 1. },
		{ 0., 0. }
	},

	{
		{ 0., -PHI, 1. },
		{ 2.0044, -2.0044, 2.0044 },
		{ 0., 0., 1. },
		{ 1., 0. }
	},

	{
		{ PHI, -1., 0. },
		{ 2.0044, -2.0044, 2.0044 },
		{ 0., 0., 1. },
		{ 0.5, 1. }
	},

	// tri #5
	{
		{ PHI, -1., 0. },
		{ 3.24, 0., -1.24 },
		{ 0.96, 0.5, 0.19 },
		{ 0., 0. }
	},

	{
		{ 1., 0., -PHI },
		{ 3.24, 0., -1.24 },
		{ 0.96, 0.5, 0.19 },
		{ 1., 0. }
	},

	{
		{ PHI, 1., 0. },
		{ 3.24, 0., -1.24 },
		{ 0.96, 0.5, 0.19 },
		{ 0.5, 1. }
	},

	// tri #6
	{
		{ 0., -PHI, 1. },
		{ -2.0044, -2.0044, 2.0044 },
		{ 0.57, 0.12, 0.71 },
		{ 0., 0. }
	},

	{
		{ -1., 0., PHI },
		{ -2.0044, -2.0044, 2.0044 },
		{ 0.57, 0.12, 0.71 },
		{ 1., 0. }
	},

	{
		{ -PHI, -1., 0. },
		{ -2.0044, -2.0044, 2.0044 },
		{ 0.57, 0.12, 0.71 },
		{ 0.5, 1. }
	},

	// tri #7
	{
		{ 1., 0., -PHI },
		{ 0., 1.24, -3.24 },
		{ 0.27, 0.94, 0.94 },
		{ 0., 0. }
	},

	{
		{ -1., 0., -PHI },
		{ 0., 1.24, -3.24 },
		{ 0.27, 0.94, 0.94 },
		{ 1., 0. }
	},

	{
		{ 0., PHI, -1. },
		{ 0., 1.24, -3.24 },
		{ 0.27, 0.94, 0.94 },
		{ 0.5, 1. }
	},

	// tri #8
	{
		{ -1., 0., PHI },
		{ -2.0044, 2.0044, 2.0044 },
		{ 0.94, 0.2, 0.9 },
		{ 0., 0. }
	},

	{
		{ 0., PHI, 1. },
		{ -2.0044, 2.0044, 2.0044 },
		{ 0.94, 0.2, 0.9 },
		{ 1., 0. }
	},

	{
		{ -PHI, 1., 0. },
		{ -2.0044, 2.0044, 2.0044 },
		{ 0.94, 0.2, 0.9 },
		{ 0.5, 1. }
	},

	// tri #9
	{
		{ -PHI, -1., 0. },
		{ -1.24, -3.24, 0 },
		{ 0.72, 1., 0.24 },
		{ 0., 0. }
	},

	{
		{ 0., -PHI, -1. },
		{ -1.24, -3.24, 0 },
		{ 0.72, 1., 0.24 },
		{ 1., 0. }
	},

	{
		{ 0., -PHI, 1. },
		{ -1.24, -3.24, 0 },
		{ 0.72, 1., 0.24 },
		{ 0.5, 1. }
	},

	// tri #10
	{
		{ -PHI, 1., 0. },
		{ -1.24, 3.24, 0 },
		{ 1., 0.75, 0.83 },
		{ 0., 0. }
	},

	{
		{ 0., PHI, 1. },
		{ -1.24, 3.24, 0 },
		{ 1., 0.75, 0.83 },
		{ 1., 0. }
	},

	{
		{ 0., PHI, -1. },
		{ -1.24, 3.24, 0 },
		{ 1., 0.75, 0.83 },
		{ 0.5, 1. }
	},

	// tri #11
	{
		{ 0., -PHI, -1. },
		{ 1.24, -3.24, 0. },
		{ 0., 0.5, 0.5 },
		{ 0., 0. }
	},

	{
		{ PHI, -1., 0. },
		{ 1.24, -3.24, 0. },
		{ 0., 0.5, 0.5 },
		{ 1., 0. }
	},

	{
		{ 0., -PHI, 1. },
		{ 1.24, -3.24, 0. },
		{ 0., 0.5, 0.5 },
		{ 0.5, 1. }
	},

	// tri #12
	{
		{ 0., PHI, 1. },
		{ 1.24, 3.24, 0. },
		{ 0.86, 0.75, 1. },
		{ 0., 0. }
	},

	{
		{ PHI, 1., 0. },
		{ 1.24, 3.24, 0. },
		{ 0.86, 0.75, 1. },
		{ 1., 0. }
	},

	{
		{ 0., PHI, -1. },
		{ 1.24, 3.24, 0. },
		{ 0.86, 0.75, 1. },
		{ 0.5, 1. }
	},

	// tri #13
	{
		{ 0., -PHI, -1. },
		{ 2.0044, -2.0044, -2.0044 },
		{ 0.67, 0.43, 0.16 },
		{ 0., 0. }
	},

	{
		{ 1., 0., -PHI },
		{ 2.0044, -2.0044, -2.0044 },
		{ 0.67, 0.43, 0.16 },
		{ 1., 0. }
	},

	{
		{ PHI, -1., 0. },
		{ 2.0044, -2.0044, -2.0044 },
		{ 0.67, 0.43, 0.16 },
		{ 0.5, 1. }
	},

	// tri #14
	{
		{ 1., 0., PHI },
		{ 0., -1.24, 3.24 },
		{ 0.5, 0., 0. },
		{ 0., 0. }
	},

	{
		{ -1., 0., PHI },
		{ 0., -1.24, 3.24 },
		{ 0.5, 0., 0. },
		{ 1., 0. }
	},

	{
		{ 0., -PHI, 1. },
		{ 0., -1.24, 3.24 },
		{ 0.5, 0., 0. },
		{ 0.5, 1. }
	},

	// tri #15
	{
		{ 1., 0., -PHI },
		{ 2.0044, 2.0044, -2.0044 },
		{ 1., 1., 0.78 },
		{ 0., 0. }
	},

	{
		{ 0., PHI, -1. },
		{ 2.0044, 2.0044, -2.0044 },
		{ 1., 1., 0.78 },
		{ 1., 0. }
	},

	{
		{ PHI, 1., 0. },
		{ 2.0044, 2.0044, -2.0044 },
		{ 1., 1., 0.78 },
		{ 0.5, 1. }
	},

	// tri #16
	{
		{ -1., 0., PHI },
		{ -3.24, 0., 1.24 },
		{ 0.67, 1., 0.76 },
		{ 0., 0. }
	},

	{
		{ -PHI, 1., 0. },
		{ -3.24, 0., 1.24 },
		{ 0.67, 1., 0.76 },
		{ 1., 0. }
	},

	{
		{ -PHI, -1., 0. },
		{ -3.24, 0., 1.24 },
		{ 0.67, 1., 0.76 },
		{ 0.5, 1. }
	},

	// tri #17
	{
		{ 0., PHI, -1. },
		{ -2.0044, 2.0044, -2.0044 },
		{ 0.5, 0.5, 0. },
		{ 0., 0. }
	},

	{
		{ -1., 0., -PHI },
		{ -2.0044, 2.0044, -2.0044 },
		{ 0.5, 0.5, 0. },
		{ 1., 0. }
	},

	{
		{ -PHI, 1., 0. },
		{ -2.0044, 2.0044, -2.0044 },
		{ 0.5, 0.5, 0. },
		{ 0.5, 1. }
	},

	// tri #18
	{
		{ PHI, 1., 0. },
		{ 3.24, 0., 1.24 },
		{ 1., 0.84, 0.7 },
		{ 0., 0. }
	},

	{
		{ 1., 0., PHI },
		{ 3.24, 0., 1.24 },
		{ 1., 0.84, 0.7 },
		{ 1., 0. }
	},

	{
		{ PHI, -1., 0. },
		{ 3.24, 0., 1.24 },
		{ 1., 0.84, 0.7 },
		{ 0.5, 1. }
	},

	// tri #19
	{
		{ -1., 0., -PHI },
		{ -2.0044, -2.0044, -2.0044 },
		{ 0., 0., 0.5 },
		{ 0., 0. }
	},

	{
		{ 0., -PHI, -1. },
		{ -2.0044, -2.0044, -2.0044 },
		{ 0., 0., 0.5 },
		{ 1., 0. }
	},

	{
		{ -PHI, -1., 0. },
		{ -2.0044, -2.0044, -2.0044 },
		{ 0., 0., 0.5 },
		{ 0.5, 1. }
	},

	// tri #20 (Correct Corgi, this was my Origin Point for this project)
	{
		{ -1., 0., PHI },
		{ 0., 1.24, 3.24 },
		{ 0.5, 0.5, 0.5 },
		{ 0., 0. }
	},

	{
		{ 1., 0., PHI },
		{ 0., 1.24, 3.24 },
		{ 0.5, 0.5, 0.5 },
		{ 1., 0. }
	},

	{
		{ 0., PHI, 1. },
		{ 0., 1.24, 3.24 },
		{ 0.5, 0.5, 0.5 },
		{ 0.5, 1. }
	},
};

struct vertex JustVertexData[] =
{
	// vertex #0:
	{
		{ 1., 0., PHI },
		{ 0., 1.24, 3.24 },
		{ 0.5, 0.5, 0.5 },
		{ 1., 0. }
	},

	// vertex #1:
	{
		{ -1., 0., PHI },
		{ 0., 1.24, 3.24 },
		{ 0.5, 0.5, 0.5 },
		{ 0., 0. }
	},

	// vertex #2:
	{
		{ 1., 0., -PHI },
		{ 2.0044, 2.0044, -2.0044 },
		{ 1., 1., 0.78 },
		{ 0., 0. }
	},

	// vertex #3:
	{
		{ -1., 0., -PHI },
		{ -2.0044, -2.0044, -2.0044 },
		{ 0., 0., 0.5 },
		{ 0., 0. }
	},

	// vertex #4:
	{
		{ 0., PHI, 1. },
		{ 0., 1.24, 3.24 },
		{ 0.5, 0.5, 0.5 },
		{ 0.5, 1. }
	},

	// vertex #5:
	{
		{ 0., PHI, -1. },
		{ -2.0044, 2.0044, -2.0044 },
		{ 0.5, 0.5, 0. },
		{ 0., 0. }
	},

	// vertex #6:
	{
		{ 0., -PHI, 1. },
		{ 1.24, -3.24, 0. },
		{ 0., 0.5, 0.5 },
		{ 0.5, 1. }
	},

	// vertex #7:
	{
		{ 0., -PHI, -1. },
		{ 2.0044, -2.0044, -2.0044 },
		{ 0.67, 0.43, 0.16 },
		{ 0., 0. }
	},

	// vertex #8:
	{
		{ PHI, 1., 0. },
		{ 3.24, 0., 1.24 },
		{ 1., 0.84, 0.7 },
		{ 0., 0. }
	},

	// vertex #9:
	{
		{ PHI, -1., 0. },
		{ 3.24, 0., 1.24 },
		{ 1., 0.84, 0.7 },
		{ 0.5, 1. }
	},

	// vertex #10:
	{
		{ -PHI, 1., 0. },
		{ -2.0044, 2.0044, -2.0044 },
		{ 0.5, 0.5, 0. },
		{ 0.5, 1. }
	},

	// vertex #11:
	{
		{ -PHI, -1., 0. },
		{ -2.0044, -2.0044, -2.0044 },
		{ 0., 0., 0.5 },
		{ 0.5, 1. }
	},
};


int JustIndexData[] =
{
	3, 2, 7,
	4, 0, 8,
	3, 11, 10,
	0, 6, 9,
	9, 2, 8,
	6, 1, 11,
	2, 3, 5,
	1, 4, 10,
	11, 7, 6,
	10, 4, 5,
	7, 9, 6,
	4, 8, 5,
	7, 2, 9,
	0, 1, 6,
	2, 5, 8,
	1, 10, 11,
	5, 3, 10,
	8, 0, 9,
	3, 7, 11,
	1, 0, 4,
};
