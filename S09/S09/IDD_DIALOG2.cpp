// IDD_DIALOG2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "S09.h"
#include "IDD_DIALOG2.h"
#include "afxdialogex.h"


// IDD_DIALOG2 �Ի���

IMPLEMENT_DYNAMIC(IDD_DIALOG2, CDialogEx)

IDD_DIALOG2::IDD_DIALOG2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2::IDD, pParent)
{

}

IDD_DIALOG2::~IDD_DIALOG2()
{
}

void IDD_DIALOG2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}
void dialoge()
{
	IDD_DIALOG2 dlg;   // �Ի��������
	dlg.DoModal();  
}

BEGIN_MESSAGE_MAP(IDD_DIALOG2, CDialogEx)
END_MESSAGE_MAP()


// IDD_DIALOG2 ��Ϣ�������
