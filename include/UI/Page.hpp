/******************************************************************************
 * File:        Page.hpp
 * Authors:     see AUTHORS file
 * Date:        May 3, 2024
 * Description: Page was meant to be an interface for other pages...
 *****************************************************************************/

#pragma once

#include "../App/Logic.hpp"
#include <memory.h>

namespace Stuckfish
{
	class Core;
}

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
		GAMESPLAYED_PAGE,
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
		USERNAME_NOT_FOUND
	};

	inline const char* WindowTitlesToString(WindowTitle t) {
		switch (t) {
			case WindowTitle::USERINFO_PAGE:	return "User Info Page";
			case WindowTitle::LOADING_PAGE:		return "Loading Page";
			case WindowTitle::GAMESPLAYED_PAGE: return "Games Played Page";
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
			case Errors::USERNAME_NOT_FOUND: return "Cannot find the username on Chess.com";
			default:					   return "[Unknown Error]";
		}
	}
}