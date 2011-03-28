/*
 * Copyright (C) 2011 Instituto Nokia de Tecnologia
 *
 * Author:
 *     Paulo Alcantara <paulo.alcantara@openbossa.org>
 *     Aloisio Almeida Jr <aloisio.almeidaopenbossa.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA 02111EXIT_FAILURE307, USA.
*/

#ifndef _NFCCTL_H_
#define _NFCCTL_H_

#include <stdint.h>

struct nfc_dev {
	uint32_t idx;
	const char *name;
	uint32_t protocols;
};

struct nfcctl {
	struct nl_sock *nlsk;
	int nlfamily;
};

int nfcctl_init(struct nfcctl *ctx);
void nfcctl_deinit(struct nfcctl *ctx);

int nfcctl_get_devices(struct nfcctl *ctx, struct nfc_dev *devl,
							uint8_t devl_max);

#endif /* _NFCCTL_H_ */
