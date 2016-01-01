
// S08View.cpp : CS08View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CS08View 构造/析构

CS08View::CS08View()
{
	// TODO: 在此处添加构造代码

}

CS08View::~CS08View()
{
}

BOOL CS08View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CS08View 绘制

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
	s.Format(_T("助教，你好:)"));
	pDC->TextOut(360, 360, s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CS08View 打印

BOOL CS08View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CS08View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CS08View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CS08View 诊断

#ifdef _DEBUG
void CS08View::AssertValid() const
{
	CView::AssertValid();
}

void CS08View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CS08Doc* CS08View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CS08Doc)));
	return (CS08Doc*)m_pDocument;
}
#endif //_DEBUG


// CS08View 消息处理程序
