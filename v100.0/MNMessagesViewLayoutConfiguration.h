/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagesViewLayoutConfiguration : FBValueObject <NSCopying> {

	BOOL _canHideNavBar;
	BOOL _shouldHideBottomBar;
	BOOL _mayShowTitleViewTooltip;

}

@property (nonatomic,readonly) BOOL canHideNavBar;                        //@synthesize canHideNavBar=_canHideNavBar - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideBottomBar;                  //@synthesize shouldHideBottomBar=_shouldHideBottomBar - In the implementation block
@property (nonatomic,readonly) BOOL mayShowTitleViewTooltip;              //@synthesize mayShowTitleViewTooltip=_mayShowTitleViewTooltip - In the implementation block
-(BOOL)shouldHideBottomBar;
-(BOOL)mayShowTitleViewTooltip;
-(BOOL)canHideNavBar;
-(id)initWithCanHideNavBar:(BOOL)arg1 shouldHideBottomBar:(BOOL)arg2 mayShowTitleViewTooltip:(BOOL)arg3 ;
@end

