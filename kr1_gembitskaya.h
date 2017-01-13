
// kr1_gembitskaya.h : главный файл заголовка для приложения kr1_gembitskaya
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// Ckr1_gembitskayaApp:
// О реализации данного класса см. kr1_gembitskaya.cpp
//

class Ckr1_gembitskayaApp : public CWinAppEx
{
public:
	Ckr1_gembitskayaApp();


// Переопределение
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Реализация
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ckr1_gembitskayaApp theApp;
