#include "Clump.h"

Clump::Clump(const char* fileName)
{
}

Clump::~Clump()
{
}

bool Clump::load()
{
	return false;
}

bool Clump::unload()
{
	return false;
}

uint32_t Clump::Get_Version()
{
	return uint32_t();
}

uint32_t Clump::Get_Num_Sections()
{
	return uint32_t();
}

const RW_HEADER& Clump::GetSectionHeader(uint32_t index) const
{
	// TODO: insert return statement here
}

const SECTION_DATA& Clump::GetSectionData(uint32_t index) const
{
	// TODO: insert return statement here
}

bool Clump::ReadHeader(std::ifstream& file)
{
	file.read(reinterpret_cast<char*>(&clump.SECTION_TYPE), sizeof(clump.SECTION_TYPE));
	file.read(reinterpret_cast<char*>(&clump.SECTION_SIZE), sizeof(clump.SECTION_SIZE));
	file.read(reinterpret_cast<char*>(&clump.RW_Version), sizeof(clump.RW_Version));

	// Check if the file ID and version are valid
	if (clump.SECTION_TYPE != RW_CLUMP || clump.RW_Version != RW37) {
		std::cerr << "Error: Invalid RenderWare DFF file" << std::endl;
		return false;
	}


	return true;

}

bool Clump::ReadSectionHeaders(std::ifstream& file)
{
	return false;
}

bool Clump::ReadSectionData(std::ifstream& file)
{
	return false;
}
