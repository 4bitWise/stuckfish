#pragma once

#include <memory.h>

namespace Stuckfish
{
	const float confirmButtonSizeX = 200.0f;
	const float confirmButtonSizeY = 35.0f;
	const float popupConfirmButtonSizeX = 50.0f;
	const float popupConfirmButtonSizeY = 0.0f;

	const float roundingValue = 5.0f;

	const float inputFieldWidth = 400;

	enum class WindowTitle
	{
		USERINFO_PAGE,
		LOADING_PAGE,
		ERROR_POPUP
	};

	enum class Buttons
	{
		CONFIRM,
		OK
	};

	enum class Errors
	{
		EMPTY_USERNAME,
		INVALID_USERNAME
	};

	inline const char* WindowTitlesToString(WindowTitle t) {
		switch (t) {
			case WindowTitle::USERINFO_PAGE:	return "User Info Page";
			case WindowTitle::LOADING_PAGE:		return "Loading Page";
			case WindowTitle::ERROR_POPUP:		return "Error Popup";
			default:							return "[Unknown Page]";
		}
	}

	inline const char* ButtonsToString(Buttons b) {
		switch (b) {
			case Buttons::CONFIRM:   return "Confirm";
			case Buttons::OK:		 return "OK";
			default:			     return "[Unknown Button]";
		}
	}

	inline const char* ErrorsToString(Errors e) {
		switch (e) {
			case Errors::EMPTY_USERNAME:   return "Empty username.";
			case Errors::INVALID_USERNAME: return "Apple";
			default:					   return "[Unknown Error]";
		}
	}

	class Page
	{
	public:
		virtual ~Page() = default;
		virtual void OnUpdate() = 0;
		virtual void OnUIRender() = 0;

	public:
		bool _errorOccured = false;
		std::string _errorMessage = "";
	};
}