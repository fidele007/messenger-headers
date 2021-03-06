/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReportingFlowConfigProviderProtocol.h>

@protocol FBServiceTransactionMutating, FBReportingFlowConfigProviderDelegateProtocol;
@class FBUserSession, NSString;

@interface FBReportingFlowGraphQLTreeProvider : NSObject <FBReportingFlowConfigProviderProtocol> {

	FBUserSession* _session;
	NSString* _counterpartyUID;
	NSString* _location;
	id<FBServiceTransactionMutating> _networkRequest;
	id<FBReportingFlowConfigProviderDelegateProtocol> _delegate;
	long long _type;
	int _style;

}
-(id)initWithUserSession:(id)arg1 counterpartyUID:(id)arg2 style:(int)arg3 ;
-(id)initWithUserSession:(id)arg1 location:(id)arg2 style:(int)arg3 ;
-(void)requestPromptModel:(id)arg1 nodeID:(id)arg2 ;
-(void)processParsedResponse:(id)arg1 ;
@end

