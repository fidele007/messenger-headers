/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBUnpublishedContentData : FBGraphQLInput {

	NSString* _unpublishedContentType;
	NSNumber* _scheduledPublishTime;

}

@property (nonatomic,copy) NSString * unpublishedContentType;              //@synthesize unpublishedContentType=_unpublishedContentType - In the implementation block
@property (nonatomic,copy) NSNumber * scheduledPublishTime;                //@synthesize scheduledPublishTime=_scheduledPublishTime - In the implementation block
-(NSString *)unpublishedContentType;
-(void)setUnpublishedContentType:(NSString *)arg1 ;
-(NSNumber *)scheduledPublishTime;
-(void)setScheduledPublishTime:(NSNumber *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
@end

