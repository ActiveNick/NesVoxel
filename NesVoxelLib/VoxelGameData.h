#pragma once

#include <vector>
#include "VoxelUtil.h"

const int spriteWidth = 8;
const int spriteHeight = 8;
const int spriteDepth = 32;

enum VoxelSide { left, right, top, bottom, front, back };

struct Voxel {
	int color;
	bool smooth;
};

class VoxelSprite {
public:
	Voxel voxels[2048];
	int zPosition;
	bool matchUp;
	bool matchDown;
	bool matchLeft;
	bool matchRight;
	VoxelMesh *mesh;
	void addVoxel(int, int, int);
	void deleteVoxel(int, int, int);
	void buildMesh();
private:
	int getVoxel(int, int, int);
	void buildSide(std::vector<ColorVertex>& vertices, int x, int y, int z, int color, VoxelSide side);
};

class VoxelGameData {
public:
	int ppuBankSize;
	int totalSprites;
	std::vector<VoxelSprite> sprites;
private:
};