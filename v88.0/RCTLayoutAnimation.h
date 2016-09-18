/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, RCTAnimation;

@interface RCTLayoutAnimation : NSObject {

	NSDictionary* _config;
	RCTAnimation* _createAnimation;
	RCTAnimation* _updateAnimation;
	RCTAnimation* _deleteAnimation;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSDictionary * config;                         //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) RCTAnimation * createAnimation;              //@synthesize createAnimation=_createAnimation - In the implementation block
@property (nonatomic,retain) RCTAnimation * updateAnimation;              //@synthesize updateAnimation=_updateAnimation - In the implementation block
@property (nonatomic,retain) RCTAnimation * deleteAnimation;              //@synthesize deleteAnimation=_deleteAnimation - In the implementation block
@property (nonatomic,copy) id callback;                                   //@synthesize callback=_callback - In the implementation block
-(id)initWithDictionary:(id)arg1 callback:(/*^block*/id)arg2 ;
-(RCTAnimation *)createAnimation;
-(void)setCreateAnimation:(RCTAnimation *)arg1 ;
-(void)setUpdateAnimation:(RCTAnimation *)arg1 ;
-(RCTAnimation *)deleteAnimation;
-(void)setDeleteAnimation:(RCTAnimation *)arg1 ;
-(NSDictionary *)config;
-(void)setConfig:(NSDictionary *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(RCTAnimation *)updateAnimation;
@end
