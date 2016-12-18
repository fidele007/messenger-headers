/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKTransactionalComponentDataSourceState, CKTransactionalComponentDataSourceAppliedChanges;

@interface CKTransactionalComponentDataSourceChange : NSObject {

	CKTransactionalComponentDataSourceState* _state;
	CKTransactionalComponentDataSourceAppliedChanges* _appliedChanges;

}

@property (nonatomic,readonly) CKTransactionalComponentDataSourceState * state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceAppliedChanges * appliedChanges;              //@synthesize appliedChanges=_appliedChanges - In the implementation block
-(CKTransactionalComponentDataSourceAppliedChanges *)appliedChanges;
-(id)initWithState:(id)arg1 appliedChanges:(id)arg2 ;
-(CKTransactionalComponentDataSourceState *)state;
@end
