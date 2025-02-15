/**
 * @file NexSlider.cpp
 *
 * The implementation of class NexSlider. 
 *
 * @author  Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date    2015/8/13
 * @author Jyrki Berg 2/17/2019 (https://github.com/jyberg)
 * 
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 * 
 * @copyright 2020 Jyrki Berg
 **/
#include "NexSlider.h"
#include "NexHardware.h"

NexSlider::NexSlider(Nextion *nextion, uint8_t pid, uint8_t cid, const char *name, const NexObject* page)
    :NexTouch(nextion, pid, cid, name, page)
{
}

bool NexSlider::getValue(uint32_t *number)
{
    String cmd = String("get ");
    getObjGlobalPageName(cmd);
    cmd += ".val";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::setValue(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".val=";
    cmd += buf;

    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

bool NexSlider::Get_background_color_bco(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".bco";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::Get_background_color_bco1(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".bco1";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::Set_background_color_bco(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".bco=";
    cmd += buf;
    sendCommand(cmd.c_str());

    return recvRetCommandFinished();
}

bool NexSlider::Set_background_color_bco1(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".bco1=";
    cmd += buf;
    sendCommand(cmd.c_str());

    return recvRetCommandFinished();
}

bool NexSlider::Get_font_color_pco(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".pco";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::Set_font_color_pco(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".pco=";
    cmd += buf;
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

bool NexSlider::Get_pointer_thickness_wid(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".wid";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::Set_pointer_thickness_wid(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".wid=";
    cmd += buf;
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

bool NexSlider::Get_cursor_height_hig(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".hig";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::Set_cursor_height_hig(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".hig=";
    cmd += buf;
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

bool NexSlider::getMaxval(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".maxval";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::setMaxval(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".maxval=";
    cmd += buf;
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

bool NexSlider::getMinval(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".minval";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::setMinval(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".minval=";
    cmd += buf;
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

bool NexSlider::Get_background_image_pic(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".pic";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::Set_background_image_pic(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".pic=";
    cmd += buf;
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

bool NexSlider::Get_background_image_picc(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    getObjGlobalPageName(cmd);
    cmd += ".picc";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

bool NexSlider::Set_background_image_picc(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    utoa(number, buf, 10);
    getObjGlobalPageName(cmd);
    cmd += ".picc=";
    cmd += buf;
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}
