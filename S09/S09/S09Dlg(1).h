
// S09Dlg.h : ͷ�ļ�
//

#pragma once


// CS09Dlg �Ի���
class CS09Dlg : public CDialogEx
{
// ����
public:
	CS09Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_S09_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedOk();
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int result1;
	int result2;
	int result3;
	int result4;
	afx_msg void OnBnClickedSum1();
	afx_msg void OnBnClickedSum2();
	afx_msg void OnBnClickedSum3();
	afx_msg void OnBnClickedSum4();
	afx_msg void OnEnChangeEditNum1();
	afx_msg void OnEnUpdateEditNum1();
	afx_msg void OnEnChangeEditNum2();
	afx_msg void OnEnUpdateEditNum2();
	afx_msg void OnEnChangeEditNum3();
	afx_msg void OnEnUpdateEditNum3();
	afx_msg void OnEnChangeEditNum4();
	afx_msg void OnEnUpdateEditNum4();
	afx_msg void OnEnChangeEditNum5();
	afx_msg void OnEnUpdateEditNum5();
	afx_msg void OnEnChangeEditNum6();
	afx_msg void OnEnUpdateEditNum6();
	afx_msg void OnEnChangeEditNum7();
	afx_msg void OnEnUpdateEditNum7();
	afx_msg void OnEnChangeEditNum8();
	afx_msg void OnEnUpdateEditNum8();
};
