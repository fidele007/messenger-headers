/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol MNXConfigFetcherDelegate;
@class FBSimpleNetworkerRequest, FBMReachabilityAwareNetworker, NSString;

@interface MNXConfigFetcher : NSObject <FBMReachabilityAwareNetworkerDelegate> {

	FBSimpleNetworkerRequest* _restNetworkRequest;
	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	NSString* _keyName;
	id<MNXConfigFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNXConfigFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_buildRequestParamsForKeyName:(id)arg1 ;
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_resultToConfigValueString:(id)arg1 ;
-(id)initWithKeyName:(id)arg1 andFriendlyName:(id)arg2 ;
-(void)setDelegate:(id<MNXConfigFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNXConfigFetcherDelegate>)delegate;
-(void)stop;
-(void)start;
@end

