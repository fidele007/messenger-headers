/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMSecureThreadKey, MNSecureMessageContent, MNSecureMessageReportableContent;

@interface MNSecureMessageBuilder : NSObject {

	NSString* _messageId;
	FBMSecureThreadKey* _secureThreadKey;
	NSString* _senderId;
	unsigned long long _timestamp;
	long long _messageLifetime;
	MNSecureMessageContent* _content;
	MNSecureMessageReportableContent* _reportableContent;

}
+(id)secureMessage;
+(id)secureMessageFromExistingSecureMessage:(id)arg1 ;
-(id)withTimestamp:(unsigned long long)arg1 ;
-(id)withSenderId:(id)arg1 ;
-(id)withMessageId:(id)arg1 ;
-(id)withSecureThreadKey:(id)arg1 ;
-(id)withMessageLifetime:(long long)arg1 ;
-(id)withContent:(id)arg1 ;
-(id)withReportableContent:(id)arg1 ;
-(id)build;
@end
