/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNBusinessBottomSheetViewModel : FBValueObject <NSCopying> {

	BOOL _shouldUseMiniAppChrome;
	BOOL _shouldHideNavBar;
	NSString* _title;
	NSString* _closeButtonTitle;
	double _displayHeightRatio;
	NSString* _pageID;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * closeButtonTitle;              //@synthesize closeButtonTitle=_closeButtonTitle - In the implementation block
@property (nonatomic,readonly) double displayHeightRatio;                     //@synthesize displayHeightRatio=_displayHeightRatio - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseMiniAppChrome;                   //@synthesize shouldUseMiniAppChrome=_shouldUseMiniAppChrome - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                        //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideNavBar;                         //@synthesize shouldHideNavBar=_shouldHideNavBar - In the implementation block
-(BOOL)shouldUseMiniAppChrome;
-(id)initWithTitle:(id)arg1 closeButtonTitle:(id)arg2 displayHeightRatio:(double)arg3 shouldUseMiniAppChrome:(BOOL)arg4 pageID:(id)arg5 shouldHideNavBar:(BOOL)arg6 ;
-(NSString *)closeButtonTitle;
-(double)displayHeightRatio;
-(BOOL)shouldHideNavBar;
-(NSString *)title;
-(NSString *)pageID;
@end

