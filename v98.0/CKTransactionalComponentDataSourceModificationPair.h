/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKTransactionalComponentDataSourceStateModifying;
@class CKTransactionalComponentDataSourceState;

@interface CKTransactionalComponentDataSourceModificationPair : NSObject {

	id<CKTransactionalComponentDataSourceStateModifying> _modification;
	CKTransactionalComponentDataSourceState* _state;

}

@property (nonatomic,readonly) id<CKTransactionalComponentDataSourceStateModifying> modification;              //@synthesize modification=_modification - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceState * state;                                //@synthesize state=_state - In the implementation block
-(id)initWithModification:(id)arg1 state:(id)arg2 ;
-(CKTransactionalComponentDataSourceState *)state;
-(id<CKTransactionalComponentDataSourceStateModifying>)modification;
@end

