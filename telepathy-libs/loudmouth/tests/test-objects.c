/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2006 Imendio AB
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <stdlib.h>

#include "test-objects.h"

Suite *
create_lm_objects_suite ()
{
	Suite *suite;

	suite = suite_create ("LmObjects");

	return suite;
}

int 
main (int argc, char **argv)
{
	SRunner *srunner;
	int      nf;

	srunner = srunner_create (create_lm_objects_suite ());

	srunner_run_all (srunner, CK_NORMAL);
	nf = srunner_ntests_failed (srunner);

	srunner_free (srunner);

	return (nf == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

