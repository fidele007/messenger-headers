/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RCTFrameUpdate : NSObject {

	double _timestamp;
	double _deltaTime;

}

@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double deltaTime;              //@synthesize deltaTime=_deltaTime - In the implementation block
-(id)initWithDisplayLink:(id)arg1 ;
-(id)init;
-(double)timestamp;
-(double)deltaTime;
@end
