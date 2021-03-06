#pragma once

#include "minecraftpe/world/item/BlockItem.h"
#include "minecraftpe/world/block/Block.h"
#include "minecraftpe/world/block/BlockGraphics.h"

class Emerald
{
public:
	static void registerItems();
	static void setItemTextures();
	static void registerBlocks();
	static void registerBlockItems();
	static void initBlockGraphics();
	static void addCreativeItems();
	static void addCreativeBlocks();
	
	static Item* mHelmet;
	static Item* mChestplate;
	static Item* mLeggings;
	static Item* mBoots;
	static Item* mSword;
	static Item* mSuperSword;
	static Item* mPickaxe;
	static Item* mSuperPickaxe;
	static Item* mAxe;
	static Item* mSuperAxe;
	static Item* mShovel;
	static Item* mSuperShovel;
	static Item* mHoe;
	static Item* mSuperHoe;
	static Item* mPax;
	static Item* mFlintAndEmerald;
	static Item* mSpear;
	static Item* mBattleAxe;
	static Item* mStick;
	static Item* mNugget;
	static Item* mApple;
	
	static Block* mPlanks;
	static Block* mBrick;
	static Block* mFence;
	static Block* mSlab;
	static Block* mMushroom;
};

