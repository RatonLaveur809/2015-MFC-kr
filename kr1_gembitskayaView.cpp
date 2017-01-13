
// kr1_gembitskayaView.cpp : реализаци€ класса Ckr1_gembitskayaView
//

#include "stdafx.h"
// SHARED_HANDLERS можно определить в обработчиках фильтров просмотра реализации проекта ATL, эскизов
// и поиска; позвол€ет совместно использовать код документа в данным проекте.
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
	// —тандартные команды печати
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Ckr1_gembitskayaView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// создание/уничтожение Ckr1_gembitskayaView

Ckr1_gembitskayaView::Ckr1_gembitskayaView()
{
	// TODO: добавьте код создани€

}

Ckr1_gembitskayaView::~Ckr1_gembitskayaView()
{
}

BOOL Ckr1_gembitskayaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: изменить класс Window или стили посредством изменени€
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// рисование Ckr1_gembitskayaView

void Ckr1_gembitskayaView::OnDraw(CDC* /*pDC*/)
{
	Ckr1_gembitskayaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: добавьте здесь код отрисовки дл€ собственных данных
}


// печать Ckr1_gembitskayaView


void Ckr1_gembitskayaView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Ckr1_gembitskayaView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// подготовка по умолчанию
	return DoPreparePrinting(pInfo);
}

void Ckr1_gembitskayaView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте дополнительную инициализацию перед печатью
}

void Ckr1_gembitskayaView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте очистку после печати
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


// диагностика Ckr1_gembitskayaView

#ifdef _DEBUG
void Ckr1_gembitskayaView::AssertValid() const
{
	CView::AssertValid();
}

void Ckr1_gembitskayaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ckr1_gembitskayaDoc* Ckr1_gembitskayaView::GetDocument() const // встроена неотлаженна€ верси€
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ckr1_gembitskayaDoc)));
	return (Ckr1_gembitskayaDoc*)m_pDocument;
}
#endif //_DEBUG


// обработчики сообщений Ckr1_gembitskayaView
