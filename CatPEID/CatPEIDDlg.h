
// CatPEIDDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include "Dlg_Section.h"
#include "DLG_IAT.h"
#include "DLG_EAT.h"

// CCatPEIDDlg 对话框
class CCatPEIDDlg : public CDialogEx
{
// 构造
public:
	CCatPEIDDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CATPEID_DIALOG };
#endif

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
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDropFiles(HDROP hDropInfo);
	CString m_EditStrFilePath;
	afx_msg void OnBnClickedButton1();
	void OnFileGet(CString Path);
	CString m_EditStrLog;
	void AppendLog(CString Text);
	void AppendLog(LPSTR Text);
	CTabCtrl m_Tab;

	DLG_Section m_Dlg_Section;
	DLG_IAT m_Dlg_Iat;
	DLG_Eat m_Dlg_Eat;
	afx_msg void OnTcnSelchangeTab2(NMHDR *pNMHDR, LRESULT *pResult);
	DWORD RAV2RAW(DWORD Rav);
};
