#pragma once
#include <stdint.h>
#include <vector>



struct RW_HEADER
{
	uint32_t SECTION_TYPE;
	uint32_t SECTION_SIZE;
	uint32_t RW_Version;
};

struct SECTION_DATA
{
	std::vector<uint8_t> data;
};

enum RW_SECTION_TYPES
{
	 RW_CLUMP		  = 0x10,
	 RW_STRUCT		  = 0x01,
	 RW_STRING		  = 0x02,
	 RW_TEXTURE	      = 0x06,
	 RW_FRAME_LIST    = 0x0E,
	 RW_GEOMETRY      = 0x0F,
	 RW_MAT_LIST      = 0x08,
	 RW_GEOMETRY_LIST = 0x1A,
	 RW_EXTENSION     = 0x03,

};
enum RW_VERSIONS
{
	RW37 = 0x6500021C,

};