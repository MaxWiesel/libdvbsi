/*
 * $Id$
 *
 * Copyright (C) 2004-2005 St?phane Est?-Gracias <sestegra@free.fr>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation.
 *
 * See the file 'COPYING' in the top level directory for details.
 */

#ifndef __name_descriptor_h__
#define __name_descriptor_h__

#include "descriptor.h"

class NameDescriptor : public Descriptor
{
	protected:
		std::string name;

	public:
		NameDescriptor(const uint8_t * const buffer);

		const std::string &getName(void) const;
};

#endif /* __name_descriptor_h__ */
