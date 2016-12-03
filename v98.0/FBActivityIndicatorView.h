/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface FBActivityIndicatorView : UIView {

	BOOL _animating;
	BOOL _scheduledStartAnimating;
	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _startDelayed;

}

@property (assign,nonatomic) long long activityIndicatorViewStyle; 
@property (assign,nonatomic) BOOL hidesWhenStopped; 
@property (assign,getter=isStartDelayed,nonatomic) BOOL startDelayed;              //@synthesize startDelayed=_startDelayed - In the implementation block
-(void)setStartDelayed:(BOOL)arg1 ;
-(void)_startAnimatingNow;
-(BOOL)isStartDelayed;
-(id)init;
-(void)layoutSubviews;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(long long)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
@end

