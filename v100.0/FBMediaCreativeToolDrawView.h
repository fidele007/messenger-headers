/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBMediaCreativeToolsBaseViewDelegate.h>
#import <Messenger/FBMediaCreativeToolAnimationProtocol.h>

@protocol FBMediaCreativeToolDrawViewDelegate;
@class FBMediaCreativeToolsBaseView, UIColor, NSIndexPath, NSString;

@interface FBMediaCreativeToolDrawView : UIView <FBMediaCreativeToolsBaseViewDelegate, FBMediaCreativeToolAnimationProtocol> {

	id<FBMediaCreativeToolDrawViewDelegate> _delegate;
	FBMediaCreativeToolsBaseView* _baseView;

}

@property (nonatomic,readonly) UIColor * selectedColor; 
@property (nonatomic,retain) NSIndexPath * selectedIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)collectionViewDataForColors:(id)arg1 ;
-(void)loadWithInitialAnimation:(/*^block*/id)arg1 ;
-(void)loadWithTransitionAnimation:(/*^block*/id)arg1 ;
-(void)disappearWithFinishAnimation:(/*^block*/id)arg1 ;
-(void)disappearWithTransitionAnimation:(/*^block*/id)arg1 ;
-(void)mediaCreativeToolsBaseView:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithColors:(id)arg1 delegate:(id)arg2 ;
-(void)layoutSubviews;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(UIColor *)selectedColor;
@end
