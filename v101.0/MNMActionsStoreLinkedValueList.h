/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
