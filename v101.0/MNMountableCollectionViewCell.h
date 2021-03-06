/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNCollectionViewLayoutAttributesTracking.h>

@class UIView, UICollectionViewLayoutAttributes, NSString;

@interface MNMountableCollectionViewCell : UICollectionViewCell <MNCollectionViewLayoutAttributesTracking> {

	BOOL _disablesAnimation;
	UIView* _mountedView;
	UICollectionViewLayoutAttributes* _layoutAttributes;

}

@property (nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) UIView * mountedView;                                           //@synthesize mountedView=_mountedView - In the implementation block
@property (assign,nonatomic) BOOL disablesAnimation;                                         //@synthesize disablesAnimation=_disablesAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)mountedView;
-(void)setMountedView:(UIView *)arg1 ;
-(BOOL)disablesAnimation;
-(void)setDisablesAnimation:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
@end

