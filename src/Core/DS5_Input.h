/*
	DS5_Input.h is part of DualSenseWindows
	https://github.com/Ohjurot/DualSense-Windows

	Contributors of this file:
	11.2020 Ludwig F�chsl

	Licensed under the MIT License (To be found in repository root directory)
*/
#pragma once

#include <Core/DSW_Api.h>
#include <Core/Device.h>
#include <Core/DS5State.h>

#include <Windows.h>

namespace __DS5W {
	namespace Input {
		/// <summary>
		/// Interprete the hid returned buffer 
		/// </summary>
		/// <param name="hidInBuffer">Input buffer</param>
		/// <param name="ptrInputState">Input state to be set</param>
		/// <returns></returns>
		void evaluateHidInputBuffer(unsigned char* hidInBuffer, DS5W::DS5InputState* ptrInputState);
	}
}