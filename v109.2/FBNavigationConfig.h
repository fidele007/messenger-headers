/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBNavigationConfig : NSObject {

	BOOL _shouldShowSearchButton;
	BOOL _shouldShowFollowNuxIfApplicable;
	BOOL _shouldShowMentionsLiveTabIfApplicable;
	BOOL _shouldShowVideoHomeNux;

}

@property (assign,nonatomic) BOOL shouldShowSearchButton;                             //@synthesize shouldShowSearchButton=_shouldShowSearchButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowFollowNuxIfApplicable;                    //@synthesize shouldShowFollowNuxIfApplicable=_shouldShowFollowNuxIfApplicable - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMentionsLiveTabIfApplicable;              //@synthesize shouldShowMentionsLiveTabIfApplicable=_shouldShowMentionsLiveTabIfApplicable - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowVideoHomeNux;                           //@synthesize shouldShowVideoHomeNux=_shouldShowVideoHomeNux - In the implementation block
-(BOOL)shouldShowFollowNuxIfApplicable;
-(BOOL)shouldShowSearchButton;
-(id)initWithShouldShowSearchButton:(BOOL)arg1 shouldShowFollowNuxIfApplicable:(BOOL)arg2 shouldShowMentionsLiveTabIfApplicable:(BOOL)arg3 shouldShowVideoHomeNux:(BOOL)arg4 ;
-(void)setShouldShowSearchButton:(BOOL)arg1 ;
-(void)setShouldShowFollowNuxIfApplicable:(BOOL)arg1 ;
-(BOOL)shouldShowMentionsLiveTabIfApplicable;
-(void)setShouldShowMentionsLiveTabIfApplicable:(BOOL)arg1 ;
-(BOOL)shouldShowVideoHomeNux;
@end

