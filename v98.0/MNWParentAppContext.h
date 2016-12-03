/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNWSession, NSArray;

@interface MNWParentAppContext : FBValueObject <NSCopying, NSCoding> {

	MNWSession* _session;
	NSArray* _defaultReplies;

}

@property (nonatomic,copy,readonly) MNWSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultReplies;              //@synthesize defaultReplies=_defaultReplies - In the implementation block
-(id)initWithSession:(id)arg1 defaultReplies:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)defaultReplies;
-(MNWSession *)session;
@end

