/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBAnalytics, NSMutableSet, NSString;

@interface FBMDeliveryReceiptSendLogger : NSObject <FBViewerContextClassProvidable> {

	FBAnalytics* _analytics;
	NSMutableSet* _failedDeliveryReceiptBatchIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)logGenerationWithDeliveryReceiptBatch:(id)arg1 source:(unsigned long long)arg2 ;
-(void)logSendFailureWithDeliveryReceiptBatch:(id)arg1 source:(unsigned long long)arg2 error:(id)arg3 ;
-(void)logSendTimeoutWithDeliveryReceiptBatch:(id)arg1 source:(unsigned long long)arg2 connected:(BOOL)arg3 ;
-(void)logSendSuccessWithDeliveryReceiptBatch:(id)arg1 source:(unsigned long long)arg2 ;
@end

