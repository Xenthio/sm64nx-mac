#include <ultra64.h>
#include "sm64.h"
#include "geo_commands.h"

#include "game/level_geo.h"
#include "game/geo_misc.h"
#include "game/camera.h"
#include "game/moving_texture.h"
#include "game/screen_transition.h"
#include "game/paintings.h"

#include "levels/sa/header.h"

#include "levels/sa/areas/1/geo.inc.c"

#include "game/debug.h"
#include "engine/hook_geo.h"

namespace sm64::geo
{
	EXPORT_GEO(sa_level_geo);
}
