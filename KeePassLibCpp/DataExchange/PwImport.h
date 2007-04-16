/*
  KeePass Password Safe - The Open-Source Password Manager
  Copyright (C) 2003-2007 Dominik Reichl <dominik.reichl@t-online.de>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef ___PW_IMPORT_H___
#define ___PW_IMPORT_H___

#include "../PwManager.h"
#include "../SysDefEx.h"

#define DEF_CW_CATEGORY _T("----------------------------------------")
#define DEF_PV_SEPENTRY _T("----------------------")
#define DEF_PV_CATEGORY _T("************")

class CPwImport
{
public:
	CPwImport();
	virtual ~CPwImport();

	DWORD ImportCsvToDb(const TCHAR *pszFile, CPwManager *pMgr, DWORD dwGroupId);
	BOOL ImportCWalletToDb(const TCHAR *pszFile, CPwManager *pMgr);
	BOOL ImportPwSafeToDb(const TCHAR *pszFile, CPwManager *pMgr);
	BOOL ImportPVaultToDb(const TCHAR *pszFile, CPwManager *pMgr);

private:
	void _AddStringStreamToDb(const char *pStream, unsigned long uStreamSize, BOOL bUTF8);
	char *_FileToMemory(const TCHAR *pszFile, unsigned long *pFileSize);
	unsigned long _GetPreferredIcon(LPCTSTR pszGroup);

	CPwManager *m_pLastMgr;
	DWORD m_dwLastGroupId;
};

#endif
