/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol FBPaymentsLoadingIndicatorControlling;
@class FBPaymentsHorizontalSeparatorView, FBNetworkImageView, FBUserSession;

@interface FBPaymentsPurchaseInfoTableViewCell : UITableViewCell {

	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	FBPaymentsHorizontalSeparatorView* _topSeparatorView;
	FBPaymentsHorizontalSeparatorView* _bottomSeparatorView;
	FBNetworkImageView* _networkImageView;
	FBUserSession* _session;
	unsigned long long _separatorMask;

}

@property (assign,nonatomic) unsigned long long separatorMask;              //@synthesize separatorMask=_separatorMask - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 extension:(id)arg2 ;
-(void)setSeparatorMask:(unsigned long long)arg1 ;
-(unsigned long long)separatorMask;
-(void)_configureNetworkImageViewWithUIImage:(id)arg1 ;
-(void)_configureNetworkImageViewWithImageURL:(id)arg1 ;
-(id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 loadingIndicatorFactory:(id)arg3 ;
-(void)configureWithExtension:(id)arg1 ;
-(void)_configureNetworkImageViewWithFBPaymentsImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)_setLoadingStatus:(BOOL)arg1 ;
@end

