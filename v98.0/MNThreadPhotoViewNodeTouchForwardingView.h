/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNThreadPhotoViewNodeTouchForwardingViewDelegate;
@interface MNThreadPhotoViewNodeTouchForwardingView : UIView {

	id<MNThreadPhotoViewNodeTouchForwardingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadPhotoViewNodeTouchForwardingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MNThreadPhotoViewNodeTouchForwardingViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<MNThreadPhotoViewNodeTouchForwardingViewDelegate>)delegate;
@end

