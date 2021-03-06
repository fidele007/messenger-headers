/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserRequestListener.h>

@protocol MNUserRequestRunning;
@class MNAsyncOperationTracker, FBAnalytics, MNUserRequestListenerFactory, NSString;

@interface MNUserStoreRequestCoordinator : NSObject <MNUserRequestListener> {

	MNAsyncOperationTracker* _asyncOperationTracker;
	id<MNUserRequestRunning> _requestRunner;
	FBAnalytics* _analytics;
	MNUserRequestListenerFactory* _listenerFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)handleSingleUserRequest:(id)arg1 ;
-(unsigned long long)handleMultipleUserRequest:(id)arg1 ;
-(void)singleUserRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)multipleUserRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)singleUserRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)multipleUserRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)singleUserRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)multipleUserRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(id)initWithUserRequestRunner:(id)arg1 requestTracker:(id)arg2 analytics:(id)arg3 listenerFactory:(id)arg4 ;
-(void)didCompleteNetworkFetchForUsers:(id)arg1 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end

