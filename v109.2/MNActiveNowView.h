/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNActiveNowViewDelegate;
@class UIView;

@interface MNActiveNowView : UIView {

	UIView* _activeNowPeopleView;
	double _activeNowHeadSize;
	id<MNActiveNowViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNActiveNowViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithActiveNowPeopleView:(id)arg1 activeNowHeadSize:(double)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNActiveNowViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNActiveNowViewDelegate>)delegate;
@end

