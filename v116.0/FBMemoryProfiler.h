/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMemoryProfilerWindowTouchesHandling.h>
#import <Messenger/FBMemoryProfilerPresentationModeDelegate.h>

@class FBMemoryProfilerViewController, FBMemoryProfilerFloatingButtonController, FBMemoryProfilerContainerViewController, FBMemoryProfilerOptions, FBObjectGraphConfiguration, FBMemoryProfilerWindow, NSString;

@interface FBMemoryProfiler : NSObject <FBMemoryProfilerWindowTouchesHandling, FBMemoryProfilerPresentationModeDelegate> {

	FBMemoryProfilerViewController* _profilerViewController;
	FBMemoryProfilerFloatingButtonController* _floatingButtonController;
	FBMemoryProfilerContainerViewController* _containerViewController;
	FBMemoryProfilerOptions* _options;
	FBObjectGraphConfiguration* _retainCycleDetectorConfiguration;
	BOOL _enabled;
	unsigned long long _presentationMode;
	FBMemoryProfilerWindow* _memoryProfilerWindow;

}

@property (nonatomic,retain) FBMemoryProfilerWindow * memoryProfilerWindow;              //@synthesize memoryProfilerWindow=_memoryProfilerWindow - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;                        //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlugins:(id)arg1 retainCycleDetectorConfiguration:(id)arg2 ;
-(void)presentationDelegateChangePresentationModeToMode:(unsigned long long)arg1 ;
-(void)_hideFloatingButton;
-(void)_instanceAttachToWindow;
-(void)_instanceDetachFromWindow;
-(void)_showFloatingButton;
-(BOOL)window:(id)arg1 shouldReceiveTouchAtPoint:(CGPoint)arg2 ;
-(FBMemoryProfilerWindow *)memoryProfilerWindow;
-(void)setMemoryProfilerWindow:(FBMemoryProfilerWindow *)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)enable;
-(void)disable;
-(unsigned long long)presentationMode;
-(void)setPresentationMode:(unsigned long long)arg1 ;
@end

