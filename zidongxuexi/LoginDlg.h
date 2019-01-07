#pragma once


// CLoginDlg 对话框

class CLoginDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CLoginDlg)

public:
	CLoginDlg(CWnd* pParent = NULL);   // 标准构造函数
	CLoginDlg(CString *istrName,CString *istrPass,BOOL *ibooAuto,CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLoginDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG_LOGIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();

	CButton m_Remmber;
	CButton m_AutoL;
	CEdit m_Name;
	CEdit m_Pass;

	CString *m_strName;
	CString *m_strPass;
	BOOL *m_booAuto;

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();

	CString ConvertCharToHex(CString Data);
	TCHAR hex2int (CString hex);
	CString ConvertHexToData(const CString &sHex);
};
