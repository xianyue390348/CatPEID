#pragma once
#include "afxcmn.h"


// Dlg_Section 对话框

class DLG_Section : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_Section)

public:
	DLG_Section(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_Section();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SECTION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_List_Section;
	virtual BOOL OnInitDialog();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
};
