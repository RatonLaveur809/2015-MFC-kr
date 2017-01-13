#pragma once
#include "afxwin.h"


// диалоговое окно CoolDialog

class CoolDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CoolDialog)

public:
	CoolDialog(CWnd* pParent = NULL);   // стандартный конструктор
	virtual ~CoolDialog();

// Данные диалогового окна
	enum { IDD = IDD_COOL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
//	CListBox m_list2;
//	CListBox m_list1;
	virtual BOOL OnInitDialog();
	CString m_selected;
	afx_msg void OnBnClickedOk();
	afx_msg void OnLbnDblclkList2();
	afx_msg void OnLbnDblclkList1();
	CString m_edit1;
	afx_msg void OnBnClickedButton2();
	CListBox m_list1;
	CListBox m_list2;
	CString m_list2_value;
};
