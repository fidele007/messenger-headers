/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
