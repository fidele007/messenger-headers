/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBPaymentsPurchaseInfoViewControlling.h>

@class FBPaymentsPurchaseInfoExtensionController, FBUserSession, NSArray, NSString;

@interface FBPaymentsPurchaseInfoTableViewController : UITableViewController <FBPaymentsPurchaseInfoViewControlling> {

	FBPaymentsPurchaseInfoExtensionController* _purchaseInfoExtnesionController;
	FBUserSession* _session;
	NSArray* _displayedExtensions;
	BOOL _hasExtensionsFinishedInitialLoading;
	NSArray* _activatedPurchaseInfoExtensions;

}

@property (nonatomic,copy) NSArray * activatedPurchaseInfoExtensions;              //@synthesize activatedPurchaseInfoExtensions=_activatedPurchaseInfoExtensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadDataFromExtensions;
-(NSArray *)activatedPurchaseInfoExtensions;
-(void)setActivatedPurchaseInfoExtensions:(NSArray *)arg1 ;
-(id)initWithSession:(id)arg1 purchaseInfoExtensionController:(id)arg2 ;
-(void)_updateDisplayedPurchaseInfoExtensions;
-(void)_reloadFromExtensions;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
@end

