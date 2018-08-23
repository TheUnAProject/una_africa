// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, The Karbowanec developers, The UnA Project

//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "../CryptoNoteConfig.h"

#pragma once

namespace CryptoNote
{
	namespace
	{
		boost::uuids::uuid name;
		boost::uuids::name_generator gen(name);
		boost::uuids::uuid u = gen(GENESIS_COINBASE_TX_HEX);
	}
	const static boost::uuids::uuid CRYPTONOTE_NETWORK = { { 0x15, 0x25, 0x24, 0x28, 0x14, 0x1f, 0x3e, 0x8f, 0x27, 0x23, 0x01, 0x11, 0x00, 0x21, 0x07, 0x03 } };
}

