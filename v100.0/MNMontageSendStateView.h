/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageSendStateViewDelegate;
@class FBRichTextView, MNCircularProgressIndicator, UIControl;

@interface MNMontageSendStateView : UIView {

	FBRichTextView* _sendStateLabel;
	MNCircularProgressIndicator* _sendProgressIndicator;
	UIControl* _touchControl;
	id<MNMontageSendStateViewDelegate> _delegate;
	unsigned long long _sendState;
	double _sendProgress;

}

@property (assign,nonatomic,__weak) id<MNMontageSendStateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long sendState;                                    //@synthesize sendState=_sendState - In the implementation block
@property (assign,nonatomic) double sendProgress;                                             //@synthesize sendProgress=_sendProgress - In the implementation block
-(void)_didTap:(id)arg1 ;
-(unsigned long long)sendState;
-(void)setSendState:(unsigned long long)arg1 ;
-(void)setSendProgress:(double)arg1 ;
-(void)_updateSendState;
-(double)sendProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMontageSendStateViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMontageSendStateViewDelegate>)delegate;
-(void)_updateSendProgress;
@end

