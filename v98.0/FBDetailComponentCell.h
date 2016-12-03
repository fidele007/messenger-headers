/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, FBDetailComponentController;

@interface FBDetailComponentCell : UITableViewCell {

	UIImageView* _componentMaskImageView;
	BOOL _widthSensitiveLayout;
	FBDetailComponentController* _componentController;
	UIEdgeInsets _contentEdgeInset;

}

@property (assign,nonatomic) BOOL widthSensitiveLayout;                                             //@synthesize widthSensitiveLayout=_widthSensitiveLayout - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentEdgeInset;                                       //@synthesize contentEdgeInset=_contentEdgeInset - In the implementation block
@property (assign,nonatomic,__weak) FBDetailComponentController * componentController;              //@synthesize componentController=_componentController - In the implementation block
+(UIEdgeInsets)componentMaskImageViewBoundsInset;
-(id)interiorColor;
-(BOOL)widthSensitiveLayout;
-(void)setWidthSensitiveLayout:(BOOL)arg1 ;
-(UIEdgeInsets)contentEdgeInset;
-(FBDetailComponentController *)componentController;
-(void)setComponentController:(FBDetailComponentController *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)borderImage;
@end

