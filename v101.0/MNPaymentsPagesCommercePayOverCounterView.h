/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol MNPaymentsPagesCommercePayOverCounterViewDelegate;
@class UIImageView, FBRichTextView, FBPaymentsHorizontalSeparatorView, UICollectionView, NSArray, MNPaymentsTransferReceiptItemView, FBPaymentsCurrencyAndAmountView, UIButton, MNPaymentsPagesCommercePayOverCounterViewModel, NSString;

@interface MNPaymentsPagesCommercePayOverCounterView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UIImageView* _imageView;
	FBRichTextView* _instructionTextView;
	FBPaymentsHorizontalSeparatorView* _separatorView;
	UICollectionView* _collectionView;
	NSArray* _collectionViewItems;
	MNPaymentsTransferReceiptItemView* _refNo1View;
	MNPaymentsTransferReceiptItemView* _refNo2View;
	MNPaymentsTransferReceiptItemView* _expireTimeView;
	FBPaymentsCurrencyAndAmountView* _currencyAndAmountView;
	UIButton* _viewInstructionsButton;
	id<MNPaymentsPagesCommercePayOverCounterViewDelegate> _delegate;
	MNPaymentsPagesCommercePayOverCounterViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNPaymentsPagesCommercePayOverCounterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNPaymentsPagesCommercePayOverCounterViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupCollectionView;
-(void)_didTapActionButton;
-(void)showQRCode;
-(void)showBarCode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNPaymentsPagesCommercePayOverCounterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPaymentsPagesCommercePayOverCounterViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(MNPaymentsPagesCommercePayOverCounterViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsPagesCommercePayOverCounterViewModel *)arg1 ;
@end
