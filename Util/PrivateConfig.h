/*
  Copyright (c) 2003, Dominik Reichl <dominik.reichl@t-online.de>
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

  - Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer. 
  - Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.
  - Neither the name of ReichlSoft nor the names of its contributors may be
    used to endorse or promote products derived from this software without
    specific prior written permission.
 
  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.
*/

// CONFIGURATION FILE MANAGER
// Created: Dominik Reichl, 2003

#ifndef ___PRIVATE_CONFIG_H___
#define ___PRIVATE_CONFIG_H___

#include <windows.h>

#define SI_REGSIZE 1024

#define PCFG_IN
#define PCFG_OUT

#define OLF_OPEN 0
#define OLF_PRINT 1
#define OLF_EXPLORE 2

class CPrivateConfig
{
public:
	CPrivateConfig();
	virtual ~CPrivateConfig();

	BOOL Set(char *pszField, PCFG_IN char *pszValue);
	BOOL Get(char *pszField, PCFG_OUT char *pszValue);

private:
	char m_szFile[SI_REGSIZE];
};

void _GetPathFromFile(char *pszFile, char *pszPath);
HINSTANCE _OpenLocalFile(char *szFile, int nMode);

#endif // ___PRIVATE_CONFIG_H___