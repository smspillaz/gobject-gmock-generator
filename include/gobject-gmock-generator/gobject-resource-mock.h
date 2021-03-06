/*
 * Copyright (c) Sam Spilsbury <smspillaz@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Author: Sam Spilsbury <smspillaz@gmail.com>
 */
#ifndef _GOBJECT_GMOCK_GENERATOR_RESOURCE_MOCK_H
#define _GOBJECT_GMOCK_GENERATOR_RESOURCE_MOCK_H

#include <gmock/gmock.h>

#include <gobject-gmock-generator/gobject-resource.h>
#include <glib.h>

namespace gobject_gmock_generator
{
namespace mock
{
class ObjectResource :
    public gobject_gmock_generator::ObjectResource
{
    public:

	ObjectResource ();

        MOCK_CONST_METHOD1 (constructor, void (const ConstructParams &));
        MOCK_CONST_METHOD0 (dispose, void ());
        MOCK_CONST_METHOD0 (finalize, void ());
};
}
}

#endif
