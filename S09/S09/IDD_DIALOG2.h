#pragma once

// IDD_DIALOG2 �Ի���

class IDD_DIALOG2 : public CDialogEx
{
	DECLARE_DYNAMIC(IDD_DIALOG2)

public:
	IDD_DIALOG2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~IDD_DIALOG2();
	friend void dialoge();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
