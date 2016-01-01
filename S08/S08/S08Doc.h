
// S08Doc.h : CS08Doc 类的接口
//


#pragma once
#include "cp_rectangle.h"
#include "cp_circle2d.h"
#include "cp_point2d.h"


class CS08Doc : public CDocument
{
protected: // 仅从序列化创建
	CS08Doc();
	DECLARE_DYNCREATE(CS08Doc)

// 特性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CS08Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	CP_Rectangle m_rectangle;
	CP_Circle2D m_circle;
	CP_Point2D m_point;
	double m_scale;
	CP_Point2D m_translation;
	CP_Point2D m_point2;
	int screenX;
	int screenY;
	int m_gap;
};
