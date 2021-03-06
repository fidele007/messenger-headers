/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNInboxUnitShareViewDelegate;
@class UIButton, NSString;

@interface MNInboxUnitShareView : UIView {

	UIButton* _shareButton;
	id<MNInboxUnitShareViewDelegate> _delegate;
	NSString* _title;

}

@property (assign,nonatomic,__weak) id<MNInboxUnitShareViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
-(void)_didTapShareButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNInboxUnitShareViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id<MNInboxUnitShareViewDelegate>)delegate;
-(NSString *)title;
@end

