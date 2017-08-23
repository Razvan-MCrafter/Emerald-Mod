#pragma once

#include "minecraftpe/world/item/Item.h"

class SuperHoeItem : public Item
{
public:
	SuperHoeItem(const std::string &name, short id);
	
	virtual int getAttackDamage() const { return 9; }
	virtual bool _useOn(ItemInstance&, Entity&, BlockPos, signed char, float, float, float, ItemUseCallback*) const;
	virtual void hurtEnemy(ItemInstance&, Mob*, Mob*) const;
	virtual bool mineBlock(ItemInstance&, BlockID, int, int, int, Entity*) const;
};

