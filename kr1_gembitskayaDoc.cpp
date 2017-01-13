
// kr1_gembitskayaDoc.cpp : ���������� ������ Ckr1_gembitskayaDoc
//

#include "stdafx.h"
// SHARED_HANDLERS ����� ���������� � ������������ �������� ��������� ���������� ������� ATL, �������
// � ������; ��������� ��������� ������������ ��� ��������� � ������ �������.
#ifndef SHARED_HANDLERS
#include "kr1_gembitskaya.h"
#endif

#include "kr1_gembitskayaDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Ckr1_gembitskayaDoc

IMPLEMENT_DYNCREATE(Ckr1_gembitskayaDoc, CDocument)

BEGIN_MESSAGE_MAP(Ckr1_gembitskayaDoc, CDocument)
END_MESSAGE_MAP()


// ��������/����������� Ckr1_gembitskayaDoc

Ckr1_gembitskayaDoc::Ckr1_gembitskayaDoc()
{
	// TODO: �������� ��� ��� ������������ ������ ������������
	//������������
	StringData="";
}

Ckr1_gembitskayaDoc::~Ckr1_gembitskayaDoc()
{
}

BOOL Ckr1_gembitskayaDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �������� ��� ��������� �������������
	// (��������� SDI ����� �������� ������������ ���� ��������)

	return TRUE;
}




// ������������ Ckr1_gembitskayaDoc

void Ckr1_gembitskayaDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �������� ��� ����������
	}
	else
	{
		// TODO: �������� ��� ��������
	}
}

#ifdef SHARED_HANDLERS

// ��������� ��� �������
void Ckr1_gembitskayaDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �������� ���� ��� ��� ����������� ������ ���������
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ��������� ������������ ������
void Ckr1_gembitskayaDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ������� ���������� ������ �� ������ ���������. 
	// ����� ����������� ������ ����������� ������ � ������� ";"

	// ��������:  strSearchContent = _T("�����;�������������;����;������ ole;");
	SetSearchContent(strSearchContent);
}

void Ckr1_gembitskayaDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// ����������� Ckr1_gembitskayaDoc

#ifdef _DEBUG
void Ckr1_gembitskayaDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void Ckr1_gembitskayaDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// ������� Ckr1_gembitskayaDoc
