// IDD_DIALOG1.cpp : 实现文件
//

#include "stdafx.h"
#include "S09.h"
#include "IDD_DIALOG1.h"
#include "afxdialogex.h"


// IDD_DIALOG1 对话框

IMPLEMENT_DYNAMIC(IDD_DIALOG1, CDialogEx)

IDD_DIALOG1::IDD_DIALOG1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1::IDD, pParent)
{

}

IDD_DIALOG1::~IDD_DIALOG1()
{
}

void IDD_DIALOG1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(IDD_DIALOG1, CDialogEx)
END_MESSAGE_MAP()


// IDD_DIALOG1 消息处理程序
