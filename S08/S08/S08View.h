
// S08View.h : CS08View ��Ľӿ�
//

#pragma once


class CS08View : public CView
{
protected: // �������л�����
	CS08View();
	DECLARE_DYNCREATE(CS08View)

// ����
public:
	CS08Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CS08View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // S08View.cpp �еĵ��԰汾
inline CS08Doc* CS08View::GetDocument() const
   { return reinterpret_cast<CS08Doc*>(m_pDocument); }
#endif

