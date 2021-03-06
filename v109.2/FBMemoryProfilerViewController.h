/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/FBMemoryProfilerSectionHeaderDelegate.h>
#import <Messenger/FBMemoryProfilerPresenting.h>
#import <Messenger/FBMemoryProfilerMovableViewController.h>

@protocol FBMemoryProfilerPresentationModeDelegate;
@class FBMemoryProfilerView, FBMemoryProfilerDataSource, NSTimer, NSByteCountFormatter, UITapGestureRecognizer, UIViewController, FBRetainCyclePresenter, FBRetainCycleAnalysisCache, FBObjectGraphConfiguration, FBMemoryProfilerOptions, NSString;

@interface FBMemoryProfilerViewController : UIViewController <UITableViewDelegate, UITextFieldDelegate, FBMemoryProfilerSectionHeaderDelegate, FBMemoryProfilerPresenting, FBMemoryProfilerMovableViewController> {

	FBMemoryProfilerView* _profilerView;
	FBMemoryProfilerDataSource* _dataSource;
	NSTimer* _timer;
	NSByteCountFormatter* _byteCountFormatter;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIViewController* _currentlyPresentedViewController;
	FBRetainCyclePresenter* _retainCyclePresenter;
	FBRetainCycleAnalysisCache* _analysisCache;
	FBObjectGraphConfiguration* _retainCycleDetectorConfiguration;
	id<FBMemoryProfilerPresentationModeDelegate> _presentationModeDelegate;
	FBMemoryProfilerOptions* _profilerOptions;

}

@property (assign,nonatomic,__weak) id<FBMemoryProfilerPresentationModeDelegate> presentationModeDelegate;              //@synthesize presentationModeDelegate=_presentationModeDelegate - In the implementation block
@property (nonatomic,copy) FBMemoryProfilerOptions * profilerOptions;                                                   //@synthesize profilerOptions=_profilerOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBMemoryProfilerPresentationModeDelegate>)presentationModeDelegate;
-(void)containerWillMove:(id)arg1 ;
-(BOOL)shouldStretchInMovableContainer;
-(double)minimumHeightInMovableContainer;
-(void)setPresentationModeDelegate:(id<FBMemoryProfilerPresentationModeDelegate>)arg1 ;
-(void)setProfilerOptions:(FBMemoryProfilerOptions *)arg1 ;
-(void)_loadDataFromTimer:(id)arg1 ;
-(void)_sortControlValueChanged;
-(void)_hideProfiler;
-(void)_markGeneration;
-(void)setupTapHandler;
-(void)_updateProfilerView;
-(void)_tap:(id)arg1 ;
-(void)_hideKeyboardIfPresent;
-(void)_findRetainCyclesForClassesNamed:(id)arg1 inGeneration:(unsigned long long)arg2 presentDetails:(BOOL)arg3 ;
-(BOOL)memoryProfilerCanPresent;
-(void)sectionHeaderRequestedExpandCollapseAction:(id)arg1 ;
-(void)sectionHeaderRequestedRetainCycleDetection:(id)arg1 ;
-(void)memoryProfilerPresenter:(id)arg1 presentViewController:(id)arg2 ;
-(void)memoryProfilerPresenter:(id)arg1 dismissViewController:(id)arg2 ;
-(id)initWithOptions:(id)arg1 retainCycleDetectorConfiguration:(id)arg2 ;
-(FBMemoryProfilerOptions *)profilerOptions;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_update;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_loadData;
-(void)_textFieldDidChange:(id)arg1 ;
@end

