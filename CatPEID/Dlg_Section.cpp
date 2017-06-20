// Dlg_Section.cpp : 实现文件
//

#include "stdafx.h"
#include "CatPEID.h"
#include "Dlg_Section.h"
#include "afxdialogex.h"


// Dlg_Section 对话框

IMPLEMENT_DYNAMIC(DLG_Section, CDialogEx)

DLG_Section::DLG_Section(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SECTION, pParent)
{

}

DLG_Section::~DLG_Section()
{
}

void DLG_Section::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_List_Section);
}


BEGIN_MESSAGE_MAP(DLG_Section, CDialogEx)
	ON_WM_ERASEBKGND()
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Dlg_Section 消息处理程序


BOOL DLG_Section::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


BOOL DLG_Section::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	return CDialogEx::OnEraseBkgnd(pDC);
}


void DLG_Section::OnPaint()
{
	CPaintDC dc(this); // 用于绘制的设备上下文
}
