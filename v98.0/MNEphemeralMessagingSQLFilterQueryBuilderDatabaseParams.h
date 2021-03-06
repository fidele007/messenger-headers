/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNEphemeralMessagingSQLFilterQueryBuilderDatabaseParams : FBValueObject <NSCopying> {

	NSString* _messageTableName;
	NSString* _messageIdColumnName;
	NSString* _messageTimestampColumnName;
	NSString* _messageLifetimeColumnName;
	NSString* _collapsedThreadKeyColumnName;

}

@property (nonatomic,copy,readonly) NSString * messageTableName;                          //@synthesize messageTableName=_messageTableName - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageIdColumnName;                       //@synthesize messageIdColumnName=_messageIdColumnName - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageTimestampColumnName;                //@synthesize messageTimestampColumnName=_messageTimestampColumnName - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageLifetimeColumnName;                 //@synthesize messageLifetimeColumnName=_messageLifetimeColumnName - In the implementation block
@property (nonatomic,copy,readonly) NSString * collapsedThreadKeyColumnName;              //@synthesize collapsedThreadKeyColumnName=_collapsedThreadKeyColumnName - In the implementation block
-(id)initWithMessageTableName:(id)arg1 messageIdColumnName:(id)arg2 messageTimestampColumnName:(id)arg3 messageLifetimeColumnName:(id)arg4 collapsedThreadKeyColumnName:(id)arg5 ;
-(NSString *)messageIdColumnName;
-(NSString *)messageTableName;
-(NSString *)collapsedThreadKeyColumnName;
-(NSString *)messageTimestampColumnName;
-(NSString *)messageLifetimeColumnName;
@end

