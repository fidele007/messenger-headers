/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNDayCameraContainerInterlayState : NSObject <NSCopying> {

	unsigned long long _subtype;
	double _fullscreen_contentOffsetY;

}
+(id)atInitial;
+(id)betweenDismissedAndInitial;
+(id)betweenInitialAndFullscreen;
+(id)fullscreenWithContentOffsetY:(double)arg1 ;
+(id)dismissed;
-(void)matchFullscreen:(/*^block*/id)arg1 betweenInitialAndFullscreen:(/*^block*/id)arg2 atInitial:(/*^block*/id)arg3 betweenDismissedAndInitial:(/*^block*/id)arg4 dismissed:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

