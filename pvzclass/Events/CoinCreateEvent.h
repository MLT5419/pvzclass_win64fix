#pragma once
#include "TemplateEvent.h"

// Coin�����¼�
// �����������¼���Coin
// �޷���ֵ
class CoinCreateEvent : public TemplateEvent<std::function<
	void(std::shared_ptr<PVZ::Coin>)>>
{
public:
	CoinCreateEvent();
	void handle(CONTEXT& context) override;
};

CoinCreateEvent::CoinCreateEvent()
{
	address = 0x40CCCE;
}

void CoinCreateEvent::handle(CONTEXT& context)
{
	auto coin = std::make_shared<PVZ::Coin>(context.Eax);
	for (int i = 0; i < listeners.size(); i++)
	{
		listeners[i](coin);
	}
}