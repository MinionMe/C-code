
// S08View.cpp : CS08View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "S08.h"
#endif

#include "S08Doc.h"
#include "S08View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CS08View

IMPLEMENT_DYNCREATE(CS08View, CView)

BEGIN_MESSAGE_MAP(CS08View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CS08View ����/����

CS08View::CS08View()
{
	// TODO: �ڴ˴���ӹ������

}

CS08View::~CS08View()
{
}

BOOL CS08View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CS08View ����

void CS08View::OnDraw(CDC* pDC)
{
	CS08Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	HGDIOBJ oldObj=pDC->SelectObject(GetStockObject(DC_BRUSH));
	COLORREF oldColor=pDC->SetDCBrushColor(RGB(255, 0, 0));
	gb_drawCircle(pDC,pDoc->m_circle,pDoc->m_scale,pDoc->m_translation,pDoc->screenX,pDoc->screenY);
	pDC->SetDCBrushColor(oldColor);
	pDC->SelectObject(oldObj);
	CPen pen(PS_DASHDOT, 1, RGB(255, 255, 0));
	CPen* oldPen = pDC->SelectObject(&pen);
	gb_DrawPoint2D(pDC,pDoc->m_point,pDoc->m_scale,pDoc->m_translation,pDoc->m_gap,pDoc->screenX,pDoc->screenY);
	gb_DrawPoint2D(pDC,pDoc->m_point2,pDoc->m_scale,pDoc->m_translation,pDoc->m_gap,pDoc->screenX,pDoc->screenY);
	pDC->SelectObject(oldPen); 
	oldObj=pDC->SelectObject(GetStockObject(DC_BRUSH));
	oldColor=pDC->SetDCBrushColor(RGB(128, 0, 128));
	gb_drawRectangle(pDC,pDoc->m_rectangle,pDoc->m_scale,pDoc->m_translation,pDoc->screenX,pDoc->screenY);
	pDC->SetDCBrushColor(oldColor);
	pDC->SelectObject(oldObj);
	CString s;
	s.Format(_T("���̣����:)"));
	pDC->TextOut(360, 360, s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CS08View ��ӡ

BOOL CS08View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CS08View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CS08View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CS08View ���

#ifdef _DEBUG
void CS08View::AssertValid() const
{
	CView::AssertValid();
}

void CS08View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CS08Doc* CS08View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CS08Doc)));
	return (CS08Doc*)m_pDocument;
}
#endif //_DEBUG


// CS08View ��Ϣ�������
