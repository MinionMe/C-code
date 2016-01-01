
// S08View.h : CS08View 类的接口
//

#pragma once


class CS08View : public CView
{
protected: // 仅从序列化创建
	CS08View();
	DECLARE_DYNCREATE(CS08View)

// 特性
public:
	CS08Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CS08View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // S08View.cpp 中的调试版本
inline CS08Doc* CS08View::GetDocument() const
   { return reinterpret_cast<CS08Doc*>(m_pDocument); }
#endif

