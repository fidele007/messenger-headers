/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPersonSyncTerribleNetworkerRequestOperation.h>

@protocol FBFullSyncOperationDelegate;
@class FBContactsFetchContext;

@interface FBFQLFullSyncOperation : FBPersonSyncTerribleNetworkerRequestOperation {

	id<FBFullSyncOperationDelegate> _delegate;
	FBContactsFetchContext* _previousContext;

}

@property (assign,nonatomic,__weak) id<FBFullSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBContactsFetchContext * previousContext;                     //@synthesize previousContext=_previousContext - In the implementation block
-(id)_syncEventsForResponse:(id)arg1 ;
-(FBContactsFetchContext *)previousContext;
-(void)requestSucceededWithResponse:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(void)setPreviousContext:(FBContactsFetchContext *)arg1 ;
-(void)setDelegate:(id<FBFullSyncOperationDelegate>)arg1 ;
-(id<FBFullSyncOperationDelegate>)delegate;
-(id)request;
@end

