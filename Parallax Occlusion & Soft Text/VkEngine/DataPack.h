#ifndef	DATA_PACK_H
#define DATA_PACK_H

#include "Definitions.h"

#include <vector>
#include <string>

class DataPack
{
public:
	struct Texture
	{
		std::string filename;
		//Definitions::TEXTURE_DATATYPE datatype;

		static inline Texture GetTexture(const char* _filename)
		{
			return { _filename };
		}
	};
	struct Mesh
	{
		std::string filename;
		Definitions::VERTEX_DATATYPE datatype;

		static inline Mesh GetMesh(const char* _filename, Definitions::VERTEX_DATATYPE _datatype)
		{
			return { _filename, _datatype };
		}
	};

	std::vector<Mesh> meshes;
	std::vector<Texture> textures;
};

#endif