#pragma once

#include "Table.h"

const DWORD		DBO_MAX_FORMULA_RATE_COUNT = 4;
const DWORD		DBO_MAX_FORMULA_IDX = 1000;

#pragma pack(push, 4)
struct sFORMULA_TBLDAT : public sTBLDAT
{
public:
	bool			bValidity_Able;
	float			afRate[4];

protected:

	virtual int GetDataSize()
	{
		return sizeof(*this) - sizeof(void*);
	}
};
#pragma pack(pop)

class FormulaTable : public Table
{
public:
	FormulaTable(void);
	virtual ~FormulaTable(void);

	bool Create(DWORD dwCodePage);
	void Destroy();

	sTBLDAT* FindData(TBLIDX tblidx);

	virtual bool LoadFromBinary(Serializer& serializer, bool bReload);
	virtual bool SaveToBinary(Serializer& serializer);

protected:
	void Init();

	WCHAR** GetSheetListInWChar() { return &(FormulaTable::m_pwszSheetList[0]); }
	void* AllocNewTable(WCHAR* pwszSheetName, DWORD dwCodePage);
	bool DeallocNewTable(void* pvTable, WCHAR* pwszSheetName);
	bool AddTable(void * pvTable, bool bReload);
	bool SetTableData(void* pvTable, WCHAR* pwszSheetName, std::wstring* pstrDataName, BSTR bstrData);

	// WARNING :
	// The value of 'm' in the variable 'afRate[m][n]' means tblidx.
	// For example, if you want to get data whose tblidx is 6, you must use 'm_afRate[6]' instead of 'm_afRate[5]'.
	// The value of 'n' in the variable 'afRate[m][n]' means an index.
	// For example, if you want to get value of 'fRate2', you must use 'm_afRate[m][2]' instead of 'm_afRate[m][1]'.
	// m_afRate[m][n]에서의 m은 tblidx를 뜻합니다.
	// 예를 들어, tblidx가 6인 공식 데이타를 얻을 때에는 m_afRate[5]가 아닌 m_afRate[6]을 사용해야 합니다.
	// m_afRate[m][n]에서의 n은 인덱스를 뜻합니다.
	// 예를 들어, fRate2의 값을 얻을 때에는 m_afRate[m][1]이 아닌 m_afRate[m][2]를 사용해야 합니다.
	// by YOSHIKI(2009-07-13)
	static float m_afRate[DBO_MAX_FORMULA_IDX + 1][DBO_MAX_FORMULA_RATE_COUNT + 1];

private:
	static WCHAR* m_pwszSheetList[];
};