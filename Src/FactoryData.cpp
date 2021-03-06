#include "FactoryData.h"

namespace Factory
{
Window          *window                      = NULL;
GroupNode       *scenegraphRootNode          = new GroupNode() ;
LightSource     *centralLightSource          = new LightSource();
Camera          *camera                      = new Camera();
GroupNode       *robotRootNode               = new GroupNode() ;
GroupNode       *roomRootNode                = new GroupNode() ;
RoomModel       *roomModel                   = new RoomModel();
RobotTorsoModel *robotTorso                  = new RobotTorsoModel();
RobotLegTop     *robotLeftLegTop             = new RobotLegTop();
RobotLegTop     *robotRightLegTop            = new RobotLegTop();
RobotLegBottom  *robotLeftLegBottom          = new RobotLegBottom();
RobotLegBottom  *robotRightLegBottom         = new RobotLegBottom();
RobotArmTop     *robotRightArmTop            = new RobotArmTop();
RobotArmTop     *robotLeftArmTop             = new RobotArmTop();
RobotArmBottom  *robotRightBottom            = new RobotArmBottom();
RobotArmBottom  *robotLeftBottom             = new RobotArmBottom();
RobotHead       *robotHead                   = new RobotHead();
RobotShoe       *robotLeftShoe               = new RobotShoe();
RobotShoe       *robotRightShoe              = new RobotShoe();
Transform       *robotLeftThighTransform     = new Transform();
Transform       *robotRightThighTransform    = new Transform();
Transform       *robotLeftKneeTransform      = new Transform();
Transform       *robotRightKneeTransform     = new Transform();
Transform       *robotLeftShoulderTransform  = new Transform();
Transform       *robotRightShoulderTransform = new Transform();
Transform       *robotLeftElbowTransform     = new Transform();
Transform       *robotRightElbowTransform    = new Transform();
Transform       *robotHeadTransform          = new Transform();
Transform       *robotTorsoTransform         = new Transform();
Transform       *roomCentralTransform        = new Transform();
Transform       *robotLeftShoeTransform      = new Transform();
Transform       *robotRightShoeTransform     = new Transform();
Transform       *roomFloorTransform          = new Transform();
Transform       *roomLeftWallTransform       = new Transform();
Transform       *roomRightWallTransform      = new Transform();
Transform       *roomFrontWallTransform      = new Transform();
Transform       *roomFrontWallInTransform    = new Transform();
Transform       *roomBackWallTransform       = new Transform();
Transform       *roomCeilingTransform        = new Transform();
Transform       *painting1Transform          = new Transform();
Transform       *painting2Transform          = new Transform();
Transform       *painting3Transform          = new Transform();
Transform       *painting4Transform          = new Transform();
Transform       *painting5Transform          = new Transform();
Transform       *painting6Transform          = new Transform();
Transform       *painting7Transform          = new Transform();
Transform       *painting8Transform          = new Transform();
Transform       *painting9Transform          = new Transform();

Transform       *roomFrontWallLeftDoorTransform  = new Transform();
Transform       *roomFrontWallRightDoorTransform = new Transform();
Transform       *teapotTransform                 = new Transform();

BuildingBlock    *roomFrontWallLeftDoor       = new BuildingBlock("../Textures/doorLeft.png");
BuildingBlock    *roomFrontWallRightDoor      = new BuildingBlock("../Textures/doorRight.png");
BuildingBlock    *roomFloor                   = new BuildingBlock("../Textures/floor1.png");
BuildingBlock    *roomLeftWall                = new BuildingBlock("../Textures/wall1.png");
BuildingBlock    *roomRightWall               = new BuildingBlock("../Textures/wall1.png");
BuildingBlock    *roomFrontWall               = new BuildingBlock("../Textures/wall3_noDoor.png");
BuildingBlock    *roomFrontWallIn             = new BuildingBlock("../Textures/wall3Mirror.png");
BuildingBlock    *roomBackWall                = new BuildingBlock("../Textures/wall1.png");
BuildingBlock    *roomCeiling                 = new BuildingBlock("../Textures/wall2.png");
BuildingBlock    *painting1                   = new BuildingBlock("../Textures/painting1.png");
BuildingBlock    *painting2                   = new BuildingBlock("../Textures/painting2.png");
BuildingBlock    *painting3                   = new BuildingBlock("../Textures/painting3.png");
BuildingBlock    *painting4                   = new BuildingBlock("../Textures/painting4.png");
BuildingBlock    *painting5                   = new BuildingBlock("../Textures/painting5.png");
BuildingBlock    *painting6                   = new BuildingBlock("../Textures/painting6.png");
BuildingBlock    *painting7                   = new BuildingBlock("../Textures/painting7.png");
BuildingBlock    *painting8                   = new BuildingBlock("../Textures/painting8.png");
BuildingBlock    *painting9                   = new BuildingBlock("../Textures/painting9.png");
CameraController *cameraController            = new CameraController();
AudioPlayer      *audioPlayer                 = new AudioPlayer();
PaintingFrame     *painting1Frame             = new PaintingFrame();
PaintingFrame     *painting2Frame             = new PaintingFrame();
PaintingFrame     *painting3Frame             = new PaintingFrame();
PaintingFrame     *painting4Frame             = new PaintingFrame();
PaintingFrame     *painting5Frame             = new PaintingFrame();
PaintingFrame     *painting6Frame             = new PaintingFrame();
PaintingFrame     *painting7Frame             = new PaintingFrame();
PaintingFrame     *painting8Frame             = new PaintingFrame();
PaintingFrame     *painting9Frame             = new PaintingFrame();
Teapot            *teapot                     = new Teapot();
}
