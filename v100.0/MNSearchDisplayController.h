/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISearchDisplayController.h>

@class UIColor;

@interface MNSearchDisplayController : UISearchDisplayController {

	UIColor* _dimmingViewColor;
	double _dimmingViewAlpha;

}

@property (nonatomic,retain) UIColor * dimmingViewColor;              //@synthesize dimmingViewColor=_dimmingViewColor - In the implementation block
@property (assign,nonatomic) double dimmingViewAlpha;                 //@synthesize dimmingViewAlpha=_dimmingViewAlpha - In the implementation block
-(void)setDimmingViewColor:(UIColor *)arg1 ;
-(void)_applyDimmingViewConfiguration;
-(void)setDimmingViewAlpha:(double)arg1 ;
-(double)dimmingViewAlpha;
-(id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIColor *)dimmingViewColor;
@end

