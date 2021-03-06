/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSIndexSet;

@interface MNListDeltaUpdate : FBValueObject <NSCopying> {

	NSArray* _updatedItems;
	NSIndexSet* _insertedIndexSet;
	NSIndexSet* _deletedIndexSet;

}

@property (nonatomic,copy,readonly) NSArray * updatedItems;                     //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexSet;              //@synthesize insertedIndexSet=_insertedIndexSet - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * deletedIndexSet;               //@synthesize deletedIndexSet=_deletedIndexSet - In the implementation block
-(NSArray *)updatedItems;
-(id)initWithUpdatedItems:(id)arg1 insertedIndexSet:(id)arg2 deletedIndexSet:(id)arg3 ;
-(NSIndexSet *)insertedIndexSet;
-(NSIndexSet *)deletedIndexSet;
@end

