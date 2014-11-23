#include "BoostSystemUtil.h"
#include <sstream>

namespace smsbroker {

std::string BoostSystemUtil::buildErrorCodeString(
		const boost::system::error_code& errorCode) {
	std::stringstream ss;
	ss << errorCode.message() << " (" << errorCode.category().name() << ':'
			<< errorCode.value() << ')';
	return ss.str();
}

}
