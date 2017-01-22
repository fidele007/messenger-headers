/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBGraphQLConnectionStoreStateTransitions : FBValueObject <NSCopying> {

	NSArray* _transitions;
	id _returnValue;

}

@property (nonatomic,copy,readonly) NSArray * transitions;              //@synthesize transitions=_transitions - In the implementation block
@property (nonatomic,copy,readonly) id returnValue;                     //@synthesize returnValue=_returnValue - In the implementation block
-(id)initWithTransitions:(id)arg1 returnValue:(id)arg2 ;
-(NSArray *)transitions;
-(id)returnValue;
@end
