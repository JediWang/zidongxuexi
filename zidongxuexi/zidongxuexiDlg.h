
// zidongxuexiDlg.h : 头文件
//

#pragma once
#include "CWebbrowser2.h"

// CzidongxuexiDlg 对话框
class CzidongxuexiDlg : public CDialogEx
{
// 构造
public:
	CzidongxuexiDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_ZIDONGXUEXI_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
