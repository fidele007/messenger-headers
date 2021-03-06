/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, MNBotComposerMenuViewModel, MNBotComposerShoppingBannerViewModel;

@interface MNBotComposerViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldShowMenuIcon;
	NSString* _pageID;
	unsigned long long _menuIconBadgeCount;
	NSArray* _horizontalCTAViewModels;
	MNBotComposerMenuViewModel* _menuViewModel;
	MNBotComposerShoppingBannerViewModel* _shoppingBannerViewModel;

}

@property (nonatomic,copy,readonly) NSString * pageID;                                                           //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMenuIcon;                                                          //@synthesize shouldShowMenuIcon=_shouldShowMenuIcon - In the implementation block
@property (nonatomic,readonly) unsigned long long menuIconBadgeCount;                                            //@synthesize menuIconBadgeCount=_menuIconBadgeCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * horizontalCTAViewModels;                                           //@synthesize horizontalCTAViewModels=_horizontalCTAViewModels - In the implementation block
@property (nonatomic,copy,readonly) MNBotComposerMenuViewModel * menuViewModel;                                  //@synthesize menuViewModel=_menuViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBotComposerShoppingBannerViewModel * shoppingBannerViewModel;              //@synthesize shoppingBannerViewModel=_shoppingBannerViewModel - In the implementation block
-(MNBotComposerMenuViewModel *)menuViewModel;
-(MNBotComposerShoppingBannerViewModel *)shoppingBannerViewModel;
-(BOOL)shouldShowMenuIcon;
-(unsigned long long)menuIconBadgeCount;
-(NSArray *)horizontalCTAViewModels;
-(id)initWithPageID:(id)arg1 shouldShowMenuIcon:(BOOL)arg2 menuIconBadgeCount:(unsigned long long)arg3 horizontalCTAViewModels:(id)arg4 menuViewModel:(id)arg5 shoppingBannerViewModel:(id)arg6 ;
-(NSString *)pageID;
@end

