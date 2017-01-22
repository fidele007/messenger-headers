/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBMediaCreativeToolsBaseViewCellProtocol.h>

@class FBMediaCreativeToolsEffectCellModel, NSString;

@interface FBMediaCreativeToolsEffectBaseCell : UICollectionViewCell <FBMediaCreativeToolsBaseViewCellProtocol> {

	BOOL _isAnimatingTouchesBegan;
	BOOL _didTouchesEnd;
	FBMediaCreativeToolsEffectCellModel* _cellModel;

}

@property (nonatomic,readonly) FBMediaCreativeToolsEffectCellModel * cellModel;              //@synthesize cellModel=_cellModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateTouchesEnded;
-(void)_didFinishTouches;
-(void)updateWithCellModel:(id)arg1 ;
-(FBMediaCreativeToolsEffectCellModel *)cellModel;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
@end
