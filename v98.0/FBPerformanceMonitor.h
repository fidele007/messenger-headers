/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPerformanceMonitorViewController;

@interface FBPerformanceMonitor : NSObject {

	FBPerformanceMonitorViewController* _performanceMonitorViewController;

}
+(void)attachPerformanceMonitorToWindow:(id)arg1 ;
+(void)detatchPerformanceMonitorFromWindow;
+(id)performanceMonitor;
+(void)addMetric:(id)arg1 ;
+(void)removeMetric:(id)arg1 ;
+(void)removeAllMetrics:(id)arg1 ;
-(void)_createViewControllerIfNeeded;
-(void)_attachViewControllerToView:(id)arg1 ;
-(void)_destroyViewController;
-(id)init;
@end

