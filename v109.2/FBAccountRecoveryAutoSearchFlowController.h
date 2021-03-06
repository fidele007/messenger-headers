/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBAuthRecoveryControllingDelegate.h>
#import <Messenger/FBAuthRecoveryControlling.h>

@protocol FBAccountRecoveryUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthRecoveryControllingDelegate;
@class NSString, FBAccountRecoveryContactPointsFlowController, FBAccountRecoverySearchFlowController, FBAccountRecoverySearchController;

@interface FBAccountRecoveryAutoSearchFlowController : NSObject <FBAuthRecoveryControllingDelegate, FBAuthRecoveryControlling> {

	NSString* _cuid;
	id<FBAccountRecoveryUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	FBAccountRecoveryContactPointsFlowController* _contactPointsFlowController;
	FBAccountRecoverySearchFlowController* _searchPointsFlowController;
	FBAccountRecoverySearchController* _searchController;
	id<FBAuthRecoveryControllingDelegate> _recoveryDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthRecoveryControllingDelegate> recoveryDelegate;              //@synthesize recoveryDelegate=_recoveryDelegate - In the implementation block
-(id)initWithCuid:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)recoveryCompleted:(id)arg1 withUserID:(id)arg2 password:(id)arg3 ;
-(void)recover;
-(void)setRecoveryDelegate:(id<FBAuthRecoveryControllingDelegate>)arg1 ;
-(id<FBAuthRecoveryControllingDelegate>)recoveryDelegate;
@end

