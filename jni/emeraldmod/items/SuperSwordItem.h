#pragma once

#include "minecraftpe/world/item/Item.h"

class SuperSwordItem : public Item
{
public:
	SuperSwordItem(short id);
	
	virtual int getAttackDamage();
	virtual int getEnchantSlot() const { return 16; }
	virtual int getEnchantValue() const { return 18; };
	virtual bool mineBlock(ItemInstance*, BlockID, int, int, int, Entity*);
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
	virtual float getDestroySpeed(ItemInstance*, const Block*);
	virtual bool canDestroySpecial(const Block*) const;
	virtual bool canDestroyInCreative() const { return false; }
};

