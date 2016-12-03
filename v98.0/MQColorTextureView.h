/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQTextureViewBase.h>

@protocol MQColorTextureModelProtocol;
@class MQEventHandler, NSData;

@interface MQColorTextureView : MQTextureViewBase {

	MQEventHandler* _onChangeHandler;
	NSData* _colorData;
	id<MQColorTextureModelProtocol> _model;

}

@property (assign,nonatomic,__weak) id<MQColorTextureModelProtocol> model;              //@synthesize model=_model - In the implementation block
-(void)destroyScene;
-(void)initScene;
-(void)onChange:(id)arg1 ;
-(id)constructData;
-(id)data;
-(id<MQColorTextureModelProtocol>)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(id<MQColorTextureModelProtocol>)arg1 ;
@end

