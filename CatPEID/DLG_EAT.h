#pragma once
#include "afxcmn.h"
// DLG_Eat 对话框

class DLG_Eat : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_Eat)

public:
	DLG_Eat(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_Eat();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EAT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CTreeCtrl m_Tree_Eat;
};
