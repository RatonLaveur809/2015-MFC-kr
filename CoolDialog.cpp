// CoolDialog.cpp: файл реализации
//

#include "stdafx.h"
#include "kr1_gembitskaya.h"
#include "CoolDialog.h"
#include "afxdialogex.h"

TCHAR str[20];
// диалоговое окно CoolDialog

IMPLEMENT_DYNAMIC(CoolDialog, CDialogEx)

CoolDialog::CoolDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CoolDialog::IDD, pParent)
	, m_selected(_T(""))
	, m_edit1(_T(""))
{

	m_list2_value = _T("");
	
}

CoolDialog::~CoolDialog()
{
}

void CoolDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_LIST2, m_list2);
	//  DDX_Control(pDX, IDC_LIST1, m_list1);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	//  DDX_LBString(pDX, IDC_LIST2, m_list2);
	//  DDX_LBString(pDX, IDC_LIST1, m_list1);
	DDX_Control(pDX, IDC_LIST1, m_list1);
	DDX_Control(pDX, IDC_LIST2, m_list2);
	DDX_LBString(pDX, IDC_LIST2, m_list2_value);
}


BEGIN_MESSAGE_MAP(CoolDialog, CDialogEx)
	ON_BN_CLICKED(IDOK, &CoolDialog::OnBnClickedOk)
	ON_LBN_DBLCLK(IDC_LIST2, &CoolDialog::OnLbnDblclkList2)
	ON_LBN_DBLCLK(IDC_LIST1, &CoolDialog::OnLbnDblclkList1)
	ON_BN_CLICKED(IDC_BUTTON2, &CoolDialog::OnBnClickedButton2)
END_MESSAGE_MAP()


// обработчики сообщений CoolDialog


BOOL CoolDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Добавить дополнительную инициализацию


	TCHAR st[20];
	char s[22][50];
	strcpy(s[0],"Le ciel bleu");
	strcpy(s[1],"sur nous");
	strcpy(s[2],"peut s'effondrer");
	strcpy(s[3],"Et la terre");
	strcpy(s[4],"peut bien");
	strcpy(s[5],"s'ecrouler.");
	strcpy(s[6],"Peu m'importe");
	strcpy(s[7],"si tu m'aimes");
	strcpy(s[8],"Je me fous");
	strcpy(s[9],"du monde entier.");
	strcpy(s[10],"Je renierais");
	strcpy(s[11],"ma patrie,");
	strcpy(s[12],"Je renierais");
	strcpy(s[13],"mes amis");
	strcpy(s[14],"Si tu me le");
	strcpy(s[15],"demandais.");
	strcpy(s[16],"On peut bien");
	strcpy(s[17],"rire de moi,");
	strcpy(s[18],"Je ferais");
	strcpy(s[19],"n'importe quoi");
	strcpy(s[20],"Si tu me le");
	strcpy(s[21],"demandais!");
					
	for (int i=0;i<22;i++)
		{			
			_stprintf(st,_T("%hs"),s[i]);		
			m_list2.AddString(st);  
		}

	TCHAR st1[20];
	char s1[22][50];
	strcpy(s1[0],"C'est merveilleux");
	strcpy(s1[1],"Quand on est");
	strcpy(s1[2],"tous les deux");
	strcpy(s1[3],"Le bonheur");
	strcpy(s1[4],"nous surveille");
	strcpy(s1[5],"C'est merveilleux");
	strcpy(s1[6],"Quand on est");
	strcpy(s1[7],"amoureux");
	strcpy(s1[8],"Les beaux jours");
	strcpy(s1[9],"se reveillent");
	strcpy(s1[10],"C'est merveilleux");
	strcpy(s1[11],"La vie est");
	strcpy(s1[12],"peinte en bleu");
	strcpy(s1[13],"A grands coups");
	strcpy(s1[14],"de soleil");
	strcpy(s1[15],"Puisque");
	strcpy(s1[16],"je t'aime");
	strcpy(s1[17],"Et que");
	strcpy(s1[18],"tu m'aimes");
	strcpy(s1[19],"C'est mer-");
	strcpy(s1[20],"veill-");
	strcpy(s1[21],"eux!");
					
	for (int j=0;j<22;j++)
		{			
			_stprintf(st1,_T("%hs"),s1[j]);		
			m_list1.AddString(st1);  
		}

	return TRUE;  // return TRUE unless you set the focus to a control
	// Исключение: страница свойств OCX должна возвращать значение FALSE
}


void CoolDialog::OnBnClickedOk()
{
	// TODO: добавьте свой код обработчика уведомлений
	CDialogEx::OnOK();
}


void CoolDialog::OnLbnDblclkList2()
{
	TCHAR st[20];
	int n=m_list2.GetCurSel();
	m_list2.GetText(n,st);
	m_list1.AddString(st);
	m_edit1=st;
	UpdateData(FALSE);
	
}


void CoolDialog::OnLbnDblclkList1()
{
	TCHAR st[20];
	int n=m_list1.GetCurSel();
	m_list1.GetText(n,st);
	m_list2.AddString(st);
}


void CoolDialog::OnBnClickedButton2()
{
	UpdateData();
	TCHAR st[1];
	_stprintf(st,_T("%hs"),"");
	for(int i=0;i<20;i++)
		str[i]=st[0];
	for(int i=0;i<m_edit1.GetLength();i++)
		str[i]=m_edit1[i];	
	int n=m_list2.GetCurSel();	
	m_list2.DeleteString(n);

	m_list2.InsertString(n,str);
	m_list2.SetCurSel(n);
	UpdateData();
	
}
