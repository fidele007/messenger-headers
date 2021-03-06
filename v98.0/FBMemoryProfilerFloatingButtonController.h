/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMemoryProfilerMovableViewController.h>

@protocol FBMemoryProfilerPresentationModeDelegate;
@class UIButton, NSTimer, NSByteCountFormatter, NSString;

@interface FBMemoryProfilerFloatingButtonController : UIViewController <FBMemoryProfilerMovableViewController> {

	UIButton* _floatingButton;
	NSTimer* _timer;
	NSByteCountFormatter* _formatter;
	id<FBMemoryProfilerPresentationModeDelegate> _presentationModeDelegate;

}

@property (assign,nonatomic,__weak) id<FBMemoryProfilerPresentationModeDelegate> presentationModeDelegate;              //@synthesize presentationModeDelegate=_presentationModeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped;
-(id<FBMemoryProfilerPresentationModeDelegate>)presentationModeDelegate;
-(void)containerWillMove:(id)arg1 ;
-(BOOL)shouldStretchInMovableContainer;
-(double)minimumHeightInMovableContainer;
-(void)setPresentationModeDelegate:(id<FBMemoryProfilerPresentationModeDelegate>)arg1 ;
-(id)init;
-(void)loadView;
-(void)_update;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

