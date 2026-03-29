#pragma once
#include "pch.h"

inline winrt::hstring getJsonFilePath();
winrt::hstring expenv(const winrt::hstring &raw);

struct PROCESS_INFORMATIONauto
{
	PROCESS_INFORMATIONauto(const PROCESS_INFORMATION procinfo);
	~PROCESS_INFORMATIONauto();

	const PROCESS_INFORMATION data;
};