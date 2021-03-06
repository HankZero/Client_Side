
// Client_Side.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号
#include "ClientSocket.h"
#include "LoginDlg.h"

// CClient_SideApp: 
// 有关此类的实现，请参阅 Client_Side.cpp
//

class CClient_SideApp : public CWinApp
{
public:
	CClient_SideApp();

// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	CClientSocket*GetMainSocket()const;
	CClientSocket*m_pSocket;
// 实现

	DECLARE_MESSAGE_MAP()
};

extern CClient_SideApp theApp;