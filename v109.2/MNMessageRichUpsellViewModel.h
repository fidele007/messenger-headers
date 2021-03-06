/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey, MNPhotoViewModel, NSString;

@interface MNMessageRichUpsellViewModel : FBValueObject <NSCopying> {

	FBMMessageKey* _messageKey;
	MNPhotoViewModel* _photoViewModel;
	NSString* _titleText;
	NSString* _detailText;
	unsigned long long _messageContentType;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                     //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoViewModel * photoViewModel;              //@synthesize photoViewModel=_photoViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;                          //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) unsigned long long messageContentType;               //@synthesize messageContentType=_messageContentType - In the implementation block
-(id)initWithMessageKey:(id)arg1 photoViewModel:(id)arg2 titleText:(id)arg3 detailText:(id)arg4 messageContentType:(unsigned long long)arg5 ;
-(unsigned long long)messageContentType;
-(MNPhotoViewModel *)photoViewModel;
-(NSString *)detailText;
-(NSString *)titleText;
-(FBMMessageKey *)messageKey;
@end

