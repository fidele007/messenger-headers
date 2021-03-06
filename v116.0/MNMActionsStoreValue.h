/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadKey, NSArray;

@interface MNMActionsStoreValue : FBValueObject <NSCoding, NSCopying> {

	FBMThreadKey* _next;
	FBMThreadKey* _prev;
	NSArray* _actions;

}

@property (nonatomic,copy,readonly) FBMThreadKey * next;              //@synthesize next=_next - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * prev;              //@synthesize prev=_prev - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                //@synthesize actions=_actions - In the implementation block
-(id)initWithNext:(id)arg1 prev:(id)arg2 actions:(id)arg3 ;
-(FBMThreadKey *)next;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)actions;
-(FBMThreadKey *)prev;
@end

