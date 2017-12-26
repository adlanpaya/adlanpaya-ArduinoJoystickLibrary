/*
  HidReportDescriptorBuilder.h

  Copyright (c) 2017, Matthew Heironimus

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef HID_REPORT_DESCRIPTOR_BUILDER_h
#define HID_REPORT_DESCRIPTOR_BUILDER_h

#include "JoystickConstants.h"

class HidReportDescriptorBuilder 
{
public:
    uint8_t hidReportId = JOYSTICK_DEFAULT_REPORT_ID;
    uint8_t joystickType = JOYSTICK_TYPE_JOYSTICK;
    uint8_t buttonCount = JOYSTICK_DEFAULT_BUTTON_COUNT;
    uint8_t hatSwitchCount = JOYSTICK_DEFAULT_HATSWITCH_COUNT;

    bool includeXAxis = true;
    bool includeYAxis = true;
    bool includeZAxis = true;
    bool includeRxAxis = true;
    bool includeRyAxis = true;
    bool includeRzAxis = true;

    bool includeRudder = true;
    bool includeThrottle = true;

    bool includeAccelerator = true;
    bool includeBrake = true;
    bool includeSteering = true;

    uint8_t * build();
};

#endif // HID_REPORT_DESCRIPTOR_BUILDER_h
