/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBIntentTarget.h>

@class NSString, FBMemPerson;

@interface FBFriendListEditorIntentTarget : FBIntentTarget {

	NSString* _fbid;

}

@property (nonatomic,readonly) FBMemPerson * person; 
@property (nonatomic,copy,readonly) NSString * fbid;              //@synthesize fbid=_fbid - In the implementation block
+(id)friendListEditorTargetWithFBID:(id)arg1 ;
+(id)friendListEditorIntentTargetWithPerson:(id)arg1 ;
-(NSString *)fbid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemPerson *)person;
@end

