
// S09Dlg.h : 头文件
//

#pragma once


// CS09Dlg 对话框
class CS09Dlg : public CDialogEx
{
// 构造
public:
	CS09Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_S09_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
