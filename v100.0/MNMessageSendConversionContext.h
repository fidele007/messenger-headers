/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MNMessageSendConversionContext : FBValueObject <NSCopying> {

	NSString* _versionId;
	NSString* _conversationInitiatorType;
	NSDictionary* _extraLoggingData;

}

@property (nonatomic,copy,readonly) NSString * versionId;                              //@synthesize versionId=_versionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationInitiatorType;              //@synthesize conversationInitiatorType=_conversationInitiatorType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraLoggingData;                   //@synthesize extraLoggingData=_extraLoggingData - In the implementation block
-(NSString *)conversationInitiatorType;
-(NSDictionary *)extraLoggingData;
-(id)initWithVersionId:(id)arg1 conversationInitiatorType:(id)arg2 extraLoggingData:(id)arg3 ;
-(NSString *)versionId;
@end
