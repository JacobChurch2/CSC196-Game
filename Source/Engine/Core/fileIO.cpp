#include "fileIO.h"

namespace kda{
	std::string kda::getFilePath()
	{
		return std::filesystem::current_path().string();
	}
}
