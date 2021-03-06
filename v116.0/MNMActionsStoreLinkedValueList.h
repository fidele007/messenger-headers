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

@class FBMThreadKey, NSDictionary;

@interface MNMActionsStoreLinkedValueList : FBValueObject <NSCoding, NSCopying> {

	FBMThreadKey* _head;
	FBMThreadKey* _tail;
	NSDictionary* _actionsByThread;

}

@property (nonatomic,copy,readonly) FBMThreadKey * head;                         //@synthesize head=_head - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * tail;                         //@synthesize tail=_tail - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * actionsByThread;              //@synthesize actionsByThread=_actionsByThread - In the implementation block
-(NSDictionary *)actionsByThread;
-(id)initWithHead:(id)arg1 tail:(id)arg2 actionsByThread:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBMThreadKey *)head;
-(FBMThreadKey *)tail;
@end

