
// kr1_gembitskayaView.h : ��������� ������ Ckr1_gembitskayaView
//

#pragma once


class Ckr1_gembitskayaView : public CView
{
protected: // ������� ������ �� ������������
	Ckr1_gembitskayaView();
	DECLARE_DYNCREATE(Ckr1_gembitskayaView)

// ��������
public:
	Ckr1_gembitskayaDoc* GetDocument() const;

// ��������
public:

// ���������������
public:
	virtual void OnDraw(CDC* pDC);  // �������������� ��� ��������� ����� �������������
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����������
public:
	virtual ~Ckr1_gembitskayaView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ��������� ������� ����� ���������
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ���������� ������ � kr1_gembitskayaView.cpp
inline Ckr1_gembitskayaDoc* Ckr1_gembitskayaView::GetDocument() const
   { return reinterpret_cast<Ckr1_gembitskayaDoc*>(m_pDocument); }
#endif

