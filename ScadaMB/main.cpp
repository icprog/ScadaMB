#include <iostream>
#include "Socket.h"
#include "ReadCoilsMessage.h"
#include "ModbusDriverTCP.h"
#include "ReadHoldingRegistersMessage.h"
#include "ReadInputRegistersMessage.h"
#include "WriteSingleCoilMessage.h"
#include "WriteSingleRegisterMessage.h"
#include "ReadHoldingRegistersMessage.h"
#include "ScadaConfig.h"

int main()
{
	
	SOCKET socket = Socket::Instance()->Connect("127.0.0.1", 502);

	
	/*Header h;
	h.transactionIdentifier = htons(0x0001);
	h.protocolIdentifier = htons(0x0000);
	h.length = htons(0x0007);
	h.unitIdentifier = 0x01;
	msg->SetHeader(h);
	msg->SetFunctionCode(ModbusMessageTypes::READ_COILS);
	msg->SetStartingAddress(htons(0x0001));
	msg->setQuantityOfCoils(htons(0x0010));
	msg->SetMessageLength(12);*/
	
	/*
	ReadCoilsMessage* msg = new ReadCoilsMessage(6, 1, 10);
	ReadCoilsMessage readCoilsMsg = *(ReadCoilsMessage*)ModbusDriverTCP().SendModbusMessage(socket, (ModbusMessageTCP*)msg);;

	ReadInputRegistersMessage* msgHolding = new ReadInputRegistersMessage(6, 30018, 4);
	ReadInputRegistersMessage response = *(ReadInputRegistersMessage*)ModbusDriverTCP().SendModbusMessage(socket, (ModbusMessageTCP*)msgHolding);
	
	WriteSingleCoilMessage* testWrite = new WriteSingleCoilMessage(1, 0);
	WriteSingleCoilMessage retWrite = *(WriteSingleCoilMessage*)ModbusDriverTCP().SendModbusMessage(socket, (ModbusMessageTCP*)testWrite);

	WriteSingleRegisterMessage* testSingleReg = new WriteSingleRegisterMessage(40001, 25);
	WriteSingleCoilMessage response = *(WriteSingleCoilMessage*)ModbusDriverTCP().SendModbusMessage(socket, (ModbusMessageTCP*)testSingleReg);

	ReadHoldingRegistersMessage* readHolding = new ReadHoldingRegistersMessage(40001, 3);
	ReadHoldingRegistersMessage resp = *(ReadHoldingRegistersMessage*)ModbusDriverTCP().SendModbusMessage(socket, readHolding);
	*/

	ScadaConfig().LoadScadaParams(NULL);

	closesocket(socket);

	system("pause");
	return 0;
}