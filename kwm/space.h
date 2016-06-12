#ifndef SPACE_H
#define SPACE_H

#include "types.h"
#include "axlib/axlib.h"

extern void MoveFocusedWindowToSpace(std::string SpaceID);

void GetTagForMonocleSpace(space_info *Space, std::string &Tag);
void GetTagForCurrentSpace(std::string &Tag);
bool IsSpaceInitializedForScreen(screen_info *Screen);
bool DoesSpaceExistInMapOfScreen(screen_info *Screen);
space_info *GetActiveSpaceOfScreen(screen_info *Screen);

bool IsActiveSpaceManaged();
void ShouldActiveSpaceBeManaged();
bool IsSpaceTransitionInProgress();

bool IsSpaceFloating(int SpaceID);
bool IsActiveSpaceFloating();

void TileFocusedSpace(space_tiling_option Mode);
void FloatFocusedSpace();
void UpdateActiveSpace();

void GoToPreviousSpace(bool MoveFocusedWindow);
space_settings *GetSpaceSettingsForDesktopID(int ScreenID, int DesktopID);
int GetSpaceFromName(screen_info *Screen, std::string Name);
void SetNameOfActiveSpace(screen_info *Screen, std::string Name);
std::string GetNameOfSpace(screen_info *Screen, int CGSpaceID);
std::string GetNameOfSpace(ax_display *Display);

#endif
