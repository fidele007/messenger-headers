/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsTableViewCell.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@class FBPaymentsSelectPaymentMethodsPaymentMethodOptionCellViewModel, NSMutableArray, NSString;

@interface FBPaymentsSelectPaymentMethodsPaymentMethodOptionCell : FBPaymentsTableViewCell <FBPaymentsEdgeInsetsConfigurable> {

	FBPaymentsSelectPaymentMethodsPaymentMethodOptionCellViewModel* _viewModel;
	NSMutableArray* _imageViews;
	UIEdgeInsets _edgeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;               //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end

