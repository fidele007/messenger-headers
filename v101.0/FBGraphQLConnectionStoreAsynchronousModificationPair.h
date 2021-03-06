/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionStoreStateModifying;
@interface FBGraphQLConnectionStoreAsynchronousModificationPair : NSObject {

	id<FBGraphQLConnectionStoreStateModifying> _modification;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) id<FBGraphQLConnectionStoreStateModifying> modification;              //@synthesize modification=_modification - In the implementation block
@property (nonatomic,readonly) id callback;                                                          //@synthesize callback=_callback - In the implementation block
-(id)initWithModification:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)callback;
-(id<FBGraphQLConnectionStoreStateModifying>)modification;
@end

