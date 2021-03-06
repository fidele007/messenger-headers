/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNSoccerFxEffect.h>

@class UIImageView;

@interface MNSoccerFxSpotlight : UIView <MNSoccerFxEffect> {

	UIImageView* _imageView;
	double _startTime;
	BOOL _isOnRightSide;
	long long _yIndex;

}
-(void)setupAtYIndex:(long long)arg1 onRightSide:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)updateForTime:(double)arg1 ;
@end

