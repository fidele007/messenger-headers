/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface FBFacebookRedirectionView : UIView {

	UILabel* _label;
	UIImageView* _dismissIcon;

}
+(id)drawDismissIcon;
-(BOOL)pointInsideDismissView:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)hasDismissIcon;
-(void)showDismissIcon:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBannerText:(id)arg1 ;
@end

