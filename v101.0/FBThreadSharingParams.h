/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBPrivacyData;

@interface FBThreadSharingParams : FBGraphQLInput {

	NSString* _shareToFb;
	NSString* _messageForShareToFb;
	FBPrivacyData* _privacy;

}

@property (nonatomic,copy) NSString * shareToFb;                        //@synthesize shareToFb=_shareToFb - In the implementation block
@property (nonatomic,copy) NSString * messageForShareToFb;              //@synthesize messageForShareToFb=_messageForShareToFb - In the implementation block
@property (nonatomic,copy) FBPrivacyData * privacy;                     //@synthesize privacy=_privacy - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)shareToFb;
-(void)setShareToFb:(NSString *)arg1 ;
-(NSString *)messageForShareToFb;
-(void)setMessageForShareToFb:(NSString *)arg1 ;
-(FBPrivacyData *)privacy;
-(void)setPrivacy:(FBPrivacyData *)arg1 ;
@end

