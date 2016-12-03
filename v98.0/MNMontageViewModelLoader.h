/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>

@class MNMontageViewModelGenerator, NSMutableDictionary, NSString;

@interface MNMontageViewModelLoader : NSObject <MNSingleViewModelLoading> {

	MNMontageViewModelGenerator* _generator;
	NSMutableDictionary* _requestIdToRequestMap;
	NSMutableDictionary* _requestIdToGeneratorRequestIdMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanUpForRequestId:(unsigned long long)arg1 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithMessageQuerier:(id)arg1 pendingThreadQuerier:(id)arg2 threadStore:(id)arg3 userStore:(id)arg4 threadSummaryOptimisticStateApplier:(id)arg5 loggedInUserInfoManager:(id)arg6 ;
-(void)_handleSuccessWithViewModel:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_handleProgressWithLongOperationDidBegin:(BOOL)arg1 requestId:(unsigned long long)arg2 ;
-(void)_handleFailureWithError:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end

