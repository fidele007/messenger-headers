/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol FBMobileConfigDebugQEViewControllerDelegate;
@class NSMutableArray, UIColor;

@interface FBMobileConfigDebugQEViewController : UITableViewController {

	const FBMobileConfigQEExperimentInfo* _experiment;
	FBMobileConfigQEUniverseInfo* _universe;
	const FBMobileConfigQEGroupInfo* _currentGroup;
	shared_ptr<mobileconfig::FBMobileConfigQEGroupInfo>* _disabledGroup;
	vector<mobileconfig::FBMobileConfigQEParamInfo, std::__1::allocator<mobileconfig::FBMobileConfigQEParamInfo> >* _actualParams;
	NSMutableArray* _extraGroupRows;
	UIColor* _activeColor;
	UIColor* _overrideColor;
	BOOL _inExistingGroup;
	id<FBMobileConfigDebugQEViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMobileConfigDebugQEViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(id)_configureCellForInformationSectionAtIndexPath:(id)arg1 ForTableView:(id)arg2 ;
-(BOOL)fb_showBackArrowButton;
-(void)updateCurrentGroup;
-(id)_configureCellForGroupsSectionAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(id)_configureCellForParamsSectionAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(id)initWithExperiment:(const FBMobileConfigQEExperimentInfo*)arg1 universe:(FBMobileConfigQEUniverseInfo*)arg2 ;
-(void)setDelegate:(id<FBMobileConfigDebugQEViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBMobileConfigDebugQEViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
@end

