/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxTruncationViewModel;

@interface MNInboxViewModelViewState : FBValueObject <NSCopying> {

	BOOL _converstionStartersSectionExpanded;
	BOOL _shouldShowMoreCell;
	BOOL _recentVideosUnitExpanded;
	BOOL _recentlyClickLinksUnitExpanded;
	long long _seeMoreButtonPressCount;
	MNInboxTruncationViewModel* _inboxTruncationViewModel;
	CGSize _inboxViewSize;

}

@property (nonatomic,readonly) CGSize inboxViewSize;                                                    //@synthesize inboxViewSize=_inboxViewSize - In the implementation block
@property (nonatomic,readonly) long long seeMoreButtonPressCount;                                       //@synthesize seeMoreButtonPressCount=_seeMoreButtonPressCount - In the implementation block
@property (nonatomic,readonly) BOOL converstionStartersSectionExpanded;                                 //@synthesize converstionStartersSectionExpanded=_converstionStartersSectionExpanded - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMoreCell;                                                 //@synthesize shouldShowMoreCell=_shouldShowMoreCell - In the implementation block
@property (nonatomic,readonly) BOOL recentVideosUnitExpanded;                                           //@synthesize recentVideosUnitExpanded=_recentVideosUnitExpanded - In the implementation block
@property (nonatomic,readonly) BOOL recentlyClickLinksUnitExpanded;                                     //@synthesize recentlyClickLinksUnitExpanded=_recentlyClickLinksUnitExpanded - In the implementation block
@property (nonatomic,copy,readonly) MNInboxTruncationViewModel * inboxTruncationViewModel;              //@synthesize inboxTruncationViewModel=_inboxTruncationViewModel - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(BOOL)shouldShowMoreCell;
-(CGSize)inboxViewSize;
-(long long)seeMoreButtonPressCount;
-(BOOL)recentVideosUnitExpanded;
-(BOOL)recentlyClickLinksUnitExpanded;
-(MNInboxTruncationViewModel *)inboxTruncationViewModel;
-(BOOL)converstionStartersSectionExpanded;
-(id)initWithInboxViewSize:(CGSize)arg1 seeMoreButtonPressCount:(long long)arg2 converstionStartersSectionExpanded:(BOOL)arg3 shouldShowMoreCell:(BOOL)arg4 recentVideosUnitExpanded:(BOOL)arg5 recentlyClickLinksUnitExpanded:(BOOL)arg6 inboxTruncationViewModel:(id)arg7 ;
@end

