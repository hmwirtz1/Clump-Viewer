#pragma once

#include "Core.h";
#include <fstream>
#include <iostream>
class Clump
{
public:
	Clump(const char* fileName);
	virtual ~Clump();

	bool load();
	bool unload();

	uint32_t Get_Version();
	uint32_t Get_Num_Sections();

	const RW_HEADER& GetSectionHeader(uint32_t index) const;
	const SECTION_DATA& GetSectionData(uint32_t index) const;


	

private:
	RW_HEADER clump;

	std::vector<RW_HEADER> m_section_Headers;
	std::vector<SECTION_DATA> m_section_Data;

	bool ReadHeader(std::ifstream& file);
	bool ReadSectionHeaders(std::ifstream& file);
	bool ReadSectionData(std::ifstream& file);

};

