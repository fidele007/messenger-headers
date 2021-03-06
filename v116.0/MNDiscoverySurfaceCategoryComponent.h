/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/CKCompositeComponent.h>

@class MNDiscoveryCategoryViewModel;

@interface MNDiscoverySurfaceCategoryComponent : CKCompositeComponent {

	MNDiscoveryCategoryViewModel* _category;
	/*^block*/id _tapHandler;

}

@property (nonatomic,copy,readonly) MNDiscoveryCategoryViewModel * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) id tapHandler;                                        //@synthesize tapHandler=_tapHandler - In the implementation block
+(id)newWithCategory:(id)arg1 tapHandler:(/*^block*/id)arg2 ;
-(MNDiscoveryCategoryViewModel *)category;
-(id)tapHandler;
@end

