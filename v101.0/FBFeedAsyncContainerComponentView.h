/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBFeedUnitAsyncTransactionController, FBFeedAsyncTransactionLogger, NSString, UIView;

@interface FBFeedAsyncContainerComponentView : UIView {

	long long _identifier;
	FBFeedUnitAsyncTransactionController* _asyncTransactionController;
	FBFeedAsyncTransactionLogger* _asyncTransactionLogger;
	NSString* _nameSpace;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)configureWithIdentifier:(long long)arg1 asyncTransactionController:(id)arg2 asyncTransactionLogger:(id)arg3 ;
-(void)_openTransaction;
-(void)fb_asyncTransactionContainerStateDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)contentView;
@end

