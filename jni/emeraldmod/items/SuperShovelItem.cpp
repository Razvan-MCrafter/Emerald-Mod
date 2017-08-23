#include "SuperShovelItem.h"
#include "minecraftpe/world/item/ItemInstance.h"
#include "minecraftpe/world/entity/Mob.h"
#include "minecraftpe/world/block/Block.h"

SuperShovelItem::SuperShovelItem(const std::string &name, short id) : Item(name, id)
{
	setCategory(CreativeItemCategory::TOOLS);
	setMaxStackSize(1);
	setMaxDamage(2600);
	setHandEquipped();
}

bool SuperShovelItem::_useOn(ItemInstance &item, Entity &entity, BlockPos pos, signed char side, float xx, float yy, float zz, ItemUseCallback *callback) const
{	
	return Item::mItems[277]->_useOn(item, entity, pos, side, xx, yy, zz, callback);
}

void SuperShovelItem::hurtEnemy(ItemInstance &item, Mob*, Mob *victim) const
{
	item.hurtAndBreak(2, victim);
}

bool SuperShovelItem::mineBlock(ItemInstance &item, BlockID, int, int, int, Entity *entity) const
{
	item.hurtAndBreak(1, entity);
}

bool SuperShovelItem::canDestroySpecial(const Block &block) const
{
	return Item::mItems[277]->canDestroySpecial(block);
}

float SuperShovelItem::getDestroySpeed(ItemInstance&, const Block &block) const
{
	return block.getMaterial() == Material::getMaterial(MaterialType::DIRT) ? 80.0f : 1.0f;
}

