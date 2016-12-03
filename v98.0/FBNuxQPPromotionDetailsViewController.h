/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class FBQPPromotion, FBUserSession, FBNuxCoordinator, FBQuickPromotionEligibilityChecker, NSDictionary, NSArray, UISegmentedControl, FBQuickPromotionCoordinator, FBQuickPromotionFiltersHelper;

@interface FBNuxQPPromotionDetailsViewController : UITableViewController {

	FBQPPromotion* _promotion;
	FBUserSession* _session;
	FBNuxCoordinator* _nuxCoordinator;
	FBQuickPromotionEligibilityChecker* _eligibilityChecker;
	NSDictionary* _eligibilityWaterfall;
	NSArray* _filterResults;
	NSDictionary* _booleanFilterDebugInfo;
	UISegmentedControl* _eligibilityOverrideSegmentedControl;

}

@property (nonatomic,readonly) FBQuickPromotionCoordinator * quickPromotionCoordinator; 
@property (nonatomic,readonly) FBQuickPromotionFiltersHelper * filtersHelper; 
@property (nonatomic,copy) NSDictionary * eligibilityWaterfall;                                      //@synthesize eligibilityWaterfall=_eligibilityWaterfall - In the implementation block
@property (nonatomic,copy) NSArray * filterResults;                                                  //@synthesize filterResults=_filterResults - In the implementation block
@property (nonatomic,copy) NSDictionary * booleanFilterDebugInfo;                                    //@synthesize booleanFilterDebugInfo=_booleanFilterDebugInfo - In the implementation block
@property (nonatomic,retain) UISegmentedControl * eligibilityOverrideSegmentedControl;               //@synthesize eligibilityOverrideSegmentedControl=_eligibilityOverrideSegmentedControl - In the implementation block
-(id)analyticsModule;
-(FBQuickPromotionCoordinator *)quickPromotionCoordinator;
-(BOOL)fb_showNavBarSearchField;
-(double)_heightForDetailText:(id)arg1 fontSize:(double)arg2 ;
-(FBQuickPromotionFiltersHelper *)filtersHelper;
-(void)setEligibilityWaterfall:(NSDictionary *)arg1 ;
-(id)_eligibilityOverrideCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_propertiesCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_eligibilityCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_filtersCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_eventsCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_rawJSONCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_editCreativeCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_booleanFilterCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSDictionary *)booleanFilterDebugInfo;
-(UISegmentedControl *)eligibilityOverrideSegmentedControl;
-(NSDictionary *)eligibilityWaterfall;
-(NSArray *)filterResults;
-(id)_eventIDinRow:(unsigned long long)arg1 ;
-(void)_handleEligibilityOverrideChange:(id)arg1 ;
-(id)initWithNuxCoordinator:(id)arg1 forPromotion:(id)arg2 session:(id)arg3 ;
-(void)setFilterResults:(NSArray *)arg1 ;
-(void)setBooleanFilterDebugInfo:(NSDictionary *)arg1 ;
-(void)setEligibilityOverrideSegmentedControl:(UISegmentedControl *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

