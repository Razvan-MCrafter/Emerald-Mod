#pragma once

#include "Block.h"
class TextureUVCoordinateSet;
class BlockPos;
class BlockSource;
class Material;
class Entity;
class Mob;
class Player;
class Random;
class Vec3;

class SlabBlock : public Block {
public:
	/* Copy Constructor */
	SlabBlock(const std::string&, int, const std::string&, bool, const Material&);

	/* Virtual Functions */
	virtual ~SlabBlock();
	virtual bool canBeSilkTouched() const;
	virtual bool checkIsPathable(Entity&, const BlockPos&, const BlockPos&);
	virtual int getPlacementDataValue(Mob&, const BlockPos&, signed char, const Vec3&, int);
	virtual void getRedstoneProperty(BlockSource&, const BlockPos&);
	virtual int getResourceCount(Random&, int, int);
	virtual const AABB& getVisualShape(unsigned char, AABB&, bool);
	//virtual bool isBottomSlab(BlockSource&, const BlockPos&);
	virtual bool isBottomSlab(int);
	virtual bool isObstructingChests(BlockSource&, const BlockPos&);
	virtual bool shouldRenderFace(BlockSource&, const BlockPos&, signed char, const AABB&) const;
};