#include "tools/constants/Messages.h"
#include <iostream>
#include "tools/Tools.h"
#include <boost/format.hpp>

namespace tools
{
	const std::string Messages::given_str_empty = "The given string is empty.";
	const std::string Messages::not_gzip_compressed = "That is not gzip compressed data.";
	const std::string Messages::http_response_code_not_200 = "The response's HTTP code is not 200!";
	const std::string Messages::not_pos_int = "It was not given a positive integer.";
	const std::string Messages::req = "The request:";

	void Messages::file_non_existent(const std::string &file) noexcept
	{
		Tools::write_err_log(boost::str(boost::format("The file %1% does not exist") % file));
	}

	std::string Messages::enter_pos_num_to_read_in_file(const std::string &file) noexcept
	{
		return boost::str(boost::format("You need to enter a positive value and greater than 0 to read in \"%1%\".") % file);
	}

	std::string Messages::no_num_str_end(const std::string &str) noexcept
	{
		return boost::str(boost::format("There are no numerals at the end of the string \"%1%\".") % str);
	}

	std::string Messages::file_del_err(const std::string &file) noexcept
	{
		return boost::str(boost::format("The file %1% could not be deleted: %2%") % file % strerror(errno));
	}

	std::string Messages::resp(const int &status_code) noexcept
	{
		return boost::str(boost::format("The response (status code %1%):") % status_code);
	}
}
