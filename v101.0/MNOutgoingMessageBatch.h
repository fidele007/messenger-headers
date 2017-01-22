/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNOutgoingMessageBatch : FBValueObject <NSCopying> {

	NSString* _batchId;
	NSArray* _messages;

}

@property (nonatomic,copy,readonly) NSString * batchId;              //@synthesize batchId=_batchId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
-(id)initWithBatchId:(id)arg1 messages:(id)arg2 ;
-(NSArray *)messages;
-(NSString *)batchId;
@end
