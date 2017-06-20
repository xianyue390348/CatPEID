#pragma once
#include "afxcmn.h"


// DLG_IAT 对话框

class DLG_IAT : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_IAT)

public:
	DLG_IAT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_IAT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IAT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CTreeCtrl m_Tree_Iat;
};
