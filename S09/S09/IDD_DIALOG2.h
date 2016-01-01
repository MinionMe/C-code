#pragma once

// IDD_DIALOG2 对话框

class IDD_DIALOG2 : public CDialogEx
{
	DECLARE_DYNAMIC(IDD_DIALOG2)

public:
	IDD_DIALOG2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~IDD_DIALOG2();
	friend void dialoge();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
