
// kr1_gembitskayaView.cpp : ���������� ������ Ckr1_gembitskayaView
//

#include "stdafx.h"
// SHARED_HANDLERS ����� ���������� � ������������ �������� ��������� ���������� ������� ATL, �������
// � ������; ��������� ��������� ������������ ��� ��������� � ������ �������.
#ifndef SHARED_HANDLERS
#include "kr1_gembitskaya.h"
#endif

#include "kr1_gembitskayaDoc.h"
#include "kr1_gembitskayaView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ckr1_gembitskayaView

IMPLEMENT_DYNCREATE(Ckr1_gembitskayaView, CView)

BEGIN_MESSAGE_MAP(Ckr1_gembitskayaView, CView)
	// ����������� ������� ������
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Ckr1_gembitskayaView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// ��������/����������� Ckr1_gembitskayaView

Ckr1_gembitskayaView::Ckr1_gembitskayaView()
{
	// TODO: �������� ��� ��������

}

Ckr1_gembitskayaView::~Ckr1_gembitskayaView()
{
}

BOOL Ckr1_gembitskayaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �������� ����� Window ��� ����� ����������� ���������
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// ��������� Ckr1_gembitskayaView

void Ckr1_gembitskayaView::OnDraw(CDC* /*pDC*/)
{
	Ckr1_gembitskayaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �������� ����� ��� ��������� ��� ����������� ������
}


// ������ Ckr1_gembitskayaView


void Ckr1_gembitskayaView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Ckr1_gembitskayaView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// ���������� �� ���������
	return DoPreparePrinting(pInfo);
}

void Ckr1_gembitskayaView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� �������������� ������������� ����� �������
}

void Ckr1_gembitskayaView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� ������� ����� ������
}

void Ckr1_gembitskayaView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Ckr1_gembitskayaView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// ����������� Ckr1_gembitskayaView

#ifdef _DEBUG
void Ckr1_gembitskayaView::AssertValid() const
{
	CView::AssertValid();
}

void Ckr1_gembitskayaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ckr1_gembitskayaDoc* Ckr1_gembitskayaView::GetDocument() const // �������� ������������ ������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ckr1_gembitskayaDoc)));
	return (Ckr1_gembitskayaDoc*)m_pDocument;
}
#endif //_DEBUG


// ����������� ��������� Ckr1_gembitskayaView
