/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBBrowserLayoutBarViewConfig, FBBrowserLayoutSearchBoxConfig, FBBrowserLayoutPulseViewConfig;

@interface FBBrowserLayoutHeaderViewConfig : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBBrowserLayoutBarViewConfig* _alwaysVisible_barViewConfig;
	FBBrowserLayoutSearchBoxConfig* _alwaysVisible_searchBoxConfig;
	FBBrowserLayoutPulseViewConfig* _alwaysVisible_pulseViewConfig;
	FBBrowserLayoutBarViewConfig* _scrollaway_expandedBarViewConfig;
	FBBrowserLayoutSearchBoxConfig* _scrollaway_expandedSearchBoxConfig;
	FBBrowserLayoutBarViewConfig* _scrollaway_collapsedBarViewConfig;
	FBBrowserLayoutSearchBoxConfig* _scrollaway_collapsedSearchBoxConfig;
	FBBrowserLayoutPulseViewConfig* _scrollaway_pulseViewConfig;
	BOOL _scrollaway_scrollawayStatusBar;

}
+(id)scrollawayWithExpandedBarViewConfig:(id)arg1 expandedSearchBoxConfig:(id)arg2 collapsedBarViewConfig:(id)arg3 collapsedSearchBoxConfig:(id)arg4 pulseViewConfig:(id)arg5 scrollawayStatusBar:(BOOL)arg6 ;
+(id)alwaysVisibleWithBarViewConfig:(id)arg1 searchBoxConfig:(id)arg2 pulseViewConfig:(id)arg3 ;
-(void)matchAlwaysVisible:(/*^block*/id)arg1 scrollaway:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

