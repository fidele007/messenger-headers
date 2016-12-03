/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSectionBasedTableViewController.h>
#import <Messenger/FBPaymentsFormTableViewSectionDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>

@protocol FBPaymentsCartItemDetailTableViewControllerDelegate;
@class FBPaymentsCartItemQuantitySelectionSection, FBPaymentsFormTableViewSection, FBPaymentsCartInfo, FBPaymentsCartItem, FBPaymentsEventListenerAnnouncer, NSString;

@interface FBPaymentsCartItemDetailTableViewController : FBPaymentsSectionBasedTableViewController <FBPaymentsFormTableViewSectionDelegate, FBPaymentsEventListener> {

	FBPaymentsCartItemQuantitySelectionSection* _quantitySelectionSection;
	FBPaymentsFormTableViewSection* _editableFormSection;
	FBPaymentsCartInfo* _cartInfo;
	FBPaymentsCartItem* _cartItem;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsCartItemDetailTableViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBPaymentsCartItem * cartItem;                                                        //@synthesize cartItem=_cartItem - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCartItemDetailTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)_updateTableViewSections;
-(id)_preconfiguredCartItemWithPreconfiguredCartItemInfo:(id)arg1 ;
-(id)_customCartItem;
-(BOOL)sufficientToProceed;
-(void)_updateTableViewSectionsWithPreconfiguredItemInfo:(id)arg1 ;
-(void)_updateTableViewSectionsWithCustomItemInfo:(id)arg1 ;
-(id)_quantitySelectionSectionWithQuantityLimit:(unsigned long long)arg1 ;
-(id)_itemPriceFromFormCollectedData:(id)arg1 ;
-(unsigned long long)_selectedQuantity;
-(void)paymentsFormTableViewSectionFormContentsDidUpdate:(id)arg1 ;
-(id)initWithCartInfo:(id)arg1 cartItem:(id)arg2 ;
-(FBPaymentsCartItem *)cartItem;
-(void)setCartItem:(FBPaymentsCartItem *)arg1 ;
-(void)setDelegate:(id<FBPaymentsCartItemDetailTableViewControllerDelegate>)arg1 ;
-(id<FBPaymentsCartItemDetailTableViewControllerDelegate>)delegate;
-(void)_updateBackgroundColor;
@end

