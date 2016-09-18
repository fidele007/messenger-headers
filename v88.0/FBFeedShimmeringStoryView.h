/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBShimmeringView, UIImageView;

@interface FBFeedShimmeringStoryView : UIView {

	FBShimmeringView* _shimmeringView;
	UIImageView* _shimmeringImageView;
	UIImageView* _baseImageView;
	unsigned long long _style;

}

@property (assign,getter=isShimmering,nonatomic) BOOL shimmering; 
@property (assign,nonatomic) unsigned long long style;                         //@synthesize style=_style - In the implementation block
-(void)setShimmering:(BOOL)arg1 ;
-(BOOL)isShimmering;
-(void)_setupShimmer;
-(id)_baseImageForStyle:(unsigned long long)arg1 ;
-(id)_shimmeringImageForStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
@end
