
// kr1_gembitskayaDoc.h : интерфейс класса Ckr1_gembitskayaDoc
//


#pragma once


class Ckr1_gembitskayaDoc : public CDocument
{
protected: // создать только из сериализации
	Ckr1_gembitskayaDoc();
	DECLARE_DYNCREATE(Ckr1_gembitskayaDoc)

// јтрибуты
public:

// ќперации
public:

// ѕереопределение
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// –еализаци€
public:
	virtual ~Ckr1_gembitskayaDoc();
	//ма€€€€€€€€€у
	CString StringData;

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// —озданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ¬спомогательна€ функци€, задающа€ содержимое поиска дл€ обработчика поиска
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS

	


};
