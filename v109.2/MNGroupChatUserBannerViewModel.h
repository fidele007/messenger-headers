/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNQuickReplyCellViewModel;

@interface MNGroupChatUserBannerViewModel : FBValueObject <NSCopying> {

	NSString* _userId;
	MNQuickReplyCellViewModel* _quickReplyCellViewModel;

}

@property (nonatomic,copy,readonly) NSString * userId;                                                //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) MNQuickReplyCellViewModel * quickReplyCellViewModel;              //@synthesize quickReplyCellViewModel=_quickReplyCellViewModel - In the implementation block
-(id)initWithUserId:(id)arg1 quickReplyCellViewModel:(id)arg2 ;
-(MNQuickReplyCellViewModel *)quickReplyCellViewModel;
-(NSString *)userId;
@end

