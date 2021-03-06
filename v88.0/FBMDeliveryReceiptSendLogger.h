/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

