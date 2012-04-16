//
// SubmitButton.cpp
//
// $Id: //poco/Main/WebWidgets/src/SubmitButton.cpp#1 $
//
// Library: WebWidgets
// Package: Controls
// Module:  SubmitButton
//
// Copyright (c) 2008, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/WebWidgets/SubmitButton.h"
#include "Poco/WebWidgets/SubmitButtonCell.h"


namespace Poco {
namespace WebWidgets {


SubmitButton::SubmitButton(const std::string& name, const std::type_info& type, Cell::Ptr ptrCell):
	Button(name, type, ptrCell)
{
}


SubmitButton::SubmitButton(const char* pName, const std::type_info& type, Cell::Ptr ptrCell):
	Button(std::string(pName), type, ptrCell)
{
}


SubmitButton::SubmitButton(const std::type_info& type, Cell::Ptr ptrCell):
	Button(type, ptrCell)
{
}


SubmitButton::SubmitButton(const std::string& name, const std::type_info& type):
	Button(name, type, new SubmitButtonCell(this))
{
}


SubmitButton::SubmitButton(const char* pName, const std::type_info& type):
	Button(std::string(pName), type, new SubmitButtonCell(this))
{
}


SubmitButton::SubmitButton(const std::type_info& type):
	Button(type, new SubmitButtonCell(this))
{
}


SubmitButton::SubmitButton(const std::string& name, const std::string& lblTxt):
	Button(name, typeid(SubmitButton), new SubmitButtonCell(this))
{
	setText(lblTxt);
}


SubmitButton::SubmitButton(const char* pName, const char* pLblTxt):
	Button(std::string(pName), typeid(SubmitButton), new SubmitButtonCell(this))
{
	setText(std::string(pLblTxt));
}


SubmitButton::SubmitButton(const std::string& name):
	Button(name, typeid(SubmitButton), new SubmitButtonCell(this))
{
}


SubmitButton::SubmitButton(const char* pName):
	Button(std::string(pName), typeid(SubmitButton), new SubmitButtonCell(this))
{
}


SubmitButton::SubmitButton():
	Button(typeid(SubmitButton), new SubmitButtonCell(this))
{
}


SubmitButton::~SubmitButton()
{
}


} } // namespace Poco::WebWidgets