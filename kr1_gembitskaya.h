
// kr1_gembitskaya.h : ������� ���� ��������� ��� ���������� kr1_gembitskaya
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"       // �������� �������


// Ckr1_gembitskayaApp:
// � ���������� ������� ������ ��. kr1_gembitskaya.cpp
//

class Ckr1_gembitskayaApp : public CWinAppEx
{
public:
	Ckr1_gembitskayaApp();


// ���������������
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ����������
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ckr1_gembitskayaApp theApp;
