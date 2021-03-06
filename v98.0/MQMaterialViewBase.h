/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQDocumentViewBase.h>

@class MQEventHandler, SCNMaterial;

@interface MQMaterialViewBase : MQDocumentViewBase {

	MQEventHandler* _onChangeHandler;
	BOOL _generateVideoUVs;
	id _model;
	SCNMaterial* _material;

}

@property (assign,nonatomic,__weak) id model;                     //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) SCNMaterial * material;              //@synthesize material=_material - In the implementation block
@property (assign,nonatomic) BOOL generateVideoUVs;               //@synthesize generateVideoUVs=_generateVideoUVs - In the implementation block
-(void)destroyScene;
-(void)initScene;
-(BOOL)generateVideoUVs;
-(void)onChange:(id)arg1 ;
-(BOOL)isTexturePVR:(id)arg1 ;
-(void)setGenerateVideoUVs:(BOOL)arg1 ;
-(id)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(id)arg1 ;
-(void)setMaterial:(SCNMaterial *)arg1 ;
-(SCNMaterial *)material;
@end

