/**
 * @file ftp_client_transport.h
 * @brief Transport protocol abstraction layer
 *
 * @section License
 *
 * Copyright (C) 2010-2018 Oryx Embedded SARL. All rights reserved.
 *
 * This file is part of CycloneTCP Open.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @author Oryx Embedded SARL (www.oryx-embedded.com)
 * @version 1.9.0
 **/

#ifndef _FTP_CLIENT_TRANSPORT_H
#define _FTP_CLIENT_TRANSPORT_H

//Dependencies
#include "core/net.h"
#include "ftp/ftp_client.h"

//C++ guard
#ifdef __cplusplus
   extern "C" {
#endif

//FTP client related functions
error_t ftpClientOpenConnection(FtpClientContext *context,
   FtpClientSocket *connection, size_t txBufferSize, size_t rxBufferSize);

error_t ftpClientOpenSecureConnection(FtpClientContext *context,
   FtpClientSocket *connection, size_t txBufferSize, size_t rxBufferSize);

error_t ftpClientEstablishSecureConnection(FtpClientSocket *connection);

error_t ftpClientShutdownConnection(FtpClientSocket *connection);

void ftpClientCloseConnection(FtpClientSocket *connection);

error_t ftpClientSendData(FtpClientSocket *connection, const void *data,
   size_t length, size_t *written, uint_t flags);

error_t ftpClientReceiveData(FtpClientSocket *connection, void *data,
   size_t size, size_t *received, uint_t flags);

//C++ guard
#ifdef __cplusplus
   }
#endif

#endif
