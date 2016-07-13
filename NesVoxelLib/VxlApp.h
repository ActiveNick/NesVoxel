#pragma once

#include "VxlUtil.h"
#include "VxlGameData.h"
#include "VxlPPUSnapshot.h"
#include "NesEmulator.h"
#include "VxlD3DContext.h"
#include "VxlCamera.h"
#include "libretro.h"
#include "VxlInput.h"
#include "VxlPatternTable.h"
#include <memory>

class VxlApp {
public:
	VxlApp();
	void assignD3DContext(VxlD3DContext);
	void load();
	void update();
	void render();
	XMVECTORF32 getBackgroundColor();
	retro_game_info *info;
	VxlCamera camera;
	std::shared_ptr<VoxelGameData> gameData;
private:
	std::shared_ptr<VxlPPUSnapshot> snapshot;
	InputState inputState;
	VxlVirtualPatternTable virtualPatternTable;
	void updatePalette();
	void renderSprites();
	void renderNameTables();
	void renderScrollSection(ScrollSection section);
	void renderRow(int y, int height, int xOffset, int nametableX, int nametableY, int nameTable);
};