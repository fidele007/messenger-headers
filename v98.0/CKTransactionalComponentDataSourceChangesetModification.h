/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKTransactionalComponentDataSourceStateModifying.h>

@protocol CKComponentStateListener;
@class NSDictionary, CKTransactionalComponentDataSourceChangeset, NSString;

@interface CKTransactionalComponentDataSourceChangesetModification : NSObject <CKTransactionalComponentDataSourceStateModifying> {

	id<CKComponentStateListener> _stateListener;
	NSDictionary* _userInfo;
	CKTransactionalComponentDataSourceChangeset* _changeset;

}

@property (nonatomic,readonly) CKTransactionalComponentDataSourceChangeset * changeset;              //@synthesize changeset=_changeset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChangeset:(id)arg1 stateListener:(id)arg2 userInfo:(id)arg3 ;
-(id)changeFromState:(id)arg1 ;
-(CKTransactionalComponentDataSourceChangeset *)changeset;
-(NSString *)description;
@end
