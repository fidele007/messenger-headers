/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface MNSecureMessagingCreateThreadStoredProcedureResult : FBValueObject <NSCoding, NSCopying> {

	NSString* _threadId;
	NSSet* _participants;

}

@property (nonatomic,copy,readonly) NSString * threadId;               //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy,readonly) NSSet * participants;              //@synthesize participants=_participants - In the implementation block
-(id)initWithThreadId:(id)arg1 participants:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)participants;
-(NSString *)threadId;
@end

