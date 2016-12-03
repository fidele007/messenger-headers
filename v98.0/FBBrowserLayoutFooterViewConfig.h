/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBBrowserLayoutBarViewConfig, FBBrowserLayoutPulseViewConfig;

@interface FBBrowserLayoutFooterViewConfig : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBBrowserLayoutBarViewConfig* _alwaysVisible_barViewConfig;
	FBBrowserLayoutPulseViewConfig* _alwaysVisible_pulseViewConfig;
	FBBrowserLayoutBarViewConfig* _scrollaway_barViewConfig;
	FBBrowserLayoutPulseViewConfig* _scrollaway_pulseViewConfig;

}
+(id)scrollawayWithBarViewConfig:(id)arg1 pulseViewConfig:(id)arg2 ;
+(id)alwaysVisibleWithBarViewConfig:(id)arg1 pulseViewConfig:(id)arg2 ;
+(id)none;
-(void)matchAlwaysVisible:(/*^block*/id)arg1 scrollaway:(/*^block*/id)arg2 none:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

