/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCameraAnalyticsPayloadProvider, FBProductionDebugLogger;
#import <Messenger/Messenger-Structs.h>
@interface FBCameraActionPerformanceLogger : NSObject {

	id<FBCameraAnalyticsPayloadProvider> _analyticsPayloadProvider;
	id<FBProductionDebugLogger> _debugLogger;

}
-(id)initWithAnalyticsPayloadProvider:(id)arg1 debugLogger:(id)arg2 ;
-(void)logStartForEventInfo:(const FBCameraEventLoggingInfo*)arg1 ;
-(void)logStopForEventInfo:(const FBCameraEventLoggingInfo*)arg1 withStatus:(const variant<FBCamera::PerfStatusSuccess, FBCamera::PerfStatusAbort, FBCamera::PerfStatusFail, FBCamera::PerfStatusNoTracking>=ialigned_storage<8, 8>=(data_t=[8c]a8)}}Ref)arg2 ;
@end

