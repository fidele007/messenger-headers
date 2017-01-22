/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MNForwardMessageView;

@interface MNForwardMessageContainerView : UIView {

	MNForwardMessageView* _singleRecipientModeView;
	MNForwardMessageView* _groupModeView;
	BOOL _showsBlockingUI;
	unsigned long long _shareMode;

}

@property (assign,nonatomic) unsigned long long shareMode;              //@synthesize shareMode=_shareMode - In the implementation block
@property (assign,nonatomic) BOOL showsBlockingUI;                      //@synthesize showsBlockingUI=_showsBlockingUI - In the implementation block
-(void)setShowsBlockingUI:(BOOL)arg1 ;
-(id)initWithSingleRecipientModeView:(id)arg1 groupModeView:(id)arg2 ;
-(void)setShareMode:(unsigned long long)arg1 ;
-(unsigned long long)shareMode;
-(BOOL)showsBlockingUI;
-(void)layoutSubviews;
@end
