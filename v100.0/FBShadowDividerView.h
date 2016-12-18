/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBShadowDividerView : UIView {

	UIView* _dividerView;
	UIView* _shadowView;
	unsigned long long _mode;
	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long mode;                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) BOOL isHorizontal; 
-(id)initWithShadowDirection:(unsigned long long)arg1 mode:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)direction;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(BOOL)isHorizontal;
@end
