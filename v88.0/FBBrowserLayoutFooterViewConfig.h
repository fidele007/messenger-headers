/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(void)matchAlwaysVisible:(/*^block*/id)arg1 scrollaway:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

