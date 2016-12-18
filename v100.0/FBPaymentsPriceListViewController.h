/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/FBPaymentsPriceListControlling.h>

@protocol FBPaymentsPriceListControllingDelegate;
@class NSArray, FBPaymentsPriceItem, UITableView, FBPaymentsCurrencyQuantity, NSString;

@interface FBPaymentsPriceListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, FBPaymentsPriceListControlling> {

	NSArray* _priceItems;
	NSArray* _priceItemsToDisplay;
	FBPaymentsPriceItem* _totalPriceItem;
	UITableView* _tableView;
	FBPaymentsCurrencyQuantity* _totalAmount;
	BOOL _shouldDisplayTotalAmountOnly;
	BOOL _shouldShowTotalPrice;
	id<FBPaymentsPriceListControllingDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldDisplayTotalAmountOnly;                                       //@synthesize shouldDisplayTotalAmountOnly=_shouldDisplayTotalAmountOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTotalPrice;                                               //@synthesize shouldShowTotalPrice=_shouldShowTotalPrice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsPriceListControllingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_reloadTableView;
-(BOOL)shouldDisplayTotalAmountOnly;
-(BOOL)isValidOrder;
-(id)totalAmount;
-(void)setPriceItems:(id)arg1 ;
-(id)initWithPriceItems:(id)arg1 ;
-(void)setShouldShowTotalPrice:(BOOL)arg1 ;
-(void)setShouldDisplayTotalAmountOnly:(BOOL)arg1 ;
-(id)_priceItemsToDisplay;
-(BOOL)_isItemCellForIndexPath:(id)arg1 ;
-(BOOL)shouldShowTotalPrice;
-(void)setDelegate:(id<FBPaymentsPriceListControllingDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(id<FBPaymentsPriceListControllingDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end
