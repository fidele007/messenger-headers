/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@interface FBTransparentView : UIView {

	BOOL _ignoresOwnTouches;
	BOOL _ignoresTouchesWhenHidden;

}

@property (assign,nonatomic) BOOL ignoresOwnTouches;                     //@synthesize ignoresOwnTouches=_ignoresOwnTouches - In the implementation block
@property (assign,nonatomic) BOOL ignoresTouchesWhenHidden;              //@synthesize ignoresTouchesWhenHidden=_ignoresTouchesWhenHidden - In the implementation block
-(void)setIgnoresOwnTouches:(BOOL)arg1 ;
-(BOOL)ignoresOwnTouches;
-(BOOL)ignoresTouchesWhenHidden;
-(void)setIgnoresTouchesWhenHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

