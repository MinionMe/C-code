
// S08Doc.h : CS08Doc ��Ľӿ�
//


#pragma once
#include "cp_rectangle.h"
#include "cp_circle2d.h"
#include "cp_point2d.h"


class CS08Doc : public CDocument
{
protected: // �������л�����
	CS08Doc();
	DECLARE_DYNCREATE(CS08Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CS08Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
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
