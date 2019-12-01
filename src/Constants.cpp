#include "tools/Constants.h"
#include <string>
#include <iostream>

namespace tools
{
	const std::string Constants::version = "1.0.1";
	const std::string Constants::release = "01.Dec.2019";

	void Constants::file_non_existent(const std::string &file)
	{
		std::cerr << "Error. The file \"" + file + "\" does not exist." << std::endl;
	}
}
