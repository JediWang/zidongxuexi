
// zidongxuexiDlg.h : ͷ�ļ�
//

#pragma once
#include "CWebbrowser2.h"

// CzidongxuexiDlg �Ի���
class CzidongxuexiDlg : public CDialogEx
{
// ����
public:
	CzidongxuexiDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ZIDONGXUEXI_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	


	CWebBrowser2 m_webbro;

public:

	DECLARE_MESSAGE_MAP()
	//DECLARE_EVENTSINK_MAP()
	void DocumentCompleteExplorer();

	CString m_Name;
	CString m_Password;
	
};
