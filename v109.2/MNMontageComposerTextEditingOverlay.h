/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNMontageComposerTextEditingOverlayDelegate;
@interface MNMontageComposerTextEditingOverlay : UIView {

	id<MNMontageComposerTextEditingOverlayDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageComposerTextEditingOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MNMontageComposerTextEditingOverlayDelegate>)arg1 ;
-(id<MNMontageComposerTextEditingOverlayDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithColor:(id)arg1 ;
@end

