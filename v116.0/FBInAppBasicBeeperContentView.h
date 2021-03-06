/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/InAppNotificationContentView.h>

@protocol FBInAppBasicBeeperContentViewDelegate;
@class UIView, UIImageView, NSAttributedString, FBRichTextView, NSString;

@interface FBInAppBasicBeeperContentView : UIView <InAppNotificationContentView> {

	UIView* _separatorView;
	UIImageView* _handleView;
	id<FBInAppBasicBeeperContentViewDelegate> _delegate;
	NSAttributedString* _attributedMessage;
	FBRichTextView* _messageView;
	UIView* _imageView;

}

@property (assign,nonatomic,__weak) id<FBInAppBasicBeeperContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedMessage;                                   //@synthesize attributedMessage=_attributedMessage - In the implementation block
@property (nonatomic,retain) FBRichTextView * messageView;                                           //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                                     //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)messageFontSize;
-(double)messageViewLeftInset;
-(double)messageViewRightInset;
-(void)didSelectNotification;
-(void)didIgnoreNotification;
-(void)didDismissNotification;
-(void)didReplaceNotification;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBInAppBasicBeeperContentViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBInAppBasicBeeperContentViewDelegate>)delegate;
-(UIView *)imageView;
-(BOOL)isAccessibilityElement;
-(void)setImageView:(UIView *)arg1 ;
-(void)setAttributedMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedMessage;
-(FBRichTextView *)messageView;
-(void)setMessageView:(FBRichTextView *)arg1 ;
@end

