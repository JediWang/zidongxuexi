// LoginDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LoginDlg.h"
#include "afxdialogex.h"


// CLoginDlg �Ի���

IMPLEMENT_DYNAMIC(CLoginDlg, CDialogEx)

CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLoginDlg::IDD, pParent)
	
{
	m_strName = new CString;
	m_strPass = new CString;
	m_booAuto = new BOOL;
	*m_booAuto = FALSE;
}

CLoginDlg::CLoginDlg( CString *istrName,CString *istrPass,BOOL *ibooAuto,CWnd* pParent /*= NULL*/ )
{
	m_strName = istrName;
	m_strPass = istrPass;
	m_booAuto = ibooAuto;
}

CLoginDlg::~CLoginDlg()
{
}

void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_NAME,		m_Name);
	DDX_Control(pDX, IDC_EDIT_PASSW,	m_Pass);
	DDX_Control(pDX, IDC_CHECK_REMMBER,	m_Remmber);
	DDX_Control(pDX, IDC_CHECK_REMMBER_ATUO,m_AutoL);

}




BOOL CLoginDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();


	return TRUE;
}

BEGIN_MESSAGE_MAP(CLoginDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CLoginDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CLoginDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


void CLoginDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString pname,ppass;
	BOOL atuo;
	m_Name.GetWindowText(pname);
	m_Pass.GetWindowText(ppass);
	m_strName->SetString(pname);
	m_strPass->SetString(ppass);

	if(m_AutoL.GetCheck())
		*m_booAuto = TRUE;

	if (m_Remmber.GetCheck())
	{
		CString iniFile = _T(".\\zidongxuexi.ini");
		WritePrivateProfileString(_T("Login"),_T("Name"),pname,iniFile);
		WritePrivateProfileString(_T("Login"),_T("Passd"),ppass,iniFile);
	}

	CDialogEx::OnOK();
}


void CLoginDlg::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
