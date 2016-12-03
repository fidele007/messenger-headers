/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSSet, NSIndexSet;

@interface CKTransactionalComponentDataSourceChangeset : NSObject {

	NSDictionary* _updatedItems;
	NSSet* _removedItems;
	NSIndexSet* _removedSections;
	NSDictionary* _movedItems;
	NSIndexSet* _insertedSections;
	NSDictionary* _insertedItems;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * updatedItems;                //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,copy,readonly) NSSet * removedItems;                       //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedSections;               //@synthesize removedSections=_removedSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedItems;                  //@synthesize movedItems=_movedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedSections;              //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * insertedItems;               //@synthesize insertedItems=_insertedItems - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
-(NSIndexSet *)removedSections;
-(NSDictionary *)updatedItems;
-(NSDictionary *)movedItems;
-(NSDictionary *)insertedItems;
-(id)initWithUpdatedItems:(id)arg1 removedItems:(id)arg2 removedSections:(id)arg3 movedItems:(id)arg4 insertedSections:(id)arg5 insertedItems:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(NSSet *)removedItems;
-(NSIndexSet *)insertedSections;
@end

