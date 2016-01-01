
// S09Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "S09.h"
#include "S09Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CS09Dlg 对话框



CS09Dlg::CS09Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CS09Dlg::IDD, pParent)
	, num1(0)
	, num2(0)
	, num3(0)
	, num4(0)
	, num5(0)
	, num6(0)
	, num7(0)
	, num8(0)
	, result1(0)
	, result2(0)
	, result3(0)
	, result4(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CS09Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_NUM1, num1);
	DDX_Text(pDX, IDC_EDIT_NUM2, num2);
	DDX_Text(pDX, IDC_EDIT_NUM3, num3);
	DDX_Text(pDX, IDC_EDIT_NUM4, num4);
	DDX_Text(pDX, IDC_EDIT_NUM5, num5);
	DDX_Text(pDX, IDC_EDIT_NUM6, num6);
	DDX_Text(pDX, IDC_EDIT_NUM7, num7);
	DDX_Text(pDX, IDC_EDIT_NUM8, num8);
	DDX_Text(pDX, IDC_EDIT_RESULT1, result1);
	DDX_Text(pDX, IDC_EDIT_RESULT2, result2);
	DDX_Text(pDX, IDC_EDIT_RESULT3, result3);
	DDX_Text(pDX, IDC_EDIT_RESULT4, result4);
}

BEGIN_MESSAGE_MAP(CS09Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_SUM1, &CS09Dlg::OnBnClickedSum1)
	ON_EN_CHANGE(IDC_EDIT_NUM1, &CS09Dlg::OnEnChangeEditNum1)
	ON_EN_UPDATE(IDC_EDIT_NUM1, &CS09Dlg::OnEnUpdateEditNum1)
	ON_EN_CHANGE(IDC_EDIT_NUM2, &CS09Dlg::OnEnChangeEditNum2)
	ON_EN_UPDATE(IDC_EDIT_NUM2, &CS09Dlg::OnEnUpdateEditNum2)
	ON_EN_CHANGE(IDC_EDIT_NUM3, &CS09Dlg::OnEnChangeEditNum3)
	ON_EN_UPDATE(IDC_EDIT_NUM3, &CS09Dlg::OnEnUpdateEditNum3)
	ON_EN_CHANGE(IDC_EDIT_NUM4, &CS09Dlg::OnEnChangeEditNum4)
	ON_EN_UPDATE(IDC_EDIT_NUM4, &CS09Dlg::OnEnUpdateEditNum4)
	ON_EN_CHANGE(IDC_EDIT_NUM5, &CS09Dlg::OnEnChangeEditNum5)
	ON_EN_UPDATE(IDC_EDIT_NUM5, &CS09Dlg::OnEnUpdateEditNum5)
	ON_EN_CHANGE(IDC_EDIT_NUM6, &CS09Dlg::OnEnChangeEditNum6)
	ON_BN_CLICKED(IDC_SUM2, &CS09Dlg::OnBnClickedSum2)
	ON_BN_CLICKED(IDC_SUM3, &CS09Dlg::OnBnClickedSum3)
	ON_BN_CLICKED(IDC_SUM4, &CS09Dlg::OnBnClickedSum4)
	ON_EN_UPDATE(IDC_EDIT_NUM6, &CS09Dlg::OnEnUpdateEditNum6)
	ON_EN_CHANGE(IDC_EDIT_NUM7, &CS09Dlg::OnEnChangeEditNum7)
	ON_EN_UPDATE(IDC_EDIT_NUM7, &CS09Dlg::OnEnUpdateEditNum7)
	ON_EN_CHANGE(IDC_EDIT_NUM8, &CS09Dlg::OnEnChangeEditNum8)
	ON_EN_UPDATE(IDC_EDIT_NUM8, &CS09Dlg::OnEnUpdateEditNum8)
END_MESSAGE_MAP()


// CS09Dlg 消息处理程序

BOOL CS09Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CS09Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CS09Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void CS09Dlg::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
}



void CS09Dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void CS09Dlg::OnBnClickedSum1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData( ); // 该函数参数的默认值为TRUE
	result1 = num1 + num2;
	UpdateData(FALSE);
}


void CS09Dlg::OnEnChangeEditNum1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnUpdateEditNum1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数，以将 EM_SETEVENTMASK 消息发送到该控件，
	// 同时将 ENM_UPDATE 标志“或”运算到 lParam 掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnChangeEditNum2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnUpdateEditNum2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数，以将 EM_SETEVENTMASK 消息发送到该控件，
	// 同时将 ENM_UPDATE 标志“或”运算到 lParam 掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnChangeEditNum3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnUpdateEditNum3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数，以将 EM_SETEVENTMASK 消息发送到该控件，
	// 同时将 ENM_UPDATE 标志“或”运算到 lParam 掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnChangeEditNum4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnUpdateEditNum4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数，以将 EM_SETEVENTMASK 消息发送到该控件，
	// 同时将 ENM_UPDATE 标志“或”运算到 lParam 掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnChangeEditNum5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnUpdateEditNum5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数，以将 EM_SETEVENTMASK 消息发送到该控件，
	// 同时将 ENM_UPDATE 标志“或”运算到 lParam 掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnChangeEditNum6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnBnClickedSum2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData( ); // 该函数参数的默认值为TRUE
	result2 = num3 - num4;
	UpdateData(FALSE);
}


void CS09Dlg::OnBnClickedSum3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData( ); // 该函数参数的默认值为TRUE
	result3 = num5 * num6;
	UpdateData(FALSE);
}


void CS09Dlg::OnBnClickedSum4()
{
	// TODO: 在此添加控件通知处理程序代码	
	UpdateData( ); // 该函数参数的默认值为TRUE
	result4 = num7 / num8;
	UpdateData(FALSE);
}


void CS09Dlg::OnEnUpdateEditNum6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数，以将 EM_SETEVENTMASK 消息发送到该控件，
	// 同时将 ENM_UPDATE 标志“或”运算到 lParam 掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnChangeEditNum7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnUpdateEditNum7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数，以将 EM_SETEVENTMASK 消息发送到该控件，
	// 同时将 ENM_UPDATE 标志“或”运算到 lParam 掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnChangeEditNum8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CS09Dlg::OnEnUpdateEditNum8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数，以将 EM_SETEVENTMASK 消息发送到该控件，
	// 同时将 ENM_UPDATE 标志“或”运算到 lParam 掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
