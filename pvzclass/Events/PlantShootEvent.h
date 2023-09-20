#pragma once
#include "TemplateEvent.h"

// ֲ������¼�
// �����������¼���ֲ��
// �޷���ֵ
class PlantShootEvent : public TemplateEvent<std::function<
	void(std::shared_ptr<PVZ::Plant>)>>
{
public:
	PlantShootEvent();
	void handle(CONTEXT& context) override;
};

PlantShootEvent::PlantShootEvent()
{
	address = 0x466E0D;
}

void PlantShootEvent::handle(CONTEXT& context)
{
	auto plant = std::make_shared<PVZ::Plant>(context.Ebp);
	for (int i = 0; i < listeners.size(); i++)
	{
		listeners[i](plant);
	}
}