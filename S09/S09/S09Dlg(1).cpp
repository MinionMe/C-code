
// S09Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "S09.h"
#include "S09Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CS09Dlg �Ի���



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


// CS09Dlg ��Ϣ�������

BOOL CS09Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CS09Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CS09Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void CS09Dlg::OnCbnSelchangeCombo1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}



void CS09Dlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void CS09Dlg::OnBnClickedSum1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData( ); // �ú���������Ĭ��ֵΪTRUE
	result1 = num1 + num2;
	UpdateData(FALSE);
}


void CS09Dlg::OnEnChangeEditNum1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnUpdateEditNum1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// �������Խ� EM_SETEVENTMASK ��Ϣ���͵��ÿؼ���
	// ͬʱ�� ENM_UPDATE ��־�������㵽 lParam �����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnChangeEditNum2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnUpdateEditNum2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// �������Խ� EM_SETEVENTMASK ��Ϣ���͵��ÿؼ���
	// ͬʱ�� ENM_UPDATE ��־�������㵽 lParam �����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnChangeEditNum3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnUpdateEditNum3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// �������Խ� EM_SETEVENTMASK ��Ϣ���͵��ÿؼ���
	// ͬʱ�� ENM_UPDATE ��־�������㵽 lParam �����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnChangeEditNum4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnUpdateEditNum4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// �������Խ� EM_SETEVENTMASK ��Ϣ���͵��ÿؼ���
	// ͬʱ�� ENM_UPDATE ��־�������㵽 lParam �����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnChangeEditNum5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnUpdateEditNum5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// �������Խ� EM_SETEVENTMASK ��Ϣ���͵��ÿؼ���
	// ͬʱ�� ENM_UPDATE ��־�������㵽 lParam �����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnChangeEditNum6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnBnClickedSum2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData( ); // �ú���������Ĭ��ֵΪTRUE
	result2 = num3 - num4;
	UpdateData(FALSE);
}


void CS09Dlg::OnBnClickedSum3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData( ); // �ú���������Ĭ��ֵΪTRUE
	result3 = num5 * num6;
	UpdateData(FALSE);
}


void CS09Dlg::OnBnClickedSum4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������	
	UpdateData( ); // �ú���������Ĭ��ֵΪTRUE
	result4 = num7 / num8;
	UpdateData(FALSE);
}


void CS09Dlg::OnEnUpdateEditNum6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// �������Խ� EM_SETEVENTMASK ��Ϣ���͵��ÿؼ���
	// ͬʱ�� ENM_UPDATE ��־�������㵽 lParam �����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnChangeEditNum7()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnUpdateEditNum7()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// �������Խ� EM_SETEVENTMASK ��Ϣ���͵��ÿؼ���
	// ͬʱ�� ENM_UPDATE ��־�������㵽 lParam �����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnChangeEditNum8()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CS09Dlg::OnEnUpdateEditNum8()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// �������Խ� EM_SETEVENTMASK ��Ϣ���͵��ÿؼ���
	// ͬʱ�� ENM_UPDATE ��־�������㵽 lParam �����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
