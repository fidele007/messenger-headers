/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MQEffectBase.h>

@class SCNNode, NSMutableArray, SCNMaterial;

@interface MQApeEffect : MQEffectBase {

	SCNNode* _cubesNode;
	NSMutableArray* _cubes;
	SCNVector3 _vertices[74];
	SCNVector3 _normals[74];
	MQVector2 _uvs[74];
	SCNNode* _face;
	SCNMaterial* _faceMaterial;

}
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(id)init;
-(id)resourcePath;
@end

