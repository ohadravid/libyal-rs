/*
 * The internal extern definition
 *
 * Copyright (C) 2011-2018, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFUSN_INTERNAL_EXTERN_H )
#define _LIBFUSN_INTERNAL_EXTERN_H

#include <common.h>

/* Define HAVE_LOCAL_LIBFUSN for local use of libfusn
 */
#if !defined( HAVE_LOCAL_LIBFUSN )

/* If libtool DLL support is enabled set LIBFUSN_DLL_EXPORT
 * before including libfusn/extern.h
 */
#if defined( _WIN32 ) && defined( DLL_EXPORT )
#define LIBFUSN_DLL_EXPORT
#endif

#include <libfusn/extern.h>

#define LIBFUSN_EXTERN_VARIABLE	LIBFUSN_EXTERN

#else
#define LIBFUSN_EXTERN		/* extern */
#define LIBFUSN_EXTERN_VARIABLE	extern

#endif /* !defined( HAVE_LOCAL_LIBFUSN ) */

#endif /* !defined( _LIBFUSN_INTERNAL_EXTERN_H ) */
