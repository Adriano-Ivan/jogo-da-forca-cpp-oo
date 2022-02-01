#pragma once
#include<array>

//extern std::vector<char> chutes_errados;

namespace Forca {
	inline bool nao_enforcou(const std::array<char,5>& chutes_errados,int& indiceErro) {
		return indiceErro < 5;
	}
}

