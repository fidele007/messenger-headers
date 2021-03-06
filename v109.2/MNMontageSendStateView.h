/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(void)_updateSendState;
-(void)setSendState:(unsigned long long)arg1 ;
-(unsigned long long)sendState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMontageSendStateViewDelegate>)arg1 ;
-(id<MNMontageSendStateViewDelegate>)delegate;
-(void)_updateSendProgress;
-(double)sendProgress;
-(void)setSendProgress:(double)arg1 ;
@end

